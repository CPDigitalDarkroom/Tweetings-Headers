//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NTLNCell.h"

@class NSString;

@interface NTLNNumberCell : NTLNCell
{
    NSString *text;
    NSString *rightText;
    BOOL isEven;
}

+ (void)drawText:(id)arg1 rightText:(id)arg2 selected:(BOOL)arg3;
- (void)drawBackgroundRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)createCellWithTextRoundBottom:(id)arg1 rightText:(id)arg2 isEven:(BOOL)arg3;
- (void)createCellWithTextRounded:(id)arg1 rightText:(id)arg2 isEven:(BOOL)arg3;
- (void)createCellWithTextRoundTopPlain:(id)arg1 rightText:(id)arg2 isEven:(BOOL)arg3;
- (void)createCellWithTextRoundTop:(id)arg1 rightText:(id)arg2 isEven:(BOOL)arg3;
- (void)createCellWithText:(id)arg1 rightText:(id)arg2 isEven:(BOOL)arg3;

@end

