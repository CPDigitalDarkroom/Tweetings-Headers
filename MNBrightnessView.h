//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MNMagnifyingView;

@interface MNBrightnessView : UIView
{
    id <MNBrightnessViewDelegate> _delegate;
    struct CGGradient *_gradient;
    MNMagnifyingView *_magnifyingView;
    int _interfaceOrientation;
}

@property id <MNBrightnessViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateToInterfaceOrientation:(int)arg1;
- (void)setHue:(float)arg1 saturation:(float)arg2;
@property float brightness;
- (id)initWithFrame:(struct CGRect)arg1;

@end

