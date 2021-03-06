//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ATMHudDelegate.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "MKMapViewDelegate.h"
#import "NTLNAccelerometerSensorDelegate.h"
#import "NTLNExternalServicesClientDelegate.h"
#import "NTLNTwitterClientDelegate.h"
#import "NTLNTwitterUserClientDelegate.h"
#import "TwitLongerClientDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIWebViewDelegate.h"

@class ATMHud, MKMapView, NSMutableArray, NSString, NTLNMessage, NTLNRelatedTweetsViewController, NTLNTimeline, NTLNTimelineViewController, NTLNWebView, UIActivityIndicatorView, UIButton, UIImageView, UIPageControl, UIScrollView, UISegmentedControl, UITableView, UIView, UIWebView;

@interface NTLNTweetShowViewController : UIViewController <NTLNAccelerometerSensorDelegate, ATMHudDelegate, MKMapViewDelegate, NTLNTwitterClientDelegate, NTLNTwitterUserClientDelegate, UIWebViewDelegate, TwitLongerClientDelegate, UIActionSheetDelegate, NTLNExternalServicesClientDelegate, MFMailComposeViewControllerDelegate, UITableViewDelegate, UITableViewDataSource>
{
    NTLNMessage *message;
    NSString *passedName;
    CDStruct_2c43369c foundLocation;
    NSMutableArray *links;
    NSMutableArray *linksOriginal;
    NSMutableArray *linksDisplay;
    UIButton *favButton;
    UIActivityIndicatorView *favAI;
    UIWebView *webView;
    UIImageView *backgroundPattern;
    UIImageView *shadowView;
    BOOL isReTweet;
    NSString *tweetId;
    NSMutableArray *photos;
    NSString *rtTweetId;
    NTLNTimelineViewController *parentViewControllers;
    NSString *selectedLink;
    UIView *headerView;
    UIScrollView *scrollView;
    UIImageView *backgroundView;
    int currentHeightPosition;
    int currentWidthPosition;
    BOOL cameFromSearch;
    BOOL isLocation;
    NSString *rtScreenName;
    MKMapView *mapView;
    BOOL nextAvailable;
    BOOL previousAvailable;
    int timelineIndex;
    UIView *buttons;
    UISegmentedControl *segmentedControl;
    ATMHud *overlay;
    UIButton *followMain;
    NTLNTimeline *timeline;
    UITableView *tv;
    UIPageControl *pageControl;
    NTLNWebView *awebView;
    struct CGRect webFrame;
    BOOL preventStopLoad;
    NTLNRelatedTweetsViewController *relatedTweets;
}

@property(retain, nonatomic) NSMutableArray *photos; // @synthesize photos;
@property(retain, nonatomic) UIButton *followMain; // @synthesize followMain;
@property(retain, nonatomic) NTLNRelatedTweetsViewController *relatedTweets; // @synthesize relatedTweets;
@property(retain, nonatomic) ATMHud *overlay; // @synthesize overlay;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl;
@property(retain, nonatomic) UIView *buttons; // @synthesize buttons;
@property(retain, nonatomic) UITableView *tv; // @synthesize tv;
@property(retain, nonatomic) NSString *rtTweetId; // @synthesize rtTweetId;
@property int timelineIndex; // @synthesize timelineIndex;
@property BOOL previousAvailable; // @synthesize previousAvailable;
@property BOOL nextAvailable; // @synthesize nextAvailable;
@property(retain) NSString *tweetId; // @synthesize tweetId;
@property BOOL isLocation; // @synthesize isLocation;
@property(nonatomic) CDStruct_2c43369c foundLocation; // @synthesize foundLocation;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView;
@property(retain, nonatomic) NSString *rtScreenName; // @synthesize rtScreenName;
@property BOOL cameFromSearch; // @synthesize cameFromSearch;
@property(retain, nonatomic) UIImageView *backgroundPattern; // @synthesize backgroundPattern;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl;
@property int currentWidthPosition; // @synthesize currentWidthPosition;
@property int currentHeightPosition; // @synthesize currentHeightPosition;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView;
@property(nonatomic) NTLNTimelineViewController *parentViewControllers; // @synthesize parentViewControllers;
@property BOOL isReTweet; // @synthesize isReTweet;
@property(retain) NSString *passedName; // @synthesize passedName;
@property(retain) NTLNMessage *message; // @synthesize message;
- (void)goToUser:(id)arg1;
- (void)normalScreenTimeline;
- (void)readItLaterSignupFinished:(id)arg1 error:(id)arg2;
- (void)readItLaterLoginFinished:(id)arg1 error:(id)arg2;
- (void)readItLaterSaveFinished:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (void)launchMailAppOnDevice;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)displayComposerSheet;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)segmentAction:(id)arg1;
- (void)setupPostButton;
- (void)hideOverlay:(id)arg1;
- (void)externalServicesClientFailed:(id)arg1;
- (void)externalServicesClientSucceeded:(id)arg1;
- (void)muteUser:(id)arg1 length:(id)arg2;
- (void)saveiCloud;
- (void)twitLongerClientDidFail:(id)arg1 error:(id)arg2 detail:(id)arg3;
- (void)twitLongerClientDidPost:(id)arg1 returnText:(id)arg2;
- (void)twitterClientEnd:(id)arg1;
- (void)twitterClientBegin:(id)arg1;
- (void)twitterClientFailed:(id)arg1 withError:(id)arg2;
- (void)twitterClientFailed:(id)arg1;
- (void)twitterSearchClientSucceeded:(id)arg1 messages:(id)arg2;
- (void)twitterClientSucceeded:(id)arg1 messages:(id)arg2;
- (void)openContextualMenuAt:(struct CGPoint)arg1;
- (void)contextualMenuAction:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)switchToConversationView;
- (void)switchToFourSquareViewWithURL:(id)arg1;
- (void)switchToBrowserViewWithMobilizerURL:(id)arg1 type:(int)arg2;
- (void)switchToBrowserViewWithURL:(id)arg1;
- (void)switchToPictureViewWithURL:(id)arg1;
- (id)convertImage:(id)arg1;
- (void)switchToUserTimelineViewWithScreenNames:(id)arg1;
- (void)switchToSearchViewWithSearch:(id)arg1;
- (void)switchToUserTimelineViewWithScreenName:(id)arg1;
- (void)switchtoListWithListName:(id)arg1 screenName:(id)arg2;
- (void)switchtoLocationWithCoords:(id)arg1 screenName:(id)arg2;
- (void)switchToUserViewWithScreenNameNoMessage:(id)arg1;
- (void)switchToUserViewWithScreenName:(id)arg1;
- (void)parseTokenAdv:(BOOL)arg1;
- (void)parseToken:(BOOL)arg1;
- (void)makeLinks;
- (float)getTextboxHeight:(id)arg1;
- (BOOL)isImage:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)removeSwipMenus;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)deleteButtonAction:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)retweetButtonAction:(id)arg1;
- (id)myCustomAuth;
- (void)retweet:(id)arg1;
- (void)favButtonAction:(id)arg1;
- (void)favButtonActionLong:(id)arg1;
- (void)translateButtonAction:(id)arg1;
- (void)mergedButtonAction:(id)arg1;
- (void)updatesButtonAction:(id)arg1;
- (void)muteApp;
- (void)findRetweets;
- (void)findReplies;
- (void)deleteTweet;
- (void)deleteDM;
- (void)emailTweet;
- (void)replyButtonAction:(id)arg1;
- (void)replyAll;
- (void)reply;
- (id)favButtonImage;
- (void)redrawTweet;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)goToLocation:(id)arg1;
- (void)drawMap:(id)arg1;
- (void)goToImage:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (void)drawImage:(id)arg1 isEntity:(BOOL)arg2;
- (void)handlePan:(id)arg1;
- (void)moveWebView:(id)arg1 withEvent:(id)arg2;
- (void)bringForground:(id)arg1;
- (void)revertFrameSet;
- (void)loadFrameSet;
- (void)revertFrame;
- (void)accelerometerSensorDetected;
- (void)drawWebPage:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)timeline:(id)arg1 unreadCountChanged:(int)arg2;
- (void)timeline:(id)arg1 clientFailed:(id)arg2 withError:(id)arg3;
- (void)timeline:(id)arg1 clientFailed:(id)arg2;
- (void)timeline:(id)arg1 clientEnd:(id)arg2;
- (void)timeline:(id)arg1 clientBegin:(id)arg2;
- (void)timeline:(id)arg1 requestForPage:(int)arg2 since_id:(id)arg3 max_id:(id)arg4;
- (void)timeline:(id)arg1 requestForPage:(int)arg2 since_id:(id)arg3;
- (void)timeline:(id)arg1 clientSucceeded:(id)arg2 insertedStatuses:(id)arg3;
- (void)loadSearch:(id)arg1 since:(id)arg2;
- (void)drawConversation;
- (CDStruct_2c43369c)addressLocation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)addReplies;
- (void)updateReplies;
- (void)drawTweet;
- (id)generateFooter:(BOOL)arg1;
- (void)iconButtonAction:(id)arg1;
- (void)goToUser;
- (void)handleSwipeRight:(id)arg1;
- (void)handleSwipeLeft:(id)arg1;
- (void)handleSwipeUp:(id)arg1;
- (void)visitWebPage:(id)arg1;
- (void)performPinch:(id)arg1;
- (void)twitterUserClientFailed:(id)arg1;
- (void)twitterUserClientSucceeded:(id)arg1;
- (void)twitterUserClientSucceeded:(id)arg1 withDictionary:(id)arg2;
- (void)friendshipButtonAction:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)handleTweetLongPressNotification:(id)arg1;
- (void)handleTweetNotification:(id)arg1;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned int)arg2;
- (unsigned int)numberOfPhotosInPhotoBrowser:(id)arg1;
- (void)goToPage:(id)arg1 link:(id)arg2;
- (void)goToPage:(id)arg1;
- (void)tlUpdate:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)addNavigationButtons;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

