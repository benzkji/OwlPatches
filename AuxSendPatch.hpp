////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
 
 LICENSE:
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 
 */

/* created by the OWL team 2013 */


////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __AuxSendPatch_h__
#define __AuxSendPatch_h__

#include "StompBox.h"

class AuxSendPatch : public Patch {
private:
    float currentSend, savedSend, savedSendExpression;
    
public:
  AuxSendPatch(){
    registerParameter(PARAMETER_A, "Send");
    registerParameter(PARAMETER_B, "");    
    registerParameter(PARAMETER_C, "AutoLevel");    
    registerParameter(PARAMETER_D, "Return");
    registerParameter(PARAMETER_E, "ExPedal Send");
  }
    
  void setCurrentSend(float send, float sendExpression) {
    if (send != savedSend) {
      savedSend = send;
      currentSend = send;
    }
    if (sendExpression != savedSendExpression) {
      savedSendExpression = sendExpression;
      currentSend = sendExpression;
    }
  }
    
  void processAudio(AudioBuffer &buffer){
    float send = getParameterValue(PARAMETER_A);
    float sendExpression = getParameterValue(PARAMETER_E);
    setCurrentSend(send, sendExpression);
    float returnLevel = getParameterValue(PARAMETER_D);
    float totalReturn = (returnLevel + currentSend ) / 2;
    float autoLevel  = getParameterValue(PARAMETER_C);
    float dimin = 1*(1 - autoLevel) + autoLevel*(1 - totalReturn / 2);
    /* autolevel (needed when f.e. fuzzing.
       not needed at all for a wet only delay...)
    1 => 0.5
    0.5 => 0.75
    0 => 1
    => 1 - v / 2
    */
    int size = buffer.getSize();
    float* left = buffer.getSamples(0);
    float* right = buffer.getSamples(1);
    float l, r;
    for(int i=0; i<size; ++i){
      l = dimin*left[i] + dimin*returnLevel*right[i];
      r = currentSend*left[i];
      left[i] = l;
      right[i] = r;
    }
    
  }
};

#endif // __AuxSendPatch_h__


////////////////////////////////////////////////////////////////////////////////////////////////////
