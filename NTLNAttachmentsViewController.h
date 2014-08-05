//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class NSMutableArray, NTLNTweetPostViewController;

@interface NTLNAttachmentsViewController : UITableViewController
{
    NSMutableArray *photoArray;
    NSMutableArray *videoArray;
    BOOL selectedAudio;
    NTLNTweetPostViewController *tweetPostViewController;
}

@property BOOL selectedAudio; // @synthesize selectedAudio;
@property(retain) NSMutableArray *videoArray; // @synthesize videoArray;
@property(retain) NSMutableArray *photoArray; // @synthesize photoArray;
@property(nonatomic) NTLNTweetPostViewController *tweetPostViewController; // @synthesize tweetPostViewController;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)setupTableView;
- (id)initWithStyle:(int)arg1;

@end
