//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface AFDispatchPriorityQueue : NSObject
{
    BOOL _isExecuting;
    struct dispatch_queue_s *_queue;
    NSMutableDictionary *_queueDict;
    NSMutableArray *_submissionQueue;
    struct dispatch_queue_s *_synchronizingQueue;
    int _queueCounter;
}

+ (id)cpuHiresProcessingQueue;
+ (id)processingQueue;
@property(nonatomic) int queueCounter; // @synthesize queueCounter=_queueCounter;
@property(nonatomic) struct dispatch_queue_s *synchronizingQueue; // @synthesize synchronizingQueue=_synchronizingQueue;
@property(nonatomic) BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
@property(retain, nonatomic) NSMutableArray *submissionQueue; // @synthesize submissionQueue=_submissionQueue;
@property(retain, nonatomic) NSMutableDictionary *queueDict; // @synthesize queueDict=_queueDict;
@property(nonatomic) struct dispatch_queue_s *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)removeQueueWrapperFromSubmissionQueue:(id)arg1;
- (void)pushQueueWrapperToSubmissionQueue:(id)arg1;
- (void)addQueueWrapperToSubmissionQueue:(id)arg1;
- (void)cancelPendingBlocksOnQueueWithIdentifier:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)pauseQueueWithIdentifier:(int)arg1;
- (void)restartQueueWithIdentifier:(int)arg1;
- (void)executeNextBlockIfPossible;
- (BOOL)queueWithIdentifierIsValid:(int)arg1;
- (void)pushBlock:(CDUnknownBlockType)arg1 toQueueWithIdentifier:(int)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)addBlock:(CDUnknownBlockType)arg1 toQueueWithIdentifier:(int)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)pushBlock:(CDUnknownBlockType)arg1 toQueueWithIdentifier:(int)arg2;
- (void)addBlock:(CDUnknownBlockType)arg1 toQueueWithIdentifier:(int)arg2;
- (void)destroyQueueWithIdentifierAfterPendingBlocksComplete:(int)arg1;
- (void)destroyQueueWithIdentifier:(int)arg1;
- (int)generateQueueForType:(int)arg1;
- (void)dealloc;
- (id)initWithDispatchQueue:(struct dispatch_queue_s *)arg1;

@end
