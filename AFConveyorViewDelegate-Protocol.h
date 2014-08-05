//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFConveyorView, AFConveyorViewCell;

@protocol AFConveyorViewDelegate <NSObject>
- (void)conveyorView:(AFConveyorView *)arg1 didSelectItemAtIndex:(int)arg2;
- (AFConveyorViewCell *)conveyorView:(AFConveyorView *)arg1 cellForIndex:(int)arg2;
- (int)numberOfItemsInConveyorView:(AFConveyorView *)arg1;

@optional
- (void)conveyorViewDidStopScrolling:(AFConveyorView *)arg1;
- (void)conveyorView:(AFConveyorView *)arg1 didScrollToIndex:(int)arg2;
@end

