//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICTableViewController.h"

@class NSString;

@interface NTLNCacheSettingsViewController : UICTableViewController
{
    NSString *cacheSize;
    NSString *iconCacheSize;
    NSString *previewCacheSize;
    NSString *themeCacheSize;
}

@property(retain, nonatomic) NSString *cacheSize; // @synthesize cacheSize;
@property(retain, nonatomic) NSString *previewCacheSize; // @synthesize previewCacheSize;
@property(retain, nonatomic) NSString *iconCacheSize; // @synthesize iconCacheSize;
@property(retain, nonatomic) NSString *themeCacheSize; // @synthesize themeCacheSize;
- (void)dealloc;
- (void)doneButtonPushed:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)getCacheSizes;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithStyle:(int)arg1;
- (void)setupNavButtons;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)convertSize:(int)arg1;
- (id)getMPSize:(id)arg1;
- (unsigned long long)folderSize:(id)arg1;
- (void)setupPrototypes;

@end

