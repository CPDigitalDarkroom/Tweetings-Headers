//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFConveyorViewDelegate.h"

@class AFConveyorView;

@interface AFConveyorController : NSObject <AFConveyorViewDelegate>
{
    AFConveyorView *_conveyorView;
}

@property(retain, nonatomic) AFConveyorView *conveyorView; // @synthesize conveyorView=_conveyorView;
- (void).cxx_destruct;
- (void)conveyorView:(id)arg1 didSelectItemAtIndex:(int)arg2;
- (id)conveyorView:(id)arg1 cellForIndex:(int)arg2;
- (int)numberOfItemsInConveyorView:(id)arg1;
- (id)initWithConveyorView:(id)arg1;

@end
