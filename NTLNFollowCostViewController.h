//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "NTLNExternalServicesClientDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString;

@interface NTLNFollowCostViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, NTLNExternalServicesClientDelegate>
{
    NSString *screenName;
    NSString *followCostAllTime;
    NSString *followCostRecently;
    NSString *followCostReplyIndex;
    NSString *followCostGoldenIndex;
}

@property(retain) NSString *followCostReplyIndex; // @synthesize followCostReplyIndex;
@property(retain) NSString *followCostGoldenIndex; // @synthesize followCostGoldenIndex;
@property(retain) NSString *followCostAllTime; // @synthesize followCostAllTime;
@property(retain) NSString *followCostRecently; // @synthesize followCostRecently;
@property(retain) NSString *screenName; // @synthesize screenName;
- (void)externalServicesClientFailed:(id)arg1;
- (void)externalServicesClientSucceeded:(id)arg1;
- (void)getFollowCostStats;
- (void)switchToBrowserViewWithURL:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)setupTableView;
- (id)initWithStyle:(int)arg1;

@end

