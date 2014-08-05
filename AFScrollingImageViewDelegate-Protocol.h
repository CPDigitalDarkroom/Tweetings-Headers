//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFOpenGLView, AFScrollingImageView, UIEvent;

@protocol AFScrollingImageViewDelegate <NSObject>
- (void)imageViewDidZoom:(AFScrollingImageView *)arg1;
- (void)imageViewStoppedDragging:(AFScrollingImageView *)arg1;
- (void)imageViewBeganDragging:(AFScrollingImageView *)arg1;
- (void)imageViewStoppedZooming:(AFScrollingImageView *)arg1;
- (void)imageViewBeganZooming:(AFScrollingImageView *)arg1;

@optional
- (void)imageViewDidReceiveTouchUp:(AFScrollingImageView *)arg1;
- (void)imageViewDidReceiveTouchDown:(AFScrollingImageView *)arg1;
- (void)imageView:(AFScrollingImageView *)arg1 didResizeOpenGLView:(AFOpenGLView *)arg2;
- (BOOL)imageView:(AFScrollingImageView *)arg1 isPointInside:(struct CGPoint)arg2 event:(UIEvent *)arg3;
@end

