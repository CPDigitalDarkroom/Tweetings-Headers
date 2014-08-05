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

@class NSMutableArray, NSString, NTLNTweetPostViewController, UIBarButtonItem, UISearchBar, UISearchDisplayController, UIView;

@interface NTLNContactsViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, NTLNTwitterUserClientDelegate, UISearchDisplayDelegate, UISearchBarDelegate>
{
    NTLNTweetPostViewController *postViewController;
    NSString *currentCursor;
    int switchIndex;
    NSMutableArray *toobarBottomItems;
    int idCount;
    NSMutableArray *users;
    NSMutableArray *ids;
    NSMutableArray *filteredUsers;
    NSString *screenName;
    int currentPage;
    BOOL paging;
    UIView *loadingView;
    int loadAgain;
    BOOL ffMode;
    UISearchDisplayController *searchDisplayController;
    UISearchBar *searchBar;
    UIBarButtonItem *ffButton;
    UIBarButtonItem *refreshButton;
    UIBarButtonItem *reloadingButton;
    BOOL isModal;
    BOOL isFF;
    BOOL dmMode;
    int displayType;
    NSString *searchKeyword;
}

@property(retain, nonatomic) UIBarButtonItem *reloadingButton; // @synthesize reloadingButton;
@property(retain, nonatomic) UIBarButtonItem *refreshButton; // @synthesize refreshButton;
@property(retain, nonatomic) NSMutableArray *ids; // @synthesize ids;
@property(nonatomic) BOOL dmMode; // @synthesize dmMode;
@property(retain) NSString *searchKeyword; // @synthesize searchKeyword;
@property(nonatomic) BOOL isFF; // @synthesize isFF;
@property(nonatomic) int displayType; // @synthesize displayType;
@property(nonatomic) BOOL isModal; // @synthesize isModal;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar;
@property(retain, nonatomic) UIBarButtonItem *ffButton; // @synthesize ffButton;
@property(retain, nonatomic) UISearchDisplayController *searchDisplayController; // @synthesize searchDisplayController;
@property(retain) UIView *loadingView; // @synthesize loadingView;
@property(retain) NSString *currentCursor; // @synthesize currentCursor;
@property(retain) NSString *screenName; // @synthesize screenName;
@property(retain) NSMutableArray *filteredUsers; // @synthesize filteredUsers;
@property(retain, nonatomic) NSMutableArray *users; // @synthesize users;
@property(nonatomic) NTLNTweetPostViewController *postViewController; // @synthesize postViewController;
- (void)saveArchive;
- (void)loadArchive;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)filterContentForSearchText:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reloadContacts:(id)arg1;
- (void)viewDidLoad;
- (void)twitterUserClientFailed:(id)arg1;
- (void)twitterUserClientSucceeded:(id)arg1;
- (void)twitterUserClientSucceeded:(id)arg1 withIdList:(id)arg2;
- (void)getNextPage;
- (void)getUserInfoWithCursor:(id)arg1;
- (void)getUserInfo;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)ffAction:(id)arg1;
- (void)doneButtonPushed:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)togglePickers:(id)arg1;
- (void)setupToolbarBottom;
- (void)setupToolbarTop;
- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)setupTableView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (id)initWithStyle:(int)arg1;

@end
