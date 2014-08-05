//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NTLNCell.h"

@class NSString, UIImageView;

@interface NTLNTrendCell : NTLNCell
{
    BOOL isEven;
    UIImageView *iconView;
    NSString *currTrend;
}

+ (void)drawText:(id)arg1 selected:(BOOL)arg2;
@property(readonly) NSString *currTrend; // @synthesize currTrend;
- (void)drawBackgroundRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateByTrend:(id)arg1 isEven:(BOOL)arg2;
- (void)createCell;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 reuseIdentifier:(id)arg2;

@end

