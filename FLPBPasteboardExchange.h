//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSTimer, NSURL;

@interface FLPBPasteboardExchange : NSObject
{
    NSURL *_applicationURL;
    id <FLPBPasteboardExchangeDelegate> _delegate;
    NSDictionary *_lastRequestDictionary;
    double _lastRequestSentTime;
    BOOL _lastRequestDidUseOpenURL;
    BOOL _didReceiveResponseForLastRequest;
    int _lastPasteboardChangeCount;
    double _lastPasteboardChangeTime;
    unsigned int _backgroundTaskID;
    double _backgroundTaskStartTime;
    NSTimer *_backgroundTimer;
}

@property(readonly, copy, nonatomic) NSURL *applicationURL; // @synthesize applicationURL=_applicationURL;
@property(retain, nonatomic) NSDictionary *lastRequestDictionary; // @synthesize lastRequestDictionary=_lastRequestDictionary;
@property(nonatomic) id <FLPBPasteboardExchangeDelegate> delegate; // @synthesize delegate=_delegate;
- (id)pullSettings;
- (void)pushSettings:(id)arg1;
- (void)pasteboardDidChange:(id)arg1;
- (void)checkPasteboardForChanges;
- (void)checkPasteboardTimer:(id)arg1;
- (void)sendRequest:(id)arg1 version:(id)arg2 toURL:(id)arg3 useOpenURL:(BOOL)arg4 requestReturnURLBeOpened:(BOOL)arg5 finished:(BOOL)arg6;
- (void)sendResponse:(id)arg1 request:(id)arg2 toURL:(id)arg3 useOpenURL:(BOOL)arg4 requestReturnURLBeOpened:(BOOL)arg5 finished:(BOOL)arg6;
- (void)openURL:(id)arg1;
- (void)_openURL:(id)arg1;
- (void)setBackgroundTaskProcessingEnabled:(BOOL)arg1;
- (void)timerTest;
- (id)createBackgroundTimer;
- (void)backgroundTaskWillExpire;
- (BOOL)shouldApplicationOpenURL:(id)arg1;
- (void)dealloc;
- (id)initWithApplicationURL:(id)arg1 delegate:(id)arg2;
- (id)thePasteboard;
- (id)thePasteboard:(BOOL)arg1;

@end
