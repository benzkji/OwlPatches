/* Help:
 REGISTER_PATCH(yourHppFileName,
                "NameThatWillBeDisplayed",
                numberInputChannels,
                numberOutputChannels);
 
 The first two registered patches are the default green and red patches in compiled the firmware.
*/

REGISTER_PATCH(DroneBoxPatch, "OL/DroneBox", 2, 2);
//REGISTER_PATCH(DroneBoxPatch, "Contest/DroneBox", 1, 1);
//REGISTER_PATCH(PatchSelectorPatch, "Patch Selector", 0, 0);
REGISTER_PATCH(FreeVerbPatch, "FreeVerb", 1, 1);

REGISTER_PATCH(BlipperPatch, "OL/Blipper", 2, 2);
REGISTER_PATCH(DualFreqShifterPatch, "OL/Dual Frequency Shifter", 2, 2);
REGISTER_PATCH(StereoFreqShifterPatch, "OL/Stereo Frequency Shifter", 2, 2);
REGISTER_PATCH(DualPitchShifterPatch, "OL/Dual Pitch Shifter", 2, 2);
REGISTER_PATCH(ThruZeroFlangerPatch, "OL/Thru Zero Flanger", 2, 2);
REGISTER_PATCH(WeirdPhaserPatch, "OL/Weird Phaser", 2, 2);
REGISTER_PATCH(XFMPatch, "OL/XFM Oscillator", 2, 2);

REGISTER_PATCH(SimpleDelayPatch, "Simple Delay", 1, 1);
REGISTER_PATCH(GainPatch, "Gain", 2, 2);

REGISTER_PATCH(AuxSendPatch, "AuxSend", 2, 2);

REGISTER_PATCH(ParametricEqPatch, "Parametric EQ", 1, 1);
REGISTER_PATCH(OverdrivePatch, "Overdrive", 2, 2);
REGISTER_PATCH(PhaserPatch, "Phaser", 1, 1);
REGISTER_PATCH(StateVariableFilterPatch, "State Variable Filter", 1, 1);
REGISTER_PATCH(ResonantFilterPatch, "Resonant Low Pass Filter", 1, 1);
REGISTER_PATCH(LeakyIntegratorPatch, "Leaky Integrator", 1, 1);
REGISTER_PATCH(OctaveDownPatch, "Octave Pitch Shifter", 1, 1);
REGISTER_PATCH(StereoMixerPatch, "Stereo Mixer", 2, 2);
REGISTER_PATCH(VibroFlangePatch, "Vibro-Flange", 1, 1);
REGISTER_PATCH(RingModulatorPatch, "Ring Modulator", 2, 2);
REGISTER_PATCH(SynthPatch, "Synthesizer", 1, 1);
REGISTER_PATCH(FourBandsEqPatch, "Four Band EQ", 1, 1);
REGISTER_PATCH(BiasedDelayPatch, "Contest/BiasedDelay", 2, 2);
REGISTER_PATCH(little_blo_bleep, "Contest/blo bleep", 2, 2);
REGISTER_PATCH(BiasPatch, "Contest/Bias", 2, 2);
REGISTER_PATCH(BitH8rPatch, "Contest/BitH8r", 2, 2);
REGISTER_PATCH(DualTremoloPatch, "Contest/DualTremolo", 2, 2);
REGISTER_PATCH(MdaBandistoPatch, "MDA/Bandisto", 2, 2);
REGISTER_PATCH(MdaStereoPatch, "MDA/Stereo", 2, 2);
REGISTER_PATCH(MdaTransientPatch, "MDA/Transient", 2, 2);
REGISTER_PATCH(QompressionPatch, "Qompression", 2, 2);
REGISTER_PATCH(PsycheFilterPatch, "Psyche Filter", 2, 2);
REGISTER_PATCH(DigitalMayhemPatch, "Digital Mayhem", 1, 1);
REGISTER_PATCH(ReverseReverbPatch, "Reverse Reverb", 1, 1);
REGISTER_PATCH(SimpleDistortionPatch, "Simple Distortion", 1, 1);
REGISTER_PATCH(TremoloPatch, "Tremolo", 2, 2);
REGISTER_PATCH(MoogPatch, "Moog Drive Filter", 1, 1);
REGISTER_PATCH(KarplusStrongPatch, "Karplus Strong", 0, 2);
REGISTER_PATCH(JotReverbPatch,"JotReverb", 2, 2);
REGISTER_PATCH(GhostNotePatch,"GhostNote", 1, 1);
REGISTER_PATCH(LpfDelayPatch, "Filtered Delay", 1, 1);
REGISTER_PATCH(BittaPatch, "Bitta", 1, 1);
REGISTER_PATCH(VidhaPatch, "Vidha", 2, 2);
REGISTER_PATCH(OverOverPatch, "OverOverDrive", 1, 1);
REGISTER_PATCH(ToneFilterPatch, "ToneFilter", 1, 1);
REGISTER_PATCH(PlateVerbPatch, "Plate Verb", 1, 1);
REGISTER_PATCH(CompressorPatch, "Compressor", 1, 1);

REGISTER_PATCH(FaustVerbPatch, "Faust/FreeVerb", 1, 1);
REGISTER_PATCH(HarpPatch, "Faust/Harp", 0, 1);
REGISTER_PATCH(HarpAutoPatch, "Faust/AutoHarp", 0, 1);
REGISTER_PATCH(SmoothDelayPatch, "Faust/SmoothDelay", 1, 1);
REGISTER_PATCH(EchoPatch, "Faust/1 Sec Echo", 1, 1);
REGISTER_PATCH(CrybabyPatch, "Faust/Crybaby", 1, 1);
REGISTER_PATCH(StereoWahPatch, "Faust/StereoWah", 2, 2);
REGISTER_PATCH(StereoEchoPatch, "Faust/StereoEcho", 2, 2);
REGISTER_PATCH(LowPassFilterPatch, "Faust/Low Pass Filter", 1, 1);
REGISTER_PATCH(LowShelfPatch, "Faust/Low Shelf Filter", 1, 1);
REGISTER_PATCH(HighShelfPatch, "Faust/High Shelf Filter", 1, 1);
REGISTER_PATCH(PitchShifterPatch, "Faust/Pitch Shifter", 1, 1);

REGISTER_PATCH(GuitarixCompressorPatch, "Guitarix/Compressor", 1, 1);
REGISTER_PATCH(GuitarixPhaserPatch, "Guitarix/Phaser", 2, 2);
REGISTER_PATCH(GuitarixMoogPatch, "Guitarix/Moog Filter", 1, 1);
REGISTER_PATCH(GuitarixOverdrivePatch, "Guitarix/Overdrive", 1, 1);
REGISTER_PATCH(GuitarixPhaserMonoPatch, "Guitarix/PhaserMono", 1, 1);
REGISTER_PATCH(GuitarixOscTubePatch, "Guitarix/OscTube", 1, 1);
REGISTER_PATCH(GuitarixFlangerGXPatch, "Guitarix/FlangerGX", 1, 1);
REGISTER_PATCH(GuitarixDunwahPatch, "Guitarix/Dunwah", 1, 1);
REGISTER_PATCH(GuitarixTonePatch, "Guitarix/Tone", 1, 1);
REGISTER_PATCH(GuitarixBMfpPatch, "Guitarix/BigMuffFuzz", 1, 1);
REGISTER_PATCH(GuitarixDistortion1Patch, "Guitarix/Distortion1", 1, 1);

/* TO BE WORKED ON */
// REGISTER_PATCH(ConnyPatch, "Contest/ConnyPatch", 2, 2);
// REGISTER_PATCH(QompanderPatch, "Faust/Qompander", 1, 1); // 8851 ARM cycles
// REGISTER_PATCH(AutoWahPatch, "Faust/AutoWah", 1, 1); // 4003 ARM cycles
// REGISTER_PATCH(SimpleDriveDelayPatch, "Drive Delay", 1, 1);
// REGISTER_PATCH(AutotalentPatch, "AutoTalent", 2, 2);
// REGISTER_PATCH(EnvelopeFilterPatch, "Envelope Filter", 1, 1);
// REGISTER_PATCH(TemplatePatch, "Template", 0, 0);
// REGISTER_PATCH(JumpDelay, "Contest/JumpDelay", 0, 0);
// REGISTER_PATCH(SampleJitterPatch, "Contest/SampleJitter", 0, 0);
// REGISTER_PATCH(SirenPatch, "Contest/Siren", 0, 0);
// REGISTER_PATCH(LpfDelayPhaserPatch, "Low Pass Filtered Delay with Phaser", 1, 1);
// REGISTER_PATCH(WaveshaperPatch, "Waveshaper", 2, 2);
// REGISTER_PATCH(TestTonePatch, "Test Tone", 0, 0);
// REGISTER_PATCH(FlangerPatch, "Flanger", 0, 0);
