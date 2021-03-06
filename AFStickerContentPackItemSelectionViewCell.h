//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFHorizontalTableViewCell.h"

@class AFStickerContentPackItem, UIImageView;

@interface AFStickerContentPackItemSelectionViewCell : AFHorizontalTableViewCell
{
    AFStickerContentPackItem *_contentPackItem;
    UIImageView *_imgView;
    id <AFStickerContentPackSelectionViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <AFStickerContentPackSelectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) AFStickerContentPackItem *contentPackItem; // @synthesize contentPackItem=_contentPackItem;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)stickerSize;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)stickerViewTapped:(id)arg1;
- (void)stickerViewSelected:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

