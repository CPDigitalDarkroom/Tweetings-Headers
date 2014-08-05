//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NTLNTimelineViewController.h"

#import "NTLNTwitterClientDelegate.h"

@class NSString;

@interface NTLNReTweetsOfTweetViewController : NTLNTimelineViewController <NTLNTwitterClientDelegate>
{
    NSString *tweetId;
}

@property(retain) NSString *tweetId; // @synthesize tweetId;
- (void)hideReloadButton;
- (void)setupToolbar;
- (void)getTL;
- (BOOL)doReadTrack;
- (void)timeline:(id)arg1 clientSucceeded:(id)arg2 insertedStatuses:(id)arg3;
- (void)timeline:(id)arg1 requestForPage:(int)arg2 since_id:(id)arg3;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupNavigationBar;
- (void)resetTimeline;
- (id)init;

@end
