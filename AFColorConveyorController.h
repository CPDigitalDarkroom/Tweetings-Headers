//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFConveyorController.h"

@class NSArray, UIColor;

@interface AFColorConveyorController : AFConveyorController
{
    BOOL _eraserEnabled;
    BOOL _eraserSelected;
    id <AFColorConveyorControllerDelegate> _delegate;
    NSArray *_colors;
    UIColor *_selectedColor;
}

+ (id)defaultColors;
@property(nonatomic, getter=isEraserSelected) BOOL eraserSelected; // @synthesize eraserSelected=_eraserSelected;
@property(nonatomic, getter=isEraserEnabled) BOOL eraserEnabled; // @synthesize eraserEnabled=_eraserEnabled;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(nonatomic) __weak id <AFColorConveyorControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)conveyorView:(id)arg1 didScrollToIndex:(int)arg2;
- (void)conveyorView:(id)arg1 didSelectItemAtIndex:(int)arg2;
- (id)conveyorView:(id)arg1 cellForIndex:(int)arg2;
- (int)numberOfItemsInConveyorView:(id)arg1;
- (id)colorAtIndex:(int)arg1;
- (id)initWithConveyorView:(id)arg1;
- (id)initWithConveyorView:(id)arg1 colors:(id)arg2;
- (id)initWithConveyorView:(id)arg1 colors:(id)arg2 eraserEnabled:(BOOL)arg3;

@end

