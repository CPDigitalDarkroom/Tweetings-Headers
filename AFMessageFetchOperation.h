//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFErrorOperation.h"

@class NSString, NSURLRequest;

@interface AFMessageFetchOperation : AFErrorOperation
{
    BOOL _isFinished;
    BOOL _isExecuting;
    NSURLRequest *_urlRequest;
    NSString *_identifier;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
@property BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
@property BOOL isFinished; // @synthesize isFinished=_isFinished;
- (void).cxx_destruct;
- (BOOL)isConcurrent;
- (void)finish;
- (void)cancel;
- (void)finishWithError:(id)arg1;
- (void)createMessageWithResourceArchive:(id)arg1;
- (id)resourceArchiveForZipData:(id)arg1;
- (void)start;
- (id)initWithURL:(id)arg1 identifier:(id)arg2;

@end

