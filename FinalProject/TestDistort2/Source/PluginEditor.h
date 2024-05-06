/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class TestDistort2AudioProcessorEditor  : public juce::AudioProcessorEditor,
private juce::Slider::Listener
{
public:
    TestDistort2AudioProcessorEditor (TestDistort2AudioProcessor&);
    ~TestDistort2AudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    void sliderValueChanged (juce::Slider* slider) override;
    TestDistort2AudioProcessor& audioProcessor;
    juce::Slider gainAmmount;
    juce::Slider volumeAmmount;
    juce::Slider mixAmmount;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TestDistort2AudioProcessorEditor)
};
