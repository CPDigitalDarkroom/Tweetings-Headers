//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface NTLNPhotoDownloader : NSObject
{
    NSMutableDictionary *urlToContainer;
    NSMutableArray *downloadQueue;
    NSString *iconCacheRootPath;
    BOOL cache;
}

+ (void)removeObserver:(id)arg1;
+ (void)addObserver:(id)arg1 selectorSuccess:(SEL)arg2;
+ (id)defaultImage;
+ (id)instance;
@property(readonly) NSString *iconCacheRootPath; // @synthesize iconCacheRootPath;
- (void)processDownloadQueue;
- (id)imageContainerForURL:(id)arg1 andCache:(BOOL)arg2;
- (id)imageContainerForURL:(id)arg1;
- (id)imageContainerForURL:(id)arg1 andCache:(BOOL)arg2 rect:(struct CGRect)arg3;
- (void)dealloc;
- (id)init;

@end
