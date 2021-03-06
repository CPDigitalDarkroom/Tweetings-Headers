//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFConveyorViewController.h"

#import "AFColorConveyorControllerDelegate.h"
#import "AFTextOverlayViewDelegate.h"

@class AFColorConveyorController, NSString, UIColor;

@interface AFTextViewController : AFConveyorViewController <AFColorConveyorControllerDelegate, AFTextOverlayViewDelegate>
{
    AFColorConveyorController *_colorConveyorController;
    NSString *_text;
    UIColor *_backgroundColor;
    float _rotation;
    float _scale;
    struct CGContext *_contextForGL;
    struct __CFData *_bitmapData;
    struct CGRect _relativeTextRect;
}

+ (id)customizationKeyPath;
+ (BOOL)usesStaticImageView;
+ (Class)staticOverlayViewClass;
@property(nonatomic) struct __CFData *bitmapData; // @synthesize bitmapData=_bitmapData;
@property(nonatomic) struct CGContext *contextForGL; // @synthesize contextForGL=_contextForGL;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) float rotation; // @synthesize rotation=_rotation;
@property(nonatomic) struct CGRect relativeTextRect; // @synthesize relativeTextRect=_relativeTextRect;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) AFColorConveyorController *colorConveyorController; // @synthesize colorConveyorController=_colorConveyorController;
- (void).cxx_destruct;
- (id)outputModule;
- (void)finishApplying;
- (struct CGRect)rectForImageInTextOverlayView:(id)arg1;
- (void)textOverlayViewDidEndEditing:(id)arg1;
- (void)textOverlayViewDidBeginEditing:(id)arg1;
- (void)colorController:(id)arg1 didScrollToEraser:(BOOL)arg2;
- (void)colorController:(id)arg1 didSelectEraser:(BOOL)arg2;
- (void)colorController:(id)arg1 didSelectColor:(id)arg2 atIndex:(int)arg3;
- (void)colorController:(id)arg1 didScrollToColor:(id)arg2 atIndex:(int)arg3;
- (void)dismissKeyboard;
- (id)textOverlayView;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithGLInstance:(id)arg1 settings:(id)arg2 quickLaunch:(BOOL)arg3;

@end

