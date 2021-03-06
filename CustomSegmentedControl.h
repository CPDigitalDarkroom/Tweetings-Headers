//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FSIPadLayerControlFlow.h"

@class FSKeyboard, NSMutableArray, UIColor, UIFont;

@interface CustomSegmentedControl : UIView <FSIPadLayerControlFlow>
{
    NSMutableArray *labels;
    int selectedIndex;
    unsigned int currentSegments;
    UIView *selectionView;
    UIColor *selectedBackgroundColor;
    UIColor *defaultTextColor;
    UIColor *selectedTextColor;
    UIFont *textFont;
    UIFont *selectedTextFont;
    UIFont *largeTextFont;
    UIFont *largeSelectedTextFont;
    BOOL large;
    BOOL differentFirst;
    int keyboardState;
    BOOL _vertical;
    FSKeyboard *_keyboard;
}

@property(nonatomic) __weak FSKeyboard *keyboard; // @synthesize keyboard=_keyboard;
@property BOOL vertical; // @synthesize vertical=_vertical;
- (void).cxx_destruct;
- (void)dealloc;
- (int)indexOfItemNearestX:(float)arg1;
@property(readonly) struct CGSize currentSize;
@property(readonly) unsigned int numberOfSegments;
- (unsigned int)indexOfTitle:(id)arg1;
- (id)titleForSegmentAtIndex:(unsigned int)arg1;
- (id)selectedView;
@property int selectedIndex;
- (void)setItems:(id)arg1 differentFirst:(BOOL)arg2 large:(BOOL)arg3;
- (void)clear;
- (void)resetCurrentLabel;
- (void)handleThemeDidChange:(id)arg1;
- (id)initWithVertical:(BOOL)arg1 keyboard:(id)arg2;
- (void)setFontsWithVertical:(BOOL)arg1 keyboardState:(int)arg2;
- (void)keyMapIsInState:(int)arg1;

@end

