//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFConveyorViewCell.h"

@class UIColor, UIImageView;

@interface AFColorConveyorViewCell : AFConveyorViewCell
{
    UIColor *_color;
    UIImageView *_colorChipView;
}

@property(retain, nonatomic) UIImageView *colorChipView; // @synthesize colorChipView=_colorChipView;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)setColorChipImage:(id)arg1;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end
