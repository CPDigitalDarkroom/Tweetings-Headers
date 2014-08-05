//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFView.h"

#import "AFTextFieldDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class AFTextField, AFTextViewHandle, UIImage, UIImageView, UILongPressGestureRecognizer;

@interface AFTextView : AFView <UIGestureRecognizerDelegate, AFTextFieldDelegate>
{
    BOOL _draggingEnabled;
    BOOL _rotationEnabled;
    BOOL _scalingEnabled;
    BOOL _pasting;
    AFTextField *_textField;
    AFView *_contentView;
    AFTextViewHandle *_handle;
    float _scale;
    float _rotation;
    float _editingScale;
    UILongPressGestureRecognizer *_longPressRecognizer;
    float _applyScale;
    UIImageView *_glassBoxView;
    UIImage *_glassBoxImage;
    UIImage *_glassBoxActiveImage;
}

@property(retain, nonatomic) UIImage *glassBoxActiveImage; // @synthesize glassBoxActiveImage=_glassBoxActiveImage;
@property(retain, nonatomic) UIImage *glassBoxImage; // @synthesize glassBoxImage=_glassBoxImage;
@property(retain, nonatomic) UIImageView *glassBoxView; // @synthesize glassBoxView=_glassBoxView;
@property(nonatomic) float applyScale; // @synthesize applyScale=_applyScale;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(nonatomic, getter=isPasting) BOOL pasting; // @synthesize pasting=_pasting;
@property(nonatomic, getter=isScalingEnabled) BOOL scalingEnabled; // @synthesize scalingEnabled=_scalingEnabled;
@property(nonatomic, getter=isRotationEnabled) BOOL rotationEnabled; // @synthesize rotationEnabled=_rotationEnabled;
@property(nonatomic, getter=isDraggingEnabled) BOOL draggingEnabled; // @synthesize draggingEnabled=_draggingEnabled;
@property(nonatomic) float editingScale; // @synthesize editingScale=_editingScale;
@property(nonatomic) float rotation; // @synthesize rotation=_rotation;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(retain, nonatomic) AFTextViewHandle *handle; // @synthesize handle=_handle;
@property(retain, nonatomic) AFView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) AFTextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)setBorderVisibile:(BOOL)arg1;
- (void)setHandleVisible:(BOOL)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (struct CGRect)rectForTextInView:(id)arg1;
- (id)text;
- (void)transformWithHandlePoint:(struct CGPoint)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)textFieldPanned:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)startEditing;
- (void)setSelectionState:(int)arg1;
- (struct CGRect)boundsFromTextSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setInputAccessoryView:(id)arg1;
- (void)prepareView;

@end
