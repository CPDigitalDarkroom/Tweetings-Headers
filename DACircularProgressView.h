//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface DACircularProgressView : UIView
{
    float _indeterminateDuration;
}

+ (Class)layerClass;
+ (void)initialize;
@property(nonatomic) float indeterminateDuration; // @synthesize indeterminateDuration=_indeterminateDuration;
@property(nonatomic) int indeterminate;
@property(nonatomic) float thicknessRatio;
@property(nonatomic) int roundedCorners;
@property(retain, nonatomic) UIColor *progressTintColor;
@property(retain, nonatomic) UIColor *trackTintColor;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2;
@property(nonatomic) float progress;
- (void)didMoveToWindow;
- (id)init;
- (id)circularProgressLayer;

@end

