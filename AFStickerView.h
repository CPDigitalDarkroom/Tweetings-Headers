//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFView.h"

#import "UIGestureRecognizerDelegate.h"

@class AFStickerContentPackItem, AFStickerViewHandle, UIButton, UIImage, UIImageView;

@interface AFStickerView : AFView <UIGestureRecognizerDelegate>
{
    BOOL _controlsEnabled;
    BOOL _draggingEnabled;
    BOOL _rotationEnabled;
    BOOL _scalingEnabled;
    BOOL _added;
    BOOL _tapToggedState;
    AFView *_contentView;
    AFStickerViewHandle *_handle;
    UIButton *_closeButton;
    AFStickerContentPackItem *_stickerPackItem;
    UIImageView *_imageView;
    float _scale;
    float _rotation;
    UIImageView *_glassBox;
}

@property(retain, nonatomic) UIImageView *glassBox; // @synthesize glassBox=_glassBox;
@property(nonatomic) BOOL tapToggedState; // @synthesize tapToggedState=_tapToggedState;
@property(nonatomic, getter=isAdded) BOOL added; // @synthesize added=_added;
@property(nonatomic, getter=isScalingEnabled) BOOL scalingEnabled; // @synthesize scalingEnabled=_scalingEnabled;
@property(nonatomic, getter=isRotationEnabled) BOOL rotationEnabled; // @synthesize rotationEnabled=_rotationEnabled;
@property(nonatomic, getter=isDraggingEnabled) BOOL draggingEnabled; // @synthesize draggingEnabled=_draggingEnabled;
@property(nonatomic) BOOL controlsEnabled; // @synthesize controlsEnabled=_controlsEnabled;
@property(nonatomic) float rotation; // @synthesize rotation=_rotation;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) AFStickerContentPackItem *stickerPackItem; // @synthesize stickerPackItem=_stickerPackItem;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) AFStickerViewHandle *handle; // @synthesize handle=_handle;
@property(retain, nonatomic) AFView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)drawStickerInRect:(struct CGRect)arg1;
- (struct CGRect)rectForStickerInView:(id)arg1 scale:(float)arg2;
- (void)transformWithHandlePoint:(struct CGPoint)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)stickerViewPanned:(id)arg1;
- (void)stickerViewTapped:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIImage *stickerImage; // @dynamic stickerImage;
- (id)initWithStickerPackItem:(id)arg1;
- (void)prepareView;

@end

