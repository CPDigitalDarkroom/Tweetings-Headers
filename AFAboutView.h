//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFView.h"

@class NSURL, UIButton, UIImageView, UILabel;

@interface AFAboutView : AFView
{
    id <AFAboutViewDelegate> _delegate;
    UIImageView *_shadowView;
    UIImageView *_backgroundView;
    UIImageView *_logoView;
    UILabel *_versionLabel;
    UILabel *_aboutLabel;
    UIButton *_actionButton;
    UIButton *_doneButton;
    NSURL *_currDestURL;
}

@property(retain, nonatomic) NSURL *currDestURL; // @synthesize currDestURL=_currDestURL;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *aboutLabel; // @synthesize aboutLabel=_aboutLabel;
@property(retain, nonatomic) UILabel *versionLabel; // @synthesize versionLabel=_versionLabel;
@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIImageView *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic) __weak id <AFAboutViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)versionText;
- (void)actionButtonPressed;
- (id)actionButtonText;
- (id)aboutText;
- (void)doneButtonPressed:(id)arg1;
- (void)actionButtonPressed:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)prepareView;

@end

