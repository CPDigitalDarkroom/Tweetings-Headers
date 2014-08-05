//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFContentPackDetailSelectionViewController.h"

#import "AFStickerContentPackSelectionViewCellDelegate.h"

@class AFStickerView;

@interface AFStickerContentPackDetailViewController : AFContentPackDetailSelectionViewController <AFStickerContentPackSelectionViewCellDelegate>
{
    BOOL _didDrag;
    AFStickerView *_draggingSticker;
    struct CGPoint _offset;
    struct CGRect _origFrame;
}

+ (id)customizationKeyPath;
@property(nonatomic) BOOL didDrag; // @synthesize didDrag=_didDrag;
@property(nonatomic) struct CGRect origFrame; // @synthesize origFrame=_origFrame;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(nonatomic) __weak AFStickerView *draggingSticker; // @synthesize draggingSticker=_draggingSticker;
- (void).cxx_destruct;
- (void)reportStickerSelected:(id)arg1;
- (void)backButtonPressed:(id)arg1;
- (void)moveStickerViewWithStickerViewCell:(id)arg1 toPoint:(struct CGPoint)arg2;
- (id)configureStickerViewWithStickerViewCell:(id)arg1 sticker:(id)arg2;
- (void)animateStickerViewCellIn:(id)arg1;
- (void)stickerViewCell:(id)arg1 tapDidEndWithSticker:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)stickerViewCell:(id)arg1 tapDidMoveWithSticker:(id)arg2 toPoint:(struct CGPoint)arg3;
- (void)stickerViewCell:(id)arg1 didTapWithSticker:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)stickerViewCell:(id)arg1 didDropSticker:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)stickerViewCell:(id)arg1 didMoveSticker:(id)arg2 toPoint:(struct CGPoint)arg3;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (float)selectionView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)selectionViewCellForContentPackItem:(id)arg1;
- (void)stickerViewCell:(id)arg1 didSelectSticker:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)selectionViewDidSelectContentPackItem:(id)arg1;
- (void)enableScroll;
- (void)disableScroll;
- (void)loadContentPackItemSelectionView;
- (void)viewDidAppear:(BOOL)arg1;
- (id)initWithGLInstance:(id)arg1;

@end
