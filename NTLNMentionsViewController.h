//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NTLNTimelineViewController.h"

#import "NTLNExternalServicesClientDelegate.h"

@class NTLNFriendsViewController;

@interface NTLNMentionsViewController : NTLNTimelineViewController <NTLNExternalServicesClientDelegate>
{
    NTLNFriendsViewController *friendsViewController;
}

@property NTLNFriendsViewController *friendsViewController; // @synthesize friendsViewController;
- (void)updateSync;
- (void)updateSyncAndDisplay;
- (void)removeStatusesForUser:(id)arg1;
- (void)removeStatus:(id)arg1;
- (void)hideReloadButton;
- (void)timeline:(id)arg1 clientSucceeded:(id)arg2 insertedStatuses:(id)arg3;
- (void)timeline:(id)arg1 requestForPage:(int)arg2 since_id:(id)arg3 max_id:(id)arg4;
- (void)timeline:(id)arg1 requestForPage:(int)arg2 since_id:(id)arg3;
- (void)externalServicesClientFailed:(id)arg1;
- (void)externalServicesClientSucceeded:(id)arg1;
- (void)allRead;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)updatePush;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setupNavigationBar;
- (void)photoButtonPushed:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)clearButtonItem;
- (void)resetTimeline;
- (void)viewDidUnload;
- (BOOL)isTimelineActive;
- (void)didReceiveMemoryWarning;
- (id)init;

@end

