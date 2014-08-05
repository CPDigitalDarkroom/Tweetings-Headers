//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AFContentPackShelfCell, NSArray, NSMutableArray, NSString;

@interface AFContentPackShelfView : UIView
{
    BOOL _leftAligned;
    NSArray *_lockedContentPacks;
    float _bounceOffset;
    id <AFContentPackShelfViewDelegate> _delegate;
    AFContentPackShelfCell *_getMoreCell;
    NSMutableArray *_cellArray;
    int _selectedIndex;
    NSString *_contentPackDescriptor;
}

@property(retain, nonatomic) NSString *contentPackDescriptor; // @synthesize contentPackDescriptor=_contentPackDescriptor;
@property(nonatomic) int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSMutableArray *cellArray; // @synthesize cellArray=_cellArray;
@property(retain, nonatomic) AFContentPackShelfCell *getMoreCell; // @synthesize getMoreCell=_getMoreCell;
@property(nonatomic) __weak id <AFContentPackShelfViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float bounceOffset; // @synthesize bounceOffset=_bounceOffset;
@property(nonatomic, getter=isLeftAligned) BOOL leftAligned; // @synthesize leftAligned=_leftAligned;
@property(retain, nonatomic) NSArray *lockedContentPacks; // @synthesize lockedContentPacks=_lockedContentPacks;
- (void).cxx_destruct;
- (void)recievedTouchAtPoint:(struct CGPoint)arg1;
- (void)adjustCellCountForCountDifference:(int)arg1;
@property(readonly, nonatomic) float leftTrayWidth;
@property(readonly, nonatomic) float rightTrayWidth;
- (void)cancelCellSelection;
- (void)layoutSubviews;
- (void)prepareView;
- (id)initWithFrame:(struct CGRect)arg1 contentPackDescriptor:(id)arg2;

@end
