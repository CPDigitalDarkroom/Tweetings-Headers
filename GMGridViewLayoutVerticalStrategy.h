//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMGridViewLayoutStrategyBase.h"

#import "GMGridViewLayoutStrategy.h"

@interface GMGridViewLayoutVerticalStrategy : GMGridViewLayoutStrategyBase <GMGridViewLayoutStrategy>
{
    int _numberOfItemsPerRow;
}

+ (BOOL)requiresEnablingPaging;
@property(readonly, nonatomic) int numberOfItemsPerRow; // @synthesize numberOfItemsPerRow=_numberOfItemsPerRow;
- (struct _NSRange)rangeOfPositionsInBoundsFromOffset:(struct CGPoint)arg1;
- (int)itemPositionFromLocation:(struct CGPoint)arg1;
- (struct CGPoint)originForItemAtPosition:(int)arg1;
- (void)rebaseWithItemCount:(int)arg1 insideOfBounds:(struct CGRect)arg2;
- (id)init;

@end

