//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NTLNCell.h"

@class NTLNAccountCellView, NTLNUser, UIImageView;

@interface NTLNAccountCell : NTLNCell
{
    NTLNUser *user;
    BOOL isEven;
    UIImageView *iconView;
    UIImageView *verified;
    UIImageView *protectedAccount;
    NTLNAccountCellView *contentView;
}

@property(retain, nonatomic) NTLNAccountCellView *contentView; // @synthesize contentView;
@property(readonly) NTLNUser *user; // @synthesize user;
- (void)updateIcon;
- (void)updateByUser:(id)arg1 isEven:(BOOL)arg2;
- (void)updateByUserFull:(id)arg1 isEven:(BOOL)arg2;
- (void)createCell;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 reuseIdentifier:(id)arg2;

@end

