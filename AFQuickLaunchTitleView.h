//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFView.h"

@class AFNavigationItemButton, NSString, UIView;

@interface AFQuickLaunchTitleView : AFView
{
    AFNavigationItemButton *_editButton;
    UIView *_titleView;
    NSString *_title;
    NSString *_editButtonTitle;
}

@property(retain, nonatomic) NSString *editButtonTitle; // @synthesize editButtonTitle=_editButtonTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) AFNavigationItemButton *editButton; // @synthesize editButton=_editButton;
- (void).cxx_destruct;
- (void)removeAllTargets;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)textColor;
- (void)setEditButtonHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)centerSubviews;
- (void)layoutSubviews;
- (void)prepareView;

@end

