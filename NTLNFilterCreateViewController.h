//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIActionSheetDelegate.h"
#import "UITextFieldDelegate.h"

@class NTLNFilterViewController, UIButton, UISwitch, UITextField;

@interface NTLNFilterCreateViewController : UIViewController <UITextFieldDelegate, UIActionSheetDelegate>
{
    UITextField *wordEntry;
    int expiryType;
    int type;
    UIButton *expirySelect;
    UIButton *searchPosition;
    UISwitch *caseSensitive;
    UISwitch *wholeWord;
    int searchPositionInt;
    NTLNFilterViewController *filterListController;
}

@property(retain, nonatomic) UIButton *searchPosition; // @synthesize searchPosition;
@property(retain, nonatomic) UISwitch *wholeWord; // @synthesize wholeWord;
@property(retain, nonatomic) UISwitch *caseSensitive; // @synthesize caseSensitive;
@property(nonatomic) NTLNFilterViewController *filterListController; // @synthesize filterListController;
@property(retain, nonatomic) UIButton *expirySelect; // @synthesize expirySelect;
@property(nonatomic) int searchPositionInt; // @synthesize searchPositionInt;
@property(nonatomic) int expiryType; // @synthesize expiryType;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) UITextField *wordEntry; // @synthesize wordEntry;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)doneButton:(id)arg1;
- (void)viewDidLoad;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)selectExpiry:(id)arg1;
- (void)selectPosition:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
