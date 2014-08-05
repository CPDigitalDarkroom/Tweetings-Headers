//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "NSURLConnectionDataDelegate.h"
#import "NSURLConnectionDelegate.h"

@class NSMutableData, NSURLConnection, NSURLRequest, NSURLResponse;

@interface AFURLRequestOperation : NSOperation <NSURLConnectionDelegate, NSURLConnectionDataDelegate>
{
    BOOL _isExecuting;
    BOOL _isFinished;
    NSURLRequest *_request;
    NSURLConnection *_connection;
    NSMutableData *_responseData;
    NSURLResponse *_response;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property BOOL isFinished; // @synthesize isFinished=_isFinished;
@property BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)finish;
- (void)start;
- (BOOL)isConcurrent;
- (id)initWithRequest:(id)arg1;

@end
