//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FLPBPasteboardExchange, NSDictionary, NSError;

@protocol FLPBPasteboardExchangeDelegate <NSObject>

@optional
- (void)pasteboardExchange:(FLPBPasteboardExchange *)arg1 requestDidFailWithError:(NSError *)arg2;
- (void)pasteboardExchange:(FLPBPasteboardExchange *)arg1 didReceiveResponse:(NSDictionary *)arg2 forRequest:(NSDictionary *)arg3;
- (void)pasteboardExchange:(FLPBPasteboardExchange *)arg1 didReceiveRequest:(NSDictionary *)arg2;
@end
