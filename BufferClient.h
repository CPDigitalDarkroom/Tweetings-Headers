//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NTLNHttpClient.h"

@class NSObject<BufferClientDelegate>, NSString;

@interface BufferClient : NTLNHttpClient
{
    NSObject<BufferClientDelegate> *delegate;
    BOOL posting;
    BOOL list;
    NSString *text;
}

@property(nonatomic) BOOL list; // @synthesize list;
@property(nonatomic) BOOL posting; // @synthesize posting;
@property(retain, nonatomic) NSString *text; // @synthesize text;
@property(retain) NSObject<BufferClientDelegate> *delegate; // @synthesize delegate;
- (void)requestFailed:(id)arg1;
- (void)requestSucceeded;
- (void)authentication:(id)arg1 request:(id)arg2 finishedWithError:(id)arg3;
- (void)post:(id)arg1;
- (void)listProfiles:(id)arg1;
- (id)myCustomAuth;
- (void)dealloc;

@end

