//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFAssetManager, AFContentPackResourceArchive, NSCache, NSSet, NSString, NSURL;

@interface AFContentPackResourceProvider : NSObject
{
    BOOL _downloading;
    NSString *_contentPackIdentifier;
    int _state;
    float _downloadProgress;
    int _resourceProviderType;
    AFAssetManager *_contentManager;
    AFContentPackResourceArchive *_remoteResourceArchive;
    NSSet *_bundleResourceFilenames;
    NSCache *_resourceCache;
    NSURL *_remoteURL;
}

@property(retain, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
@property(retain, nonatomic) NSCache *resourceCache; // @synthesize resourceCache=_resourceCache;
@property(retain, nonatomic) NSSet *bundleResourceFilenames; // @synthesize bundleResourceFilenames=_bundleResourceFilenames;
@property(retain, nonatomic) AFContentPackResourceArchive *remoteResourceArchive; // @synthesize remoteResourceArchive=_remoteResourceArchive;
@property(nonatomic, getter=isDownloading) BOOL downloading; // @synthesize downloading=_downloading;
@property(nonatomic) __weak AFAssetManager *contentManager; // @synthesize contentManager=_contentManager;
@property(nonatomic) int resourceProviderType; // @synthesize resourceProviderType=_resourceProviderType;
@property(nonatomic) float downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(nonatomic) int state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *contentPackIdentifier; // @synthesize contentPackIdentifier=_contentPackIdentifier;
- (void).cxx_destruct;
- (BOOL)addSkipBackupAttributeToItemAtURL:(id)arg1;
- (BOOL)areResourcesDownloaded;
- (id)bundleImageNamed:(id)arg1;
- (id)bundleDataForResourceNamed:(id)arg1;
- (id)pathForFileInBundleResources:(id)arg1;
- (id)resourceArchivePath;
- (id)resourceArchiveName;
- (id)resourcesDirectory;
- (void)downloadFailedWithError:(id)arg1;
- (void)downloadFinished;
- (void)cleanupAfterDownload;
- (void)downloadResources;
- (void)clearResourceCache;
- (id)dataForResourceNamed:(id)arg1;
- (id)imageNamed:(id)arg1;
- (id)initWithType:(int)arg1 contentPackIdentifier:(id)arg2 remoteURL:(id)arg3 contentManager:(id)arg4;
- (void)dealloc;

@end

