//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString, NTLNTweetPostViewController, NoteView;

@interface NTLNNoteViewController : UIViewController
{
    NTLNTweetPostViewController *postViewController;
    NSString *note;
    NoteView *noteView;
}

@property(retain, nonatomic) NoteView *noteView; // @synthesize noteView;
@property(retain, nonatomic) NSString *note; // @synthesize note;
@property(nonatomic) NTLNTweetPostViewController *postViewController; // @synthesize postViewController;
- (void)dealloc;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)cancelButtonPushed:(id)arg1;
- (void)doneButtonPushed:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

