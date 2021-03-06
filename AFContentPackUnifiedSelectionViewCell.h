//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFHorizontalTableViewCell.h"

@class AFContentPack, AFContentPackItem, AFView, NSString, UIActivityIndicatorView, UIImageView, UILabel;

@interface AFContentPackUnifiedSelectionViewCell : AFHorizontalTableViewCell
{
    BOOL _loading;
    BOOL _active;
    AFView *_previewContainerView;
    UILabel *_label;
    AFContentPackItem *_contentPackItem;
    AFContentPack *_contentPack;
    NSString *_title;
    UIActivityIndicatorView *_wheelView;
    UIImageView *_activeImageView;
    UIImageView *_downloadIconView;
}

@property(retain, nonatomic) UIImageView *downloadIconView; // @synthesize downloadIconView=_downloadIconView;
@property(retain, nonatomic) UIImageView *activeImageView; // @synthesize activeImageView=_activeImageView;
@property(retain, nonatomic) UIActivityIndicatorView *wheelView; // @synthesize wheelView=_wheelView;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) AFContentPack *contentPack; // @synthesize contentPack=_contentPack;
@property(retain, nonatomic) AFContentPackItem *contentPackItem; // @synthesize contentPackItem=_contentPackItem;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) AFView *previewContainerView; // @synthesize previewContainerView=_previewContainerView;
- (void).cxx_destruct;
- (void)update;
- (void)animateInWithDelay:(float)arg1;
- (void)setActive:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

