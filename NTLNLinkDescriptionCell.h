//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NTLNCell.h"

@class NSString;

@interface NTLNLinkDescriptionCell : NTLNCell
{
    NSString *description;
}

+ (void)drawDescription:(id)arg1 selected:(BOOL)arg2;
- (void)drawBackgroundRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)createCellWithDescription:(id)arg1;
- (void)dealloc;

@end

