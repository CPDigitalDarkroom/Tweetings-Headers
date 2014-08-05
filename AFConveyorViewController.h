//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFToolViewController.h"

#import "AFConveyorViewDelegate.h"

@class AFConveyorView, UIColor;

@interface AFConveyorViewController : AFToolViewController <AFConveyorViewDelegate>
{
    AFConveyorView *_conveyorView;
    UIColor *_highlightColor;
    float _cellWidth;
}

+ (BOOL)usesSplitConveyorLayout;
@property(nonatomic) float cellWidth; // @synthesize cellWidth=_cellWidth;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) AFConveyorView *conveyorView; // @synthesize conveyorView=_conveyorView;
- (void).cxx_destruct;
- (void)conveyorView:(id)arg1 didSelectItemAtIndex:(int)arg2;
- (id)conveyorView:(id)arg1 cellForIndex:(int)arg2;
- (int)numberOfItemsInConveyorView:(id)arg1;
- (void)setupConveyorOverlay;
- (void)createConveyorOverlay;
- (void)viewDidLoad;
- (void)loadView;

@end

