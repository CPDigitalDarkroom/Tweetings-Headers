//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "NTLNTListClientDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UIBarButtonItem, UIToolbar, UIView;

@interface NTLNTListsViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, NTLNTListClientDelegate, UIActionSheetDelegate>
{
    int currentPage;
    NSMutableArray *lists;
    NSString *screenName;
    BOOL paging;
    BOOL mentions;
    BOOL subs;
    UIView *loadingView;
    UIToolbar *toolbar;
    UIBarButtonItem *saveButton;
    BOOL resetTL;
    NSString *slug;
    NSString *searchPhrase;
}

@property(retain) NSString *searchPhrase; // @synthesize searchPhrase;
@property(retain) NSString *slug; // @synthesize slug;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar;
@property(retain) UIView *loadingView; // @synthesize loadingView;
@property(retain) NSString *screenName; // @synthesize screenName;
- (void)iconUpdate:(id)arg1;
- (void)tListClientFailed:(id)arg1;
- (void)tListClientSucceeded:(id)arg1;
- (void)getListInfo;
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
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)resetTimeline;
- (void)viewDidLoad;
- (void)setupTableView;
- (void)setupToolbar;
- (id)initWithStyle:(int)arg1;

@end

