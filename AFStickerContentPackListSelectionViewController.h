//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFContentPackListSelectionViewController.h"

#import "AFStickersOverlayViewDelegate.h"

@class NSArray;

@interface AFStickerContentPackListSelectionViewController : AFContentPackListSelectionViewController <AFStickersOverlayViewDelegate>
{
    NSArray *_stickerProcessors;
    struct CGContext *_contextForGL;
    struct __CFData *_bitmapData;
    NSArray *_stickers;
}

+ (Class)detailViewControllerClass;
+ (id)customizationKeyPath;
+ (id)firstLaunchText;
+ (id)firstLaunchTitle;
+ (BOOL)firstLaunchRequiresDownload;
+ (id)contentPackDescriptor;
+ (Class)contentPackClass;
+ (Class)staticOverlayViewClass;
@property(retain, nonatomic) NSArray *stickers; // @synthesize stickers=_stickers;
@property(nonatomic) struct __CFData *bitmapData; // @synthesize bitmapData=_bitmapData;
@property(nonatomic) struct CGContext *contextForGL; // @synthesize contextForGL=_contextForGL;
@property(retain, nonatomic) NSArray *stickerProcessors; // @synthesize stickerProcessors=_stickerProcessors;
- (void).cxx_destruct;
- (void)reportApplied;
- (struct CGRect)rectForImageInStickersOverlayView:(id)arg1;
- (id)outputModule;
- (id)loadListIAPViewControllerWithPacks:(id)arg1;
- (id)loadDetailIAPViewControllerWithContentPack:(id)arg1;
- (void)detailControllerApplied:(id)arg1;
- (void)finishApplying;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)cellForContentPack:(id)arg1;
- (void)retractIAPViewController;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithGLInstance:(id)arg1;

@end

