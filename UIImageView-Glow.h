//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@interface UIImageView (Glow)
- (void)stopGlowing;
- (void)startGlowing;
- (void)addGlow;
- (void)glowOnce;
- (void)glowOnceAtLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (void)startGlowingWithColor:(id)arg1 fromIntensity:(float)arg2 toIntensity:(float)arg3 repeat:(BOOL)arg4;
- (void)startGlowingWithColor:(id)arg1 intensity:(float)arg2;
- (void)setGlowView:(id)arg1;
@property(readonly, nonatomic) UIImageView *glowView;
@end
