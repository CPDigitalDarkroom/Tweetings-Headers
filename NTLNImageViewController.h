//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIActionSheetDelegate.h"
#import "UIWebViewDelegate.h"

@class NSString, NTLNMessage, UIActivityIndicatorView, UITextView, UIWebView;

@interface NTLNImageViewController : UIViewController <UIWebViewDelegate, UIActionSheetDelegate>
{
    NSString *url;
    UIWebView *webView;
    NSString *fixedUrl;
    NSString *message;
    NSString *lowUrl;
    UITextView *textView;
    UIActivityIndicatorView *activityView;
    NTLNMessage *tweet;
}

@property(retain) NTLNMessage *tweet; // @synthesize tweet;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView;
@property(retain) NSString *lowUrl; // @synthesize lowUrl;
@property(retain) NSString *message; // @synthesize message;
@property(retain) NSString *fixedUrl; // @synthesize fixedUrl;
@property(retain) NSString *url; // @synthesize url;
@property(retain) UITextView *textView; // @synthesize textView;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (float)getScreenHeight;
- (float)getScreenWidth;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)doneButtonPushed:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)hideButtonPushed:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)toggleUI;
- (void)viewDidLoad;

@end

