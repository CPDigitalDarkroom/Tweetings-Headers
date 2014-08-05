//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationItem.h"

@class AFQuickLaunchTitleView, NSString, UIColor, UILabel;

@interface AFNavigationItem : UINavigationItem
{
    BOOL _quickLaunchStyle;
    UIColor *_navigationTitleColor;
    UIColor *_textShadowColor;
    NSString *_currentTitle;
    UILabel *_titleLabel;
    AFQuickLaunchTitleView *_quickLaunchTitle;
}

@property(retain, nonatomic) AFQuickLaunchTitleView *quickLaunchTitle; // @synthesize quickLaunchTitle=_quickLaunchTitle;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *currentTitle; // @synthesize currentTitle=_currentTitle;
@property(nonatomic, getter=isQuickLaunchStyle) BOOL quickLaunchStyle; // @synthesize quickLaunchStyle=_quickLaunchStyle;
@property(retain, nonatomic) UIColor *textShadowColor; // @synthesize textShadowColor=_textShadowColor;
@property(retain, nonatomic) UIColor *navigationTitleColor; // @synthesize navigationTitleColor=_navigationTitleColor;
- (void).cxx_destruct;
- (void)configureForQuickLaunch;
- (void)removeAllTargets;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)setTitleView:(id)arg1;
@property(retain, nonatomic) UIColor *textColor; // @dynamic textColor;
- (void)setEditButtonHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditButtonTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)prepareItem;

@end
