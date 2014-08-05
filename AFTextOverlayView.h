//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFView.h"

@class AFTextView, UIColor;

@interface AFTextOverlayView : AFView
{
    struct CGPoint savedCenter;
    float savedScale;
    float savedRotation;
    struct CGRect savedBounds;
    BOOL _observingKeyboard;
    BOOL _keyboardShowing;
    AFTextView *_textView;
    id <AFTextOverlayViewDelegate> _delegate;
    float _preRotationTextScale;
    float _preRotationTextRotation;
    struct CGPoint _preRotationTextCenter;
    struct CGRect _preRotationImageRect;
}

@property(nonatomic) float preRotationTextRotation; // @synthesize preRotationTextRotation=_preRotationTextRotation;
@property(nonatomic) float preRotationTextScale; // @synthesize preRotationTextScale=_preRotationTextScale;
@property(nonatomic) struct CGPoint preRotationTextCenter; // @synthesize preRotationTextCenter=_preRotationTextCenter;
@property(nonatomic) struct CGRect preRotationImageRect; // @synthesize preRotationImageRect=_preRotationImageRect;
@property(nonatomic, getter=isKeyboardShowing) BOOL keyboardShowing; // @synthesize keyboardShowing=_keyboardShowing;
@property(nonatomic, getter=isObservingKeyboard) BOOL observingKeyboard; // @synthesize observingKeyboard=_observingKeyboard;
@property(nonatomic) __weak id <AFTextOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak AFTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
@property(readonly, nonatomic) float rotation;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) UIColor *foregroundColor;
- (void)startEditing;
- (void)keyboardDidHide_AF:(id)arg1;
- (void)keyboardWillHide_AF:(id)arg1;
- (void)keyboardWillShow_AF:(id)arg1;
- (void)stopObservingKeyboard;
- (void)startObservingKeyboard;
- (void)setInputAccessoryView:(id)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (struct CGRect)rectForTextInView:(id)arg1 scale:(float)arg2;
- (void)deselectTextView:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)prepareView;

@end

