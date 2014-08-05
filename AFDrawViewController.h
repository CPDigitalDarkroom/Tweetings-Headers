//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFBrushViewController.h"

#import "AFColorConveyorControllerDelegate.h"

@class AFColorConveyorController, NSArray;

@interface AFDrawViewController : AFBrushViewController <AFColorConveyorControllerDelegate>
{
    AFColorConveyorController *_colorConveyorController;
    NSArray *_colors;
    struct CGContext *_contextForGL;
    struct __CFData *_bitmapData;
}

+ (BOOL)usesSplitConveyorLayout;
+ (id)customizationKeyPath;
@property(nonatomic) struct __CFData *bitmapData; // @synthesize bitmapData=_bitmapData;
@property(nonatomic) struct CGContext *contextForGL; // @synthesize contextForGL=_contextForGL;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(retain, nonatomic) AFColorConveyorController *colorConveyorController; // @synthesize colorConveyorController=_colorConveyorController;
- (void).cxx_destruct;
- (void)finishApplying;
- (id)outputModuleWithStrokes:(id)arg1;
- (void)didBeginStroke:(id)arg1;
- (void)drawOverlay:(id)arg1 didFinishDrawingPoints:(id)arg2;
- (void)colorController:(id)arg1 didScrollToEraser:(BOOL)arg2;
- (void)colorController:(id)arg1 didSelectEraser:(BOOL)arg2;
- (void)colorController:(id)arg1 didScrollToColor:(id)arg2 atIndex:(int)arg3;
- (void)colorController:(id)arg1 didSelectColor:(id)arg2 atIndex:(int)arg3;
- (id)colorConveyor;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;

@end

