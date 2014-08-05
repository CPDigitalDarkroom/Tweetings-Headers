//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSMutableArray, UILabel, UITableView, UITextField, UIView;

@interface KKPasscodeViewController : UIViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource>
{
    id <KKPasscodeViewControllerDelegate> _delegate;
    UILabel *_passcodeConfirmationWarningLabel;
    UIView *_failedAttemptsView;
    UILabel *_failedAttemptsLabel;
    int _failedAttemptsCount;
    unsigned int _currentPanel;
    NSMutableArray *_tableViews;
    NSMutableArray *_textFields;
    NSMutableArray *_boxes;
    UITableView *_enterPasscodeTableView;
    UITextField *_enterPasscodeTextField;
    UITableView *_setPasscodeTableView;
    UITextField *_setPasscodeTextField;
    UITableView *_confirmPasscodeTableView;
    UITextField *_confirmPasscodeTextField;
    unsigned int _mode;
    BOOL _passcodeLockOn;
    BOOL _eraseData;
    BOOL _shouldReleaseFirstResponser;
}

@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
@property(nonatomic) id <KKPasscodeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)boxes;
- (id)headerViewForTextField:(id)arg1;
- (void)doneButtonPressed;
- (void)vaildatePasscode:(id)arg1;
- (void)nextDigitPressed;
- (void)moveToPreviousTableView;
- (void)moveToNextTableView;
- (void)incrementFailedAttemptsLabel;
- (void)cancelButtonPressed:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;

@end

