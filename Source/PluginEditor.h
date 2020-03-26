/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class DistortionAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    DistortionAudioProcessorEditor (DistortionAudioProcessor&);
    ~DistortionAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    
    ScopedPointer<Slider> gainKnob;
    ScopedPointer<Slider> blendKnob;
    ScopedPointer<Slider> volumeKnob;
    ScopedPointer<Slider> toneKnob;
    ScopedPointer<ComboBox> clipFxnSelect;
    
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> gainAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> blendAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> volumeAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> toneAttachment;
    ScopedPointer<AudioProcessorValueTreeState::ComboBoxAttachment> clipFxnAttachment;
    
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    DistortionAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DistortionAudioProcessorEditor)
};
