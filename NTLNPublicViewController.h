//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NTLNTimelineViewController.h"

#import "UIActionSheetDelegate.h"

@interface NTLNPublicViewController : NTLNTimelineViewController <UIActionSheetDelegate>
{
}

- (void)hideReloadButton;
- (BOOL)doReadTrack;
- (void)timeline:(id)arg1 clientSucceeded:(id)arg2 insertedStatuses:(id)arg3;
- (void)timeline:(id)arg1 requestForPage:(int)arg2 since_id:(id)arg3;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (void)setupNavigationBar;
- (id)init;

@end

