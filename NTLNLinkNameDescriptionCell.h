//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NTLNCell.h"

@class NSString;

@interface NTLNLinkNameDescriptionCell : NTLNCell
{
    NSString *name;
    NSString *screenName;
    NSString *description;
}

+ (void)drawName:(id)arg1 screenName:(id)arg2 description:(id)arg3 selected:(BOOL)arg4;
- (void)drawBackgroundRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)createCellWithNameDescription:(id)arg1 screenName:(id)arg2 description:(id)arg3;
- (void)dealloc;

@end
