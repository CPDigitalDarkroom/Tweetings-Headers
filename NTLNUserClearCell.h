//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NTLNRoundedIconViewNoShadow, NTLNUser, UIImageView;

@interface NTLNUserClearCell : UITableViewCell
{
    NTLNUser *user;
    BOOL isEven;
    NTLNRoundedIconViewNoShadow *iconView;
    UIImageView *verified;
    UIImageView *protectedAccount;
}

@property(retain, nonatomic) NTLNRoundedIconViewNoShadow *iconView; // @synthesize iconView;
@property(readonly) NTLNUser *user; // @synthesize user;
- (void)updateIcon;
- (void)drawBackgroundRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateByUserFull:(id)arg1 isEven:(BOOL)arg2;
- (void)createCell;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
