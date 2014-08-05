//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GTMHTTPFetcherServiceProtocol.h"

@class GTMHTTPFetchHistory, NSArray, NSDictionary, NSMutableDictionary, NSURLCredential;

@interface GTMHTTPFetcherService : NSObject <GTMHTTPFetcherServiceProtocol>
{
    NSMutableDictionary *delayedHosts_;
    NSMutableDictionary *runningHosts_;
    unsigned int maxRunningFetchersPerHost_;
    GTMHTTPFetchHistory *fetchHistory_;
    NSArray *runLoopModes_;
    NSURLCredential *credential_;
    NSURLCredential *proxyCredential_;
    int cookieStorageMethod_;
    BOOL shouldFetchInBackground_;
    id <GTMFetcherAuthorizationProtocol> authorizer_;
}

@property(retain) GTMHTTPFetchHistory *fetchHistory; // @synthesize fetchHistory=fetchHistory_;
@property BOOL shouldFetchInBackground; // @synthesize shouldFetchInBackground=shouldFetchInBackground_;
@property int cookieStorageMethod; // @synthesize cookieStorageMethod=cookieStorageMethod_;
@property(retain) NSURLCredential *proxyCredential; // @synthesize proxyCredential=proxyCredential_;
@property(retain) NSURLCredential *credential; // @synthesize credential=credential_;
@property(retain) NSArray *runLoopModes; // @synthesize runLoopModes=runLoopModes_;
@property unsigned int maxRunningFetchersPerHost; // @synthesize maxRunningFetchersPerHost=maxRunningFetchersPerHost_;
- (void)detachAuthorizer;
@property(retain, nonatomic) id <GTMFetcherAuthorizationProtocol> authorizer;
@property(retain) NSDictionary *delayedHosts;
@property(retain) NSDictionary *runningHosts;
- (void)waitForCompletionOfAllFetchersWithTimeout:(double)arg1;
- (void)clearHistory;
- (void)clearETaggedDataCache;
@property BOOL shouldRememberETags;
- (unsigned int)ETaggedDataCacheCapacity;
- (void)setETaggedDataCacheCapacity:(unsigned int)arg1;
@property BOOL shouldCacheETaggedData;
- (void)stopAllFetchers;
- (unsigned int)numberOfDelayedFetchers;
- (unsigned int)numberOfRunningFetchers;
- (unsigned int)numberOfFetchers;
- (void)fetcherDidStop:(id)arg1;
- (void)stopFetcher:(id)arg1;
- (void)stopFetcherOnCurrentThread:(id)arg1;
- (void)startFetcher:(id)arg1;
- (void)startFetcherOnCurrentThread:(id)arg1;
- (BOOL)fetcherShouldBeginFetching:(id)arg1;
- (BOOL)isDelayingFetcher:(id)arg1;
- (void)addDelayedFetcher:(id)arg1 forHost:(id)arg2;
- (void)addRunningFetcher:(id)arg1 forHost:(id)arg2;
- (id)fetcherWithURLString:(id)arg1;
- (id)fetcherWithURL:(id)arg1;
- (id)fetcherWithRequest:(id)arg1;
- (id)fetcherWithRequest:(id)arg1 fetcherClass:(Class)arg2;
- (void)dealloc;
- (id)init;

@end
