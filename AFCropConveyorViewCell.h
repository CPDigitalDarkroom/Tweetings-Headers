//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFConveyorViewCell.h"

@class AFCropPreset, UIImageView, UILabel;

@interface AFCropConveyorViewCell : AFConveyorViewCell
{
    AFCropPreset *_preset;
    UILabel *_colonLabel;
    UILabel *_widthLabel;
    UILabel *_heightLabel;
    UILabel *_nameLabel;
    UIImageView *_invertIconView;
}

@property(retain, nonatomic) UIImageView *invertIconView; // @synthesize invertIconView=_invertIconView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *heightLabel; // @synthesize heightLabel=_heightLabel;
@property(retain, nonatomic) UILabel *widthLabel; // @synthesize widthLabel=_widthLabel;
@property(retain, nonatomic) UILabel *colonLabel; // @synthesize colonLabel=_colonLabel;
@property(retain, nonatomic) AFCropPreset *preset; // @synthesize preset=_preset;
- (void).cxx_destruct;
- (void)setDepressed:(BOOL)arg1;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end
