//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NTLNHttpClient.h"

@class NSObject<NTLNIconDownloaderDelegate>, NSString;

@interface NTLNIconDownloader : NTLNHttpClient
{
    NSObject<NTLNIconDownloaderDelegate> *delegate;
    NSString *statusId;
}

+ (id)platform;
@property(nonatomic) NSString *statusId; // @synthesize statusId;
@property(retain) NSObject<NTLNIconDownloaderDelegate> *delegate; // @synthesize delegate;
- (void)requestFailed:(id)arg1;
- (void)requestSucceeded;
- (void)download:(id)arg1;
- (void)dealloc;

@end

