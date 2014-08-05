//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFConveyorViewController.h"

#import "AFCropOverlayViewDelegate.h"

@class AFCropConveyorViewCell, AFCropPreset, AFModule, NSArray;

@interface AFCropViewController : AFConveyorViewController <AFCropOverlayViewDelegate>
{
    BOOL _cropBoxIsRotated;
    NSArray *_presets;
    AFCropPreset *_selectedPreset;
    float _originalMinZoomScale;
    AFModule *_cropModule;
    AFCropConveyorViewCell *_currentCell;
}

+ (id)customizationKeyPath;
+ (BOOL)needsLayoutOnSuccess;
+ (Class)staticOverlayViewClass;
@property(retain, nonatomic) AFCropConveyorViewCell *currentCell; // @synthesize currentCell=_currentCell;
@property(nonatomic) BOOL cropBoxIsRotated; // @synthesize cropBoxIsRotated=_cropBoxIsRotated;
@property(retain, nonatomic) AFModule *cropModule; // @synthesize cropModule=_cropModule;
@property(nonatomic) float originalMinZoomScale; // @synthesize originalMinZoomScale=_originalMinZoomScale;
@property(nonatomic) __weak AFCropPreset *selectedPreset; // @synthesize selectedPreset=_selectedPreset;
@property(retain, nonatomic) NSArray *presets; // @synthesize presets=_presets;
- (void).cxx_destruct;
- (id)outputModule;
- (void)finishApplying;
- (struct CGRect)cropOverlayViewBoundsForCropBox:(id)arg1;
- (void)setSelectedPreset:(id)arg1 animated:(BOOL)arg2;
- (void)conveyorView:(id)arg1 didSelectItemAtIndex:(int)arg2;
- (id)conveyorView:(id)arg1 cellForIndex:(int)arg2;
- (int)numberOfItemsInConveyorView:(id)arg1;
- (void)backButtonPressed:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (struct CGAffineTransform)imageViewTransform;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithGLInstance:(id)arg1 settings:(id)arg2 quickLaunch:(BOOL)arg3;

@end

