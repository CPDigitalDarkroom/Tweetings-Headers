//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AFView, NSMutableArray;

@interface AFConveyorSideView : UIView
{
    BOOL _adjacentCellSelected;
    int _conveyorType;
    float _cellWidth;
    int _type;
    NSMutableArray *_imageViews;
    AFView *_containerView;
}

@property(retain, nonatomic) AFView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) float cellWidth; // @synthesize cellWidth=_cellWidth;
@property(nonatomic) int conveyorType; // @synthesize conveyorType=_conveyorType;
@property(nonatomic, getter=isAdjacentCellSelected) BOOL adjacentCellSelected; // @synthesize adjacentCellSelected=_adjacentCellSelected;
- (void).cxx_destruct;
- (void)updateCells;
- (id)initWithFrame:(struct CGRect)arg1 type:(int)arg2 cellWidth:(float)arg3;

@end

