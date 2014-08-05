//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

@class AFOpenGLView, AFView, UIImage, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface AFScrollingImageView : UIScrollView <UIScrollViewDelegate>
{
    BOOL _allowsScaleUp;
    BOOL _positionLocked;
    BOOL _useImageViewSizeForScaling;
    BOOL _shouldEnableTouchListeningWhenZoomedOut;
    UIImageView *_imageView;
    AFOpenGLView *_openGLView;
    float _calculatedMinimumZoomScale;
    float _calculatedMaximumZoomScale;
    id <AFScrollingImageViewDelegate> _scrollingImageViewDelegate;
    AFView *_imageOverlayView;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UITapGestureRecognizer *_tapRecognizer;
    struct CGPoint _currentTouchLocation;
    struct CGRect _minimumImageRect;
}

+ (void)forceLinkerLoad_;
@property(nonatomic) BOOL shouldEnableTouchListeningWhenZoomedOut; // @synthesize shouldEnableTouchListeningWhenZoomedOut=_shouldEnableTouchListeningWhenZoomedOut;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(nonatomic) struct CGPoint currentTouchLocation; // @synthesize currentTouchLocation=_currentTouchLocation;
@property(nonatomic) BOOL useImageViewSizeForScaling; // @synthesize useImageViewSizeForScaling=_useImageViewSizeForScaling;
@property(nonatomic) struct CGRect minimumImageRect; // @synthesize minimumImageRect=_minimumImageRect;
@property(nonatomic, getter=isPositionLocked) BOOL positionLocked; // @synthesize positionLocked=_positionLocked;
@property(retain, nonatomic) AFView *imageOverlayView; // @synthesize imageOverlayView=_imageOverlayView;
@property(nonatomic) __weak id <AFScrollingImageViewDelegate> scrollingImageViewDelegate; // @synthesize scrollingImageViewDelegate=_scrollingImageViewDelegate;
@property(nonatomic) BOOL allowsScaleUp; // @synthesize allowsScaleUp=_allowsScaleUp;
@property(nonatomic) float calculatedMaximumZoomScale; // @synthesize calculatedMaximumZoomScale=_calculatedMaximumZoomScale;
@property(nonatomic) float calculatedMinimumZoomScale; // @synthesize calculatedMinimumZoomScale=_calculatedMinimumZoomScale;
@property(retain, nonatomic) AFOpenGLView *openGLView; // @synthesize openGLView=_openGLView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)configureTouchListening;
- (void)setTouchListeningEnabled:(BOOL)arg1;
- (void)handleTap:(id)arg1;
- (void)handlePress:(id)arg1;
- (void)reportTouchUp;
- (void)reportTouchDown;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setImageSize:(struct CGSize)arg1 andZoomOut:(BOOL)arg2;
- (void)setImageSize:(struct CGSize)arg1;
- (void)showOpenGLView:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
@property(retain, nonatomic) UIImage *image; // @dynamic image;
- (void)setImage:(id)arg1 animated:(BOOL)arg2;
- (void)setImage:(id)arg1 needsLayout:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setImage:(id)arg1 needsLayout:(BOOL)arg2;
- (void)zoomOutAnimated:(BOOL)arg1;
@property(readonly, nonatomic) float calculatedRelativeZoomScale; // @dynamic calculatedRelativeZoomScale;
- (void)recalculateAndSetZoomBoundaries;
- (void)calculateZoomBoundariesForImageSize:(struct CGSize)arg1 returnedMin:(float *)arg2 returnedMax:(float *)arg3;
- (void)layoutSubviews;
- (void)setMinimumImageRect:(struct CGRect)arg1 animated:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setup;

@end

