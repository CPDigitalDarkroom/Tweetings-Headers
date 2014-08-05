//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSOperationQueue;

@interface AFDownloadManager : NSObject
{
    NSOperationQueue *_operationQueue;
    NSMutableSet *_activeDownloads;
}

+ (void)unload;
+ (id)sharedManager;
@property(retain, nonatomic) NSMutableSet *activeDownloads; // @synthesize activeDownloads=_activeDownloads;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (id)activeDownloadWithIdentifier:(id)arg1;
- (void)startDownload:(id)arg1 userInfo:(id)arg2;
- (id)init;

@end
