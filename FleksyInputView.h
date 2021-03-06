//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FleksyBaseInputView.h"

@class FSIKeyboardController, FSIMasterGestureHandler, FleksyKeyboardView;

@interface FleksyInputView : FleksyBaseInputView
{
    FSIMasterGestureHandler *masterGestureHandler;
    FleksyKeyboardView *fleksyKeyboardView;
    FSIKeyboardController *_keyboardController;
}

@property(nonatomic) __weak FSIKeyboardController *keyboardController; // @synthesize keyboardController=_keyboardController;
- (void).cxx_destruct;
- (void)touchStatus:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 keyboardController:(id)arg2;

@end

