//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FLThemeListener.h"

@class FLTheme, NSString;

@interface FLThemeManager : NSObject <FLThemeListener>
{
    NSString *_currentThemeString;
    int _currentKeyboardState;
    FLTheme *_currentTheme;
    NSString *_userSelectedThemeString;
    NSString *_darkSideThemeString;
    NSString *_vanillaThemeString;
}

+ (void)themeDidChangeWithThemeString:(id)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) NSString *vanillaThemeString; // @synthesize vanillaThemeString=_vanillaThemeString;
@property(retain, nonatomic) NSString *darkSideThemeString; // @synthesize darkSideThemeString=_darkSideThemeString;
@property(retain, nonatomic) NSString *userSelectedThemeString; // @synthesize userSelectedThemeString=_userSelectedThemeString;
@property(retain, nonatomic) FLTheme *currentTheme; // @synthesize currentTheme=_currentTheme;
@property(nonatomic) int currentKeyboardState; // @synthesize currentKeyboardState=_currentKeyboardState;
@property(retain, nonatomic) NSString *currentThemeString; // @synthesize currentThemeString=_currentThemeString;
- (void).cxx_destruct;
- (void)themeDidChangeWithThemeString:(id)arg1;
- (id)themeFromString:(id)arg1;
- (void)configureDynamicThemeFromServer:(id)arg1;
- (void)handleDynamicThemeUpdate:(id)arg1;
- (void)initNotifications;

@end

