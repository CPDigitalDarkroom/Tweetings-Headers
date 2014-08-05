//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFContentPackUnifiedSelectionViewController.h"

@class AFEffectContentPackThumnailGenerator, AFModule, AFOpenGLInstanceRenderingObjects, NSString;

@interface AFEffectContentPackUnifiedSelectionViewController : AFContentPackUnifiedSelectionViewController
{
    NSString *_effectKey;
    AFModule *_effectModule;
    AFEffectContentPackThumnailGenerator *_thumbnailGenerator;
    AFEffectContentPackThumnailGenerator *_storePreviewGenerator;
    AFOpenGLInstanceRenderingObjects *_mainRenderingObjects;
    AFOpenGLInstanceRenderingObjects *_thumbRenderingObject;
}

+ (id)editButtonConfirmationPrompt;
+ (id)contentPackDescriptor;
+ (Class)contentPackClass;
+ (Class)contentPackItemType;
+ (id)customizationKeyPath;
@property(retain, nonatomic) AFOpenGLInstanceRenderingObjects *thumbRenderingObject; // @synthesize thumbRenderingObject=_thumbRenderingObject;
@property(retain, nonatomic) AFOpenGLInstanceRenderingObjects *mainRenderingObjects; // @synthesize mainRenderingObjects=_mainRenderingObjects;
@property(retain, nonatomic) AFEffectContentPackThumnailGenerator *storePreviewGenerator; // @synthesize storePreviewGenerator=_storePreviewGenerator;
@property(retain, nonatomic) AFEffectContentPackThumnailGenerator *thumbnailGenerator; // @synthesize thumbnailGenerator=_thumbnailGenerator;
@property(retain, nonatomic) AFModule *effectModule; // @synthesize effectModule=_effectModule;
@property(copy, nonatomic) NSString *effectKey; // @synthesize effectKey=_effectKey;
- (void).cxx_destruct;
- (BOOL)supportsViewOriginalWithTouch;
- (id)outputModule;
- (void)detailIAPViewController:(id)arg1 beganPurchasing:(id)arg2;
- (void)listIAPViewController:(id)arg1 beganPurchasingPack:(id)arg2;
- (id)loadListIAPViewControllerWithPacks:(id)arg1;
- (id)loadDetailIAPViewControllerWithContentPack:(id)arg1;
- (void)setupStorePreviewGenerator;
- (void)displayPreviewForContentPackItem:(id)arg1;
- (id)cellForContentPack:(id)arg1;
- (id)cellForContentPackItem:(id)arg1;
- (BOOL)editButttonShouldPrompt;
- (void)retractIAPViewController;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
