//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NTLNTimelineViewController.h"

#import "NTLNExternalServicesClientDelegate.h"
#import "NTLNTwitterUserClientDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WEPopoverControllerDelegate.h"

@class NTLNMentionsViewController, UIButton, WEPopoverController;

@interface NTLNFriendsViewController : NTLNTimelineViewController <NTLNTwitterUserClientDelegate, UIAlertViewDelegate, UIActionSheetDelegate, NTLNExternalServicesClientDelegate, WEPopoverControllerDelegate>
{
    NTLNMentionsViewController *mentionsViewController;
    UIButton *titleButton;
    WEPopoverController *popoverController;
}

@property(retain, nonatomic) WEPopoverController *popoverController; // @synthesize popoverController;
@property(retain, nonatomic) UIButton *titleButton; // @synthesize titleButton;
@property NTLNMentionsViewController *mentionsViewController; // @synthesize mentionsViewController;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)improvedContainerViewProperties;
- (void)updateSync;
- (void)updateSyncAndDisplay;
- (void)removeStatusesForUser:(id)arg1;
- (void)removeStatus:(id)arg1;
- (void)switchToUserViewWithScreenName:(id)arg1;
- (void)switchToUserViewWithScreenNameShowTabBar:(id)arg1;
- (BOOL)doReadTrack;
- (void)updatePush;
- (void)externalServicesClientFailed:(id)arg1;
- (void)externalServicesClientSucceeded:(id)arg1;
- (void)hideReloadButton;
- (void)timeline:(id)arg1 clientSucceeded:(id)arg2 insertedStatuses:(id)arg3;
- (void)timeline:(id)arg1 requestForPage:(int)arg2 since_id:(id)arg3 max_id:(id)arg4;
- (void)timeline:(id)arg1 requestForPage:(int)arg2 since_id:(id)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)twitterUserClientFailed:(id)arg1;
- (void)twitterUserClientSucceeded:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)viewDidLoad;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (void)titleButtonPushed:(id)arg1;
- (void)goToAccounts;
- (void)titleButtonOut:(id)arg1;
- (void)titleButtonDown:(id)arg1;
- (void)setupNavigationBar;
- (void)photoButtonPushed:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)clearButtonItem;
- (void)resetTimeline;
- (void)didReceiveMemoryWarning;
- (BOOL)isTimelineActive;
- (id)hashTagsInTimeline;
- (id)init;

@end

