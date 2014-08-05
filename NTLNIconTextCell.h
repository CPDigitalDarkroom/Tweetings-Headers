//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NTLNCell.h"

@class NSString, UIImage;

@interface NTLNIconTextCell : NTLNCell
{
    NSString *text;
    UIImage *icon;
    BOOL isEven;
}

+ (void)drawText:(id)arg1 icon:(id)arg2 selected:(BOOL)arg3;
+ (void)drawImage:(id)arg1 atPoint:(struct CGPoint)arg2 withOverlayColor:(id)arg3;
- (void)drawBackgroundRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)createCellWithTextNoAccessory:(id)arg1 icon:(id)arg2 isEven:(BOOL)arg3;
- (void)createCellWithTextRoundBottom:(id)arg1 icon:(id)arg2 isEven:(BOOL)arg3;
- (void)createCellWithTextRounded:(id)arg1 icon:(id)arg2 isEven:(BOOL)arg3;
- (void)createCellWithTextRoundTopPlain:(id)arg1 icon:(id)arg2 isEven:(BOOL)arg3;
- (void)createCellWithTextRoundTop:(id)arg1 icon:(id)arg2 isEven:(BOOL)arg3;
- (void)createCellWithTextFull:(id)arg1 icon:(id)arg2 isEven:(BOOL)arg3;
- (void)createCellWithText:(id)arg1 icon:(id)arg2 isEven:(BOOL)arg3;

@end

