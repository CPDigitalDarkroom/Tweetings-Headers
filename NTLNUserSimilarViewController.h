//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "NTLNTwitterUserClientDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UISearchDisplayController, UIView;

@interface NTLNUserSimilarViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, NTLNTwitterUserClientDelegate, UISearchDisplayDelegate, UISearchBarDelegate>
{
    int currentPage;
    NSString *currentCursor;
    NSArray *users;
    NSString *screenName;
    BOOL paging;
    UIView *loadingView;
    NSMutableArray *filteredUsers;
    UISearchDisplayController *searchDisplayController;
}

@property(retain, nonatomic) UISearchDisplayController *searchDisplayController; // @synthesize searchDisplayController;
@property(retain) NSMutableArray *filteredUsers; // @synthesize filteredUsers;
@property(retain) NSArray *users; // @synthesize users;
@property(retain) UIView *loadingView; // @synthesize loadingView;
@property(retain) NSString *currentCursor; // @synthesize currentCursor;
@property(retain) NSString *screenName; // @synthesize screenName;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)filterContentForSearchText:(id)arg1;
- (void)iconUpdate:(id)arg1;
- (void)twitterUserClientFailed:(id)arg1;
- (void)twitterUserClientSucceeded:(id)arg1;
- (void)getUserInfo;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)dealloc;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)setupTableView;
- (id)initWithStyle:(int)arg1;

@end

