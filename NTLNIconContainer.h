//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NTLNIconDownloaderDelegate.h"

@class NSString, UIImage;

@interface NTLNIconContainer : NSObject <NTLNIconDownloaderDelegate>
{
    UIImage *iconImage;
    NSString *url;
    BOOL downloading;
    NSString *statusId;
    int index;
}

+ (BOOL)cacheFileExistsForURL:(id)arg1;
+ (id)readFromCacheFileForURL:(id)arg1;
+ (id)imageWithImage:(id)arg1 scaledToSize:(struct CGSize)arg2;
+ (void)writeAsCacheFileForURL:(id)arg1 data:(id)arg2;
+ (id)cacheFilenameForURL:(id)arg1;
+ (id)md5:(id)arg1;
@property(nonatomic) int index; // @synthesize index;
@property(retain, nonatomic) NSString *statusId; // @synthesize statusId;
@property(readonly) NSString *url; // @synthesize url;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage;
- (void)iconDownloaderFailed:(id)arg1;
- (void)iconDownloaderSucceeded:(id)arg1;
- (void)requestDownload;
- (BOOL)loadCache;
- (void)loadFileFromCache;
- (void)dealloc;
- (id)initWithIconURL:(id)arg1;

@end
