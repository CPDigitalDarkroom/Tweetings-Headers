//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FSIPadLayerControlFlow.h"

@class UITouch;

@protocol FSIControlFlow <FSIPadLayerControlFlow>
- (void)userDeleteLanguageInvoked;
- (void)userSettingsInvoked;
- (void)previousKeyboardID;
- (void)nextKeyboardID;
- (void)toggleShift;
- (void)toggleCapsLock;
- (void)sendNewline;
- (void)sendBackspace:(float)arg1;
- (void)sendSpace:(float)arg1;
- (void)sendTouchToListener:(UITouch *)arg1;
@end

