//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImageView, UIView;

@interface SystemKeyboardBackgroundManager : NSObject
{
    UIView *systemBackgroundView;
    UIImageView *imageView;
    BOOL performingKeyboardFrameChange;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)handleUIKeyboardDidChangeFrameNotification:(id)arg1;
- (void)handleUIKeyboardWillChangeFrameNotification:(id)arg1;
- (void)handleHideTintedKeyboard:(id)arg1;
- (void)handleShowTintedKeyboard:(id)arg1;
- (void)testAnimation2;
- (id)getView;
- (id)init;

@end

