//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString;

@interface NTLNRoundedIconView : UIButton
{
    struct CGImage *imageRef;
    float roundSize;
    NSString *passedString;
}

@property(retain) NSString *passedString; // @synthesize passedString;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2 round:(float)arg3;

@end

