//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICTableViewController.h"

#import "UIAlertViewDelegate.h"

@interface NTLNSettingViewController : UICTableViewController <UIAlertViewDelegate>
{
    BOOL autoLinkMode;
    BOOL stream;
}

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)infoValueForKey:(id)arg1;
- (id)initWithStyle:(int)arg1;
- (void)dealloc;
- (void)setupPrototypes;
- (void)checkNetwork;

@end

