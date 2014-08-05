//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet;

@interface FSSettings : NSObject
{
    NSMutableDictionary *data;
    BOOL hasLoadedInitialSettings;
    NSMutableSet *incomingFLWordSet;
}

+ (id)sharedSettings;
- (void).cxx_destruct;
- (id)getCurrentLanguage;
- (void)dealloc;
- (id)keyForWord:(id)arg1;
- (BOOL)containsWord:(id)arg1;
- (BOOL)removeWord:(id)arg1;
- (BOOL)addWord:(id)arg1;
- (void)saveIntegerSetting:(id)arg1 value:(int)arg2;
- (void)saveBoolSetting:(id)arg1 value:(BOOL)arg2;
- (void)saveStringSetting:(id)arg1 value:(id)arg2;
- (int)getIntegerSetting:(id)arg1;
- (BOOL)getBoolSetting:(id)arg1;
- (id)getStringSetting:(id)arg1;
- (void)saveSetting:(id)arg1 value:(id)arg2 notifyObeservers:(BOOL)arg3;
- (id)getSetting:(id)arg1;
- (void)deleteAllSettings;
- (void)saveSettingsToDisk;
- (id)convertSettingsForPasteboard;
- (id)settingsData;
- (BOOL)doesSettingsExistOnDisk;
- (void)loadSettingsFromDisk;
- (id)allKeys;
- (void)loadSettings:(id)arg1;
- (id)checkAndPortLegacySettings:(id)arg1;
- (BOOL)keyIsFleksySDKSetting:(id)arg1;
- (id)filepathForReading;
- (id)filepathForWriting;
- (void)resetHasLoadedInitialSettings;
- (id)init;

@end
