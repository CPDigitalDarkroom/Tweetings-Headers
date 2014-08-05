//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NTLNHttpClient.h"

@class NSObject<TwitLongerClientDelegate>, NSString, NTLNStatus;

@interface TwitLongerClient : NTLNHttpClient
{
    NSObject<TwitLongerClientDelegate> *delegate;
    NSString *returnText;
    BOOL getContent;
    BOOL twtMore;
    BOOL isNote;
    NTLNStatus *status;
    NSString *statusId;
}

+ (void)removeObserver:(id)arg1;
+ (void)addObserver:(id)arg1 selectorSuccess:(SEL)arg2;
@property BOOL isNote; // @synthesize isNote;
@property(nonatomic) NSString *statusId; // @synthesize statusId;
@property BOOL twtMore; // @synthesize twtMore;
@property BOOL getContent; // @synthesize getContent;
@property(retain) NTLNStatus *status; // @synthesize status;
@property(retain) NSObject<TwitLongerClientDelegate> *delegate; // @synthesize delegate;
@property(readonly) NSString *returnText; // @synthesize returnText;
- (void)uploadNote:(id)arg1;
- (void)getFullTMTweet:(id)arg1 withNotification:(BOOL)arg2;
- (void)getFullTMTweet:(id)arg1;
- (void)getFullTweet:(id)arg1 withNotification:(BOOL)arg2;
- (void)getFullTweet:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestSucceeded;
- (void)uploadTwtMore:(id)arg1 in_reply_to:(id)arg2;
- (void)upload:(id)arg1;
- (BOOL)checkNetwork;
- (void)dealloc;

@end

