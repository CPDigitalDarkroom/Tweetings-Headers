//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSOperationQueue;

@interface AFABTestManager : NSObject
{
    BOOL _updating;
    int _pendingVersion;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_cachedResults;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *cachedResults; // @synthesize cachedResults=_cachedResults;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) int pendingVersion; // @synthesize pendingVersion=_pendingVersion;
@property(getter=isUpdating) BOOL updating; // @synthesize updating=_updating;
- (void).cxx_destruct;
- (void)parseTestFileData:(id)arg1;
- (void)parseVersionFileData:(id)arg1;
- (void)checkForTestUpdates;
- (int)pushNotificationStatus;
- (void)reloadValues;
@property(readonly, nonatomic) NSDictionary *testSummary; // @dynamic testSummary;
- (id)init;
- (int)testValueForKey:(id)arg1 withNumChoices:(int)arg2 defaultChoice:(int)arg3;
- (int)testValueForKey:(id)arg1 withProbabilityDistribution:(id)arg2 defaultChoice:(int)arg3;

@end

