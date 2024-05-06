# PLUG IN DESIGN 
This Distortion is based of the Arctangent soft clipping formula: (2/pi) atan(x). 
Contrary to popular belief Distortion does not mean extra loud. Instead it is like a limiter, clipping everything above a threshold. The three slider GUIs are set up in the pluginEditor.cpp file and are referenced by variables initiated in the PluginProcessor.h file. The main line of DSP code is this:  *channelData = ((((2.f / juce::MathConstants<float>::pi) * atan(*channelData)) * MixLevel) +(((cleanSig)*(1-MixLevel))))*VolumeLevel;
The mix level is a total of 1 for full distortion and is 1 minus the level for the clean signal. 


