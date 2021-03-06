//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary;

@interface AFPhotoEditorCustomization : NSObject
{
    NSDictionary *_keyTree;
    NSMutableDictionary *_options;
}

+ (void)checkForResourceBundleError:(id *)arg1;
+ (id)colorOptionValueForKey:(id)arg1;
+ (id)optionValueForKey:(id)arg1;
+ (void)removeOptionValueForKey:(id)arg1;
+ (void)setOptionWithImageNamed:(id)arg1 forKey:(id)arg2;
+ (void)setOptionValue:(id)arg1 forKey:(id)arg2;
+ (void)setOptionValueWithBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;
+ (void)clearCustomization;
+ (id)options;
+ (void)setStatusBarStyle:(int)arg1;
+ (void)setStatusBarBackgroundColor:(id)arg1;
+ (void)setCropToolCellWidth:(float)arg1;
+ (void)setCropToolPresets:(id)arg1;
+ (void)setCropToolInvertEnabled:(BOOL)arg1;
+ (void)setCropToolOriginalEnabled:(BOOL)arg1;
+ (void)setCropToolCustomEnabled:(BOOL)arg1;
+ (void)setSupportedIpadOrientations:(id)arg1;
+ (void)disableLocalization:(BOOL)arg1;
+ (void)setToolOrder:(id)arg1;
+ (void)setRightNavigationBarButtonTitle:(id)arg1;
+ (void)setLeftNavigationBarButtonTitle:(id)arg1;
+ (void)purgeGPUMemoryWhenPossible:(BOOL)arg1;
+ (void)usePCNStagingEnvironment:(BOOL)arg1;
+ (void)enableInAppPurchases:(BOOL)arg1;
@property(retain, nonatomic) NSMutableDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) NSDictionary *keyTree; // @synthesize keyTree=_keyTree;
- (void).cxx_destruct;
- (id)optionValueForKey:(id)arg1;
- (id)optionForKey:(id)arg1;
- (id)unModifiedKeyForKey:(id)arg1;
- (id)modifierForKey:(id)arg1;
- (void)setOptionWithImageNamed:(id)arg1 forKey:(id)arg2;
- (void)setOptionWithBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)setOption:(id)arg1 forKey:(id)arg2;
- (BOOL)validateKeyPath:(id)arg1;
- (void)removeOptionValueAtKeyPath:(id)arg1;
- (BOOL)shouldDeleteValueAtKeyPath:(id)arg1;
- (void)addDisabledOption:(id)arg1 defaultValue:(id)arg2;
- (void)addOption:(id)arg1 defaultValue:(id)arg2 validate:(CDUnknownBlockType)arg3;
- (void)addOption:(id)arg1 defaultValue:(id)arg2 expectedClass:(Class)arg3;
- (void)addOption:(id)arg1 defaultValue:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)fetchDefaultCropPresets;
- (id)fetchToolKeys;
- (void)disablePremiumOptions;
- (void)setCropDefaults;
- (void)setEditorSettingsDefaults;

@end

