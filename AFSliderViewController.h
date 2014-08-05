//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFToolViewController.h"

@class AFProcessor, AFSlider, AFView;

@interface AFSliderViewController : AFToolViewController
{
    BOOL _isCurrentlyProcessing;
    BOOL _requiresFurtherRender;
    AFProcessor *_processor;
    AFView *_sliderContainerView;
    AFSlider *_slider;
    float _displayedValue;
}

+ (Class)processorClass;
+ (BOOL)needsLayoutOnFailure;
@property BOOL requiresFurtherRender; // @synthesize requiresFurtherRender=_requiresFurtherRender;
@property(nonatomic) float displayedValue; // @synthesize displayedValue=_displayedValue;
@property(retain, nonatomic) AFSlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) AFView *sliderContainerView; // @synthesize sliderContainerView=_sliderContainerView;
@property BOOL isCurrentlyProcessing; // @synthesize isCurrentlyProcessing=_isCurrentlyProcessing;
- (void).cxx_destruct;
- (id)outputModule;
- (void)renderModuleWithValue:(float)arg1;
- (void)adjustProcessorWithValue:(float)arg1;
@property(readonly, nonatomic) AFProcessor *processor; // @synthesize processor=_processor;
- (void)handleUpdatedValue:(float)arg1;
- (void)sliderChanged:(id)arg1;
- (void)applyButtonPressed:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithGLInstance:(id)arg1;

@end
