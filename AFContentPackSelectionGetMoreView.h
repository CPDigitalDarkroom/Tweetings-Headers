//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AFContentPackUnifiedGetMoreButton, UILabel;

@interface AFContentPackSelectionGetMoreView : UIView
{
    BOOL _header;
    AFContentPackUnifiedGetMoreButton *_button;
    UILabel *_label;
    id _target;
    SEL _action;
}

@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) AFContentPackUnifiedGetMoreButton *button; // @synthesize button=_button;
@property(nonatomic, getter=isHeader) BOOL header; // @synthesize header=_header;
- (void).cxx_destruct;
- (void)getMorePressed;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)prepareView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

