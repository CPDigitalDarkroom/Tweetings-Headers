//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFToolViewController.h"

#import "AFSegmentedControlDelegate.h"
#import "AFTiltShiftOverlayViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class AFSegmentedControl, AFTiltShiftProcessor, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer;

@interface AFTiltShiftViewController : AFToolViewController <UIGestureRecognizerDelegate, AFSegmentedControlDelegate, AFTiltShiftOverlayViewDelegate>
{
    BOOL _currentlyRendering;
    UIPanGestureRecognizer *_panRecognizer;
    UIRotationGestureRecognizer *_rotationRecognizer;
    UIPinchGestureRecognizer *_pinchRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    float _rotation;
    float _radius;
    float _originalRotation;
    float _originalRadius;
    AFSegmentedControl *_segmentedControl;
    int _tiltShiftStyle;
    AFTiltShiftProcessor *_processor;
    struct CGPoint _center;
    struct CGPoint _originalCenter;
}

+ (Class)scrollableOverlayViewClass;
+ (BOOL)usesStaticImageView;
@property(retain, nonatomic) AFTiltShiftProcessor *processor; // @synthesize processor=_processor;
@property(nonatomic, getter=isCurrentlyRendering) BOOL currentlyRendering; // @synthesize currentlyRendering=_currentlyRendering;
@property(nonatomic) int tiltShiftStyle; // @synthesize tiltShiftStyle=_tiltShiftStyle;
@property(retain, nonatomic) AFSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(nonatomic) float originalRadius; // @synthesize originalRadius=_originalRadius;
@property(nonatomic) float originalRotation; // @synthesize originalRotation=_originalRotation;
@property(nonatomic) struct CGPoint originalCenter; // @synthesize originalCenter=_originalCenter;
@property(nonatomic) float radius; // @synthesize radius=_radius;
@property(nonatomic) float rotation; // @synthesize rotation=_rotation;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchRecognizer; // @synthesize pinchRecognizer=_pinchRecognizer;
@property(retain, nonatomic) UIRotationGestureRecognizer *rotationRecognizer; // @synthesize rotationRecognizer=_rotationRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *panRecognizer; // @synthesize panRecognizer=_panRecognizer;
- (void).cxx_destruct;
- (id)overlayStyleAnalyticsAttributes;
- (void)reportApplied;
- (void)reportCancelled;
- (void)reportOpened;
- (id)outputModule;
- (void)updateGLView;
- (void)fadeOutOverlay;
- (id)tiltShiftOverlayView;
- (void)segmentedControl:(id)arg1 didDeselectItemAtIndex:(int)arg2;
- (void)segmentedControl:(id)arg1 didSelectItemAtIndex:(int)arg2;
- (void)segmentedControlDidChangeValue:(id)arg1;
- (void)tiltShiftOverlayTouchedUp:(id)arg1;
- (void)tiltShiftOverlayTouchedDown:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)rotationDetected:(id)arg1;
- (void)pinchDetected:(id)arg1;
- (void)panDetected:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)setupOverlayInitialView;
- (void)setupGestureRecognizers;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

