//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NTLNCell.h"

@class NSString;

@interface NTLNPurchaseCell : NTLNCell
{
    BOOL isEven;
    NSString *productName;
    NSString *productDescription;
    NSString *productPrice;
}

+ (void)drawText:(id)arg1 description:(id)arg2 price:(id)arg3 selected:(BOOL)arg4;
@property(readonly) NSString *productPrice; // @synthesize productPrice;
@property(readonly) NSString *productDescription; // @synthesize productDescription;
@property(readonly) NSString *productName; // @synthesize productName;
- (void)drawBackgroundRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateByProductNoDisclosureFull:(id)arg1 description:(id)arg2 price:(id)arg3 isEven:(BOOL)arg4;
- (void)updateByProductNoDisclosure:(id)arg1 description:(id)arg2 price:(id)arg3 isEven:(BOOL)arg4;
- (void)updateByProductFull:(id)arg1 description:(id)arg2 price:(id)arg3 isEven:(BOOL)arg4;
- (void)updateByProduct:(id)arg1 description:(id)arg2 price:(id)arg3 isEven:(BOOL)arg4;
- (void)createCell;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 reuseIdentifier:(id)arg2;

@end

