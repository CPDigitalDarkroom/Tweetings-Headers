//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFToolViewController.h"

#import "AFSegmentedControlDelegate.h"
#import "AFStraightenOverlayDelegate.h"

@class AFModule, AFSegmentedControl;

@interface AFOrientationViewController : AFToolViewController <AFSegmentedControlDelegate, AFStraightenOverlayDelegate>
{
    BOOL _rotateReversed;
    BOOL _flipReversed;
    AFSegmentedControl *_rotateControl;
    AFSegmentedControl *_flipControl;
    AFModule *_orientationModule;
    float _currentStraightenRotation;
    float _currentStraightenScale;
    struct CGAffineTransform _transform;
    struct CGAffineTransform _originalTransform;
    struct CGAffineTransform _straightenBaselineTransform;
    struct CGAffineTransform _currentImageViewTransform;
}

+ (id)customizationKeyPath;
+ (Class)staticOverlayViewClass;
+ (BOOL)needsLayoutOnSuccess;
@property(nonatomic) struct CGAffineTransform currentImageViewTransform; // @synthesize currentImageViewTransform=_currentImageViewTransform;
@property(nonatomic) struct CGAffineTransform straightenBaselineTransform; // @synthesize straightenBaselineTransform=_straightenBaselineTransform;
@property(nonatomic) float currentStraightenScale; // @synthesize currentStraightenScale=_currentStraightenScale;
@property(nonatomic) float currentStraightenRotation; // @synthesize currentStraightenRotation=_currentStraightenRotation;
@property(retain, nonatomic) AFModule *orientationModule; // @synthesize orientationModule=_orientationModule;
@property(nonatomic) BOOL flipReversed; // @synthesize flipReversed=_flipReversed;
@property(nonatomic) BOOL rotateReversed; // @synthesize rotateReversed=_rotateReversed;
@property(nonatomic) struct CGAffineTransform originalTransform; // @synthesize originalTransform=_originalTransform;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(retain, nonatomic) AFSegmentedControl *flipControl; // @synthesize flipControl=_flipControl;
@property(retain, nonatomic) AFSegmentedControl *rotateControl; // @synthesize rotateControl=_rotateControl;
- (void).cxx_destruct;
- (void)beginRender;
- (void)setRender;
- (id)outputModule;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)setOverlayImageFrame;
- (void)resetStraighten;
- (void)straightenWithValue:(float)arg1;
- (void)segmentedControl:(id)arg1 didSelectItemAtIndex:(int)arg2;
- (void)flipHorizontal:(BOOL)arg1;
- (void)rotateClockwise:(BOOL)arg1;
- (struct CGAffineTransform)rotatingImageViewTransform;
- (struct CGAffineTransform)imageViewTransform;
- (void)applyButtonPressed:(id)arg1;
- (void)finishApplying;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithGLInstance:(id)arg1 settings:(id)arg2 quickLaunch:(BOOL)arg3;

@end

