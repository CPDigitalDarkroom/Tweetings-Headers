//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NTLNOAuthHttpClient.h"

@class NSMutableArray, NSMutableData, NSObject<NTLNTwitterStreamClientDelegate>, NSTimer;

@interface NTLNTwitterStreamClient : NTLNOAuthHttpClient
{
    BOOL parseResultJSON;
    NSObject<NTLNTwitterStreamClientDelegate> *delegate;
    NSMutableArray *friends;
    NSMutableArray *suspendedMessages;
    NSMutableData *buf;
    int pollCount;
    BOOL isConnected;
    BOOL receivedMessage;
    BOOL isSuspended;
    NSTimer *pollCounter;
}

@property(nonatomic) BOOL isConnected; // @synthesize isConnected;
@property(retain, nonatomic) NSMutableArray *suspendedMessages; // @synthesize suspendedMessages;
@property(nonatomic) BOOL isSuspended; // @synthesize isSuspended;
@property(nonatomic) BOOL receivedMessage; // @synthesize receivedMessage;
@property(retain, nonatomic) NSTimer *pollCounter; // @synthesize pollCounter;
@property(nonatomic) int pollCount; // @synthesize pollCount;
@property(retain, nonatomic) NSMutableArray *friends; // @synthesize friends;
@property(retain, nonatomic) NSMutableData *buf; // @synthesize buf;
@property(retain) NSObject<NTLNTwitterStreamClientDelegate> *delegate; // @synthesize delegate;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)parseMessage:(id)arg1 dictionary:(id)arg2 isReTweet:(BOOL)arg3 isDM:(BOOL)arg4;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)reset;
- (void)reconnect;
- (void)resumeStream:(id)arg1;
- (void)suspendStream:(id)arg1;
- (void)startStream;
- (BOOL)isConnectionActive;
- (void)checkStream:(id)arg1;
- (void)beginTimer;
- (void)closeStreamWithoutNotification:(BOOL)arg1;
- (void)closeStream;
- (void)dealloc;

@end

