//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSString, NTLNTwitterStreamClient;

@protocol NTLNTwitterStreamClientDelegate
- (void)twitterStreamClientSendMessage:(NTLNTwitterStreamClient *)arg1 message:(NSString *)arg2;
- (void)twitterStreamClientFailed:(NTLNTwitterStreamClient *)arg1 withError:(NSString *)arg2;
- (void)twitterStreamClientFailed:(NTLNTwitterStreamClient *)arg1;
- (void)twitterStreamClientSucceeded:(NTLNTwitterStreamClient *)arg1 messages:(NSArray *)arg2;
- (void)twitterStreamClientEnd:(NTLNTwitterStreamClient *)arg1;
- (void)twitterStreamClientBegin:(NTLNTwitterStreamClient *)arg1;
@end

