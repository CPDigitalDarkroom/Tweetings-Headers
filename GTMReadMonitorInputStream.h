//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSInputStream.h"

#import "NSStreamDelegate.h"

@class NSArray, NSThread;

@interface GTMReadMonitorInputStream : NSInputStream <NSStreamDelegate>
{
    NSInputStream *inputStream_;
    NSThread *thread_;
    NSArray *runLoopModes_;
    id readDelegate_;
    SEL readSelector_;
}

+ (id)inputStreamWithStream:(id)arg1;
+ (void)forwardInvocation:(id)arg1;
+ (id)methodSignatureForSelector:(SEL)arg1;
@property(retain) NSArray *runLoopModes; // @synthesize runLoopModes=runLoopModes_;
@property SEL readSelector; // @synthesize readSelector=readSelector_;
@property id readDelegate; // @synthesize readDelegate=readDelegate_;
- (id)streamError;
- (unsigned int)streamStatus;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)close;
- (void)open;
- (BOOL)hasBytesAvailable;
- (BOOL)getBuffer:(char **)arg1 length:(unsigned int *)arg2;
- (void)invokeReadSelectorWithBuffer:(id)arg1;
- (int)read:(char *)arg1 maxLength:(unsigned int)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithStream:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end

