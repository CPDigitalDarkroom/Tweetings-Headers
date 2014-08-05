//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol FSKeyboardListener <NSObject>
- (void)isTextBufferEmpty:(BOOL)arg1;
- (void)enablesReturnKeyAutomatically:(BOOL)arg1;
- (void)setFieldAction:(int)arg1;
- (void)setSpaceBarState:(BOOL)arg1;
- (void)dictionaryModifiedWithEvent:(int)arg1 word:(NSString *)arg2;
- (void)selectSuggestionWithIndex:(int)arg1;
- (void)showSuggestions:(NSArray *)arg1 selectedIndex:(int)arg2;
- (void)configureCapsLock:(BOOL)arg1;
- (void)configureShift:(BOOL)arg1;
- (void)caseChange:(BOOL)arg1;
- (void)setCachedKeyboardLayoutState:(int)arg1;
- (int)getCachedKeyboardState;
- (void)setKeyboardLayoutState:(int)arg1;
- (int)getKeyboardState;
- (void)setMasterKeyboardID:(int)arg1;
- (int)getMasterKeyboardID;
- (void)prepareKeyboardControllerForLayout;
- (void)prepareKeyboardController;

@optional
- (void)replacingText:(NSString *)arg1;
- (void)tapOccured:(struct CGPoint)arg1;
@end
