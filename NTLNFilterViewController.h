//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "KKPasscodeSettingsViewControllerDelegate.h"
#import "UIActionSheetDelegate.h"

@class NSMutableArray, windowOverlay;

@interface NTLNFilterViewController : UITableViewController <UIActionSheetDelegate, KKPasscodeSettingsViewControllerDelegate>
{
    NSMutableArray *filter;
    BOOL isiCloudSupported;
    windowOverlay *overlay;
}

+ (void)updateFromiCloud;
+ (BOOL)downloadFileIfNotAvailable:(id)arg1;
+ (BOOL)checkFiltersExistInCloud;
@property(nonatomic) BOOL isiCloudSupported; // @synthesize isiCloudSupported;
@property(retain, nonatomic) NSMutableArray *filter; // @synthesize filter;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)didSettingsChanged:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)setSwitch:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)updateArchive;
- (void)saveArchive;
- (void)loadArchive;
- (BOOL)checkFiltersExistInCloud;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)editButton:(id)arg1;
- (void)viewDidLoad;

@end
