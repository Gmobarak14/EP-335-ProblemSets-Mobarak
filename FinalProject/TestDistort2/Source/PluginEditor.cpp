/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
TestDistort2AudioProcessorEditor::TestDistort2AudioProcessorEditor (TestDistort2AudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (200, 400);
    // these define the parameters of our slider object
       gainAmmount.setSliderStyle (juce::Slider::LinearBarVertical);
       gainAmmount.setRange (0.0, 100.0, 1.0);
       gainAmmount.setTextBoxStyle (juce::Slider::NoTextBox, false, 90, 0);
       gainAmmount.setPopupDisplayEnabled (true, false, this);
       gainAmmount.setTextValueSuffix (" Gain");
       gainAmmount.setValue(1.0);
    
       // this function adds the slider to the editor
       addAndMakeVisible (&gainAmmount);
       gainAmmount.addListener (this);
    
       volumeAmmount.setSliderStyle (juce::Slider::LinearBarVertical);
       volumeAmmount.setRange (0.0, 1, 0.01);
       volumeAmmount.setTextBoxStyle (juce::Slider::NoTextBox, false, 90, 0);
       volumeAmmount.setPopupDisplayEnabled (true, false, this);
       volumeAmmount.setTextValueSuffix (" Volume");
       volumeAmmount.setValue(1.0);
       addAndMakeVisible (&volumeAmmount);
       volumeAmmount.addListener (this);
    
    mixAmmount.setSliderStyle (juce::Slider::LinearBarVertical);
    mixAmmount.setRange (0.0, 1.0, 0.01);
    mixAmmount.setTextBoxStyle (juce::Slider::NoTextBox, false, 90, 10);
    mixAmmount.setPopupDisplayEnabled (true, false, this);
    mixAmmount.setTextValueSuffix (" %");
    mixAmmount.setValue(1.0);
    addAndMakeVisible (&mixAmmount);
    mixAmmount.addListener (this);
    
}
void TestDistort2AudioProcessorEditor::sliderValueChanged (juce::Slider* slider)
{
    audioProcessor.GainLevel = gainAmmount.getValue();
    audioProcessor.VolumeLevel = volumeAmmount.getValue();
    audioProcessor.MixLevel = mixAmmount.getValue();
}

TestDistort2AudioProcessorEditor::~TestDistort2AudioProcessorEditor()
{
}

//==============================================================================
void TestDistort2AudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
  //  g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));
    g.fillAll (juce::Colours::pink);
    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("GibbyDSP GAIN", getLocalBounds(), juce::Justification::centredTop, 1);
    
}

void TestDistort2AudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    gainAmmount.setBounds (40, 30, 20, getHeight() - 60);
    volumeAmmount.setBounds (70, 30, 20, getHeight() - 60);
    mixAmmount.setBounds (100, 30, 20, getHeight() - 60);
}
