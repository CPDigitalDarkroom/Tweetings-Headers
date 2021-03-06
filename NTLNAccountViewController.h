//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "ATMHudDelegate.h"
#import "NTLNTwitterUserClientDelegate.h"
#import "UITableViewDelegate.h"

@class ATMHud, NSMutableArray, NTLNFriendsViewController, WEPopoverController;

@interface NTLNAccountViewController : UITableViewController <UITableViewDelegate, NTLNTwitterUserClientDelegate, ATMHudDelegate>
{
    struct sqlite3 *database;
    NSMutableArray *accountIds;
    NSMutableArray *accountScreenNames;
    NSMutableArray *accountPasswords;
    NSMutableArray *accountKey;
    NSMutableArray *accountSecret;
    NSMutableArray *accountUserIds;
    NSMutableArray *sleep;
    NSMutableArray *sleepStart;
    NSMutableArray *sleepEnd;
    ATMHud *overlay;
    WEPopoverController *popoverController;
    NTLNFriendsViewController *friendsViewController;
}

@property(nonatomic) NTLNFriendsViewController *friendsViewController; // @synthesize friendsViewController;
@property(retain) WEPopoverController *popoverController; // @synthesize popoverController;
@property(retain, nonatomic) ATMHud *overlay; // @synthesize overlay;
@property(retain, nonatomic) NSMutableArray *sleepEnd; // @synthesize sleepEnd;
@property(retain, nonatomic) NSMutableArray *sleepStart; // @synthesize sleepStart;
@property(retain, nonatomic) NSMutableArray *sleep; // @synthesize sleep;
@property(retain, nonatomic) NSMutableArray *accountUserIds; // @synthesize accountUserIds;
@property(retain, nonatomic) NSMutableArray *accountSecret; // @synthesize accountSecret;
@property(retain, nonatomic) NSMutableArray *accountKey; // @synthesize accountKey;
@property(retain, nonatomic) NSMutableArray *accountPasswords; // @synthesize accountPasswords;
@property(retain, nonatomic) NSMutableArray *accountScreenNames; // @synthesize accountScreenNames;
@property(retain, nonatomic) NSMutableArray *accountIds; // @synthesize accountIds;
- (void)twitterUserClientFailed:(id)arg1;
- (void)twitterUserClientSucceeded:(id)arg1;
- (void)getUserInfo:(id)arg1;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)switchAccount;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)iconUpdate:(id)arg1;
- (void)getAccounts;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)failedWithError:(id)arg1;
- (void)handleTimer:(id)arg1;
- (void)addButtonPushed:(id)arg1;
- (void)doneButton:(id)arg1;
- (void)editButton:(id)arg1;
- (void)accountsButtonPushed:(id)arg1;
- (void)viewDidLoad;
- (void)setupTableView;
- (void)checkNetwork;
- (id)initWithStyle:(int)arg1;

@end

