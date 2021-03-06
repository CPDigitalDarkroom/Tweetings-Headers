//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "NTLNTwitterClientDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NTLNSearchViewController;

@interface NTLNSearchBookmarkController : UITableViewController <UITableViewDelegate, UITableViewDataSource, NTLNTwitterClientDelegate>
{
    NSMutableArray *bookmarks;
    NTLNSearchViewController *viewController;
}

@property(nonatomic) NTLNSearchViewController *viewController; // @synthesize viewController;
@property(retain) NSMutableArray *bookmarks; // @synthesize bookmarks;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)twitterClientEnd:(id)arg1;
- (void)twitterClientBegin:(id)arg1;
- (void)twitterClientFailed:(id)arg1 withError:(id)arg2;
- (void)twitterClientFailed:(id)arg1;
- (void)twitterSearchClientSucceeded:(id)arg1 messages:(id)arg2;
- (void)twitterClientSucceeded:(id)arg1 messages:(id)arg2;
- (void)getBookmarks;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)dealloc;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)doneButtonPushed:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)setupTableView;
- (id)initWithStyle:(int)arg1;

@end

