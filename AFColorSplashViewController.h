//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFBrushViewController.h"

#import "AFSegmentedControlDelegate.h"

@class AFSegmentedControl, AFSelectiveBrushProcessor;

@interface AFColorSplashViewController : AFBrushViewController <AFSegmentedControlDelegate>
{
    BOOL _didDrawImage;
    BOOL _isRendering;
    AFSelectiveBrushProcessor *_processor;
    AFSegmentedControl *_brushSegmentedControl;
    AFSegmentedControl *_eraserSegmentedControl;
    int _splashMode;
}

@property(nonatomic) BOOL isRendering; // @synthesize isRendering=_isRendering;
@property(nonatomic) int splashMode; // @synthesize splashMode=_splashMode;
@property(retain, nonatomic) AFSegmentedControl *eraserSegmentedControl; // @synthesize eraserSegmentedControl=_eraserSegmentedControl;
@property(retain, nonatomic) AFSegmentedControl *brushSegmentedControl; // @synthesize brushSegmentedControl=_brushSegmentedControl;
@property(nonatomic) BOOL didDrawImage; // @synthesize didDrawImage=_didDrawImage;
@property(retain, nonatomic) AFSelectiveBrushProcessor *processor; // @synthesize processor=_processor;
- (void).cxx_destruct;
- (void)processStroke:(id)arg1;
- (void)segmentedControl:(id)arg1 didSelectItemAtIndex:(int)arg2;
- (id)outputModuleWithStrokes:(id)arg1;
- (void)didFinishStroke:(id)arg1;
- (void)didModifyStroke:(id)arg1;
- (void)didBeginStroke:(id)arg1;
- (void)setupConveyorOverlay;
- (void)createConveyorOverlay;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)configureOverlay;
- (void)loadView;
- (id)initWithGLInstance:(id)arg1;

@end
