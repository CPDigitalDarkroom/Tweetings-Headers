//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "ADBannerViewDelegate.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "NTLNAccelerometerSensorDelegate.h"
#import "NTLNExternalServicesClientDelegate.h"
#import "NTLNTimelineDelegate.h"
#import "NTLNTwitterUserClientDelegate.h"
#import "ReadabilityOAuthHttpClientDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ADBannerView, CALayer, NSDate, NSMutableArray, NSString, NSTimer, NTLNTimeline, UIActivityIndicatorView, UIButton, UILabel, UISearchBar, UISearchDisplayController, UIView, UIWebView, windowOverlay;

@interface NTLNTimelineViewController : UITableViewController <NTLNAccelerometerSensorDelegate, UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate, NTLNTimelineDelegate, ADBannerViewDelegate, UISearchDisplayDelegate, UISearchBarDelegate, UIActionSheetDelegate, NTLNTwitterUserClientDelegate, NTLNExternalServicesClientDelegate, ReadabilityOAuthHttpClientDelegate, MFMailComposeViewControllerDelegate>
{
    NTLNTimeline *timeline;
    NSMutableArray *filteredTimeline;
    UISearchDisplayController *searchDisplayController;
    UISearchBar *timelineSearchBar;
    BOOL resetTheme;
    NSMutableArray *photos;
    windowOverlay *overlay;
    BOOL badge_enable;
    BOOL inlineImageSupported;
    BOOL _reload;
    int theme;
    BOOL resetCells;
    BOOL hideHeader;
    BOOL enable_read;
    BOOL error_visible;
    UIView *nowloadingView;
    NSDate *lastReloadTime;
    UIActivityIndicatorView *footerActivityIndicatorView;
    BOOL evenInv;
    BOOL headerFlipped;
    BOOL playSound;
    BOOL isSearch;
    BOOL wantReload;
    BOOL suspendTrack;
    UIButton *moreButton;
    UIView *tableViewSuperView;
    struct CGRect tableViewOriginalFrame;
    BOOL disableColorize;
    CALayer *arrowImage;
    UIActivityIndicatorView *activityView;
    UILabel *statusLabel;
    UILabel *lastUpdatedLabel;
    UIWebView *youtubewebView;
    int readTrackContinueCounter;
    NSTimer *readTrackTimer;
    NSString *lastTopStatusId;
    NSString *gapSinceId;
    UILabel *errorLabel;
    UIView *errorView;
    ADBannerView *bannerAd;
    UIView *tableHeaderView;
    BOOL hideSearchBar;
    BOOL bannerIsVisible;
    BOOL firstLoad;
    BOOL isFullScreen;
    BOOL preventTweetView;
    BOOL syncUpdated;
    id originalSearchIconView;
    int fontSize;
    int inlinePhotos;
    UIWebView *youtubeWebView;
}

+ (id)platform;
@property(nonatomic) BOOL syncUpdated; // @synthesize syncUpdated;
@property(nonatomic) BOOL preventTweetView; // @synthesize preventTweetView;
@property(retain, nonatomic) id originalSearchIconView; // @synthesize originalSearchIconView;
@property(nonatomic) BOOL resetTheme; // @synthesize resetTheme;
@property(nonatomic) BOOL suspendTrack; // @synthesize suspendTrack;
@property(retain) UIView *tableHeaderView; // @synthesize tableHeaderView;
@property(nonatomic) BOOL disableColorize; // @synthesize disableColorize;
@property(retain) ADBannerView *bannerAd; // @synthesize bannerAd;
@property(retain) UILabel *errorLabel; // @synthesize errorLabel;
@property(retain) UIView *errorView; // @synthesize errorView;
@property(retain) NSString *gapSinceId; // @synthesize gapSinceId;
@property(retain) UISearchDisplayController *searchDisplayController; // @synthesize searchDisplayController;
@property(retain) NSMutableArray *filteredTimeline; // @synthesize filteredTimeline;
@property(retain) NSMutableArray *photos; // @synthesize photos;
@property(nonatomic) BOOL bannerIsVisible; // @synthesize bannerIsVisible;
@property(readonly) NTLNTimeline *timeline; // @synthesize timeline;
@property(nonatomic) BOOL wantReload; // @synthesize wantReload;
@property(nonatomic) BOOL resetCells; // @synthesize resetCells;
- (void)didReceiveMemoryWarning;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)readItLaterSignupFinished:(id)arg1 error:(id)arg2;
- (void)readItLaterLoginFinished:(id)arg1 error:(id)arg2;
- (void)readItLaterSaveFinished:(id)arg1 error:(id)arg2;
- (void)twitterUserClientFailed:(id)arg1;
- (void)twitterUserClientSucceeded:(id)arg1;
- (void)externalServicesClientFailed:(id)arg1;
- (void)readabilityOAuthHttpClientFailed:(id)arg1;
- (void)readabilityOAuthHttpClientSucceeded:(id)arg1;
- (void)hideOverlay:(id)arg1;
- (void)externalServicesClientSucceeded:(id)arg1;
- (void)unmute:(id)arg1;
- (void)reportForSpam:(id)arg1;
- (void)postWithHashtag:(id)arg1;
- (void)openLink:(id)arg1;
- (void)readLater:(id)arg1 link:(id)arg2;
- (void)copyUrl:(id)arg1;
- (void)emailUrl:(id)arg1;
- (void)handleTweetLongPressNotification:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)muteUser:(id)arg1 length:(id)arg2;
- (void)muteApp:(id)arg1 length:(id)arg2;
- (void)muteKeyword:(id)arg1 length:(id)arg2;
- (void)muteKeywordAsk:(id)arg1;
- (void)muteAppAsk:(id)arg1;
- (void)muteUserAsk:(id)arg1;
- (void)saveiCloud;
- (void)handleTweetNotification:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)displayComposerSheet:(id)arg1;
- (void)deselectAllRows;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)fontSizeChanged:(id)arg1;
- (void)setSearchBarColor;
- (void)archiveLoaded:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)goToPage:(id)arg1;
- (id)hashTagsInTimeline;
- (id)findButtonInView:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned int)arg2;
- (unsigned int)numberOfPhotosInPhotoBrowser:(id)arg1;
- (void)goToPage:(id)arg1 link:(id)arg2;
- (id)convertImage:(id)arg1;
- (BOOL)isImage:(id)arg1;
- (void)goToUser:(id)arg1;
- (void)goToProfile:(id)arg1;
- (void)goToRelatedTweets:(id)arg1;
- (void)goToRetweeted:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)removeSwipMenus;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)themeChanged:(id)arg1;
- (void)updateColorCategories:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (void)accelerometerSensorDetected;
- (void)toggleFullScreenTimeline;
- (void)normalScreenTimeline;
- (void)fullScreenTimeline;
- (BOOL)isFullScreen;
- (void)footerActivityIndicator:(BOOL)arg1;
- (void)updateFooterView;
- (void)autopagerize;
- (void)moreTweet:(id)arg1;
- (void)loadNextPage;
- (id)autopagerizeView;
- (id)moreTweetView;
- (void)setMoreButtonNormal:(BOOL)arg1;
- (void)setupFooterActivityIndicatorView;
- (void)hideReloadButton;
- (void)postButton:(id)arg1;
- (void)setupPostButton;
- (BOOL)instantReadTrackSupported;
- (BOOL)readTrackTimerActivated;
- (void)startReadTrackTimer;
- (void)stopReadTrackTimer;
- (void)updateBadge;
- (BOOL)doReadTrack;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateOffsets;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)addTimelineGap:(id)arg1;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)selectTweet:(int)arg1;
- (void)selectNextTweet:(id)arg1;
- (void)selectPreviousTweet:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)cellHeightForIndex:(int)arg1;
- (float)cellHeightForIndexFiltered:(int)arg1;
- (void)removeTweetsMatchingFilter:(id)arg1;
- (void)hideErrorBar:(id)arg1;
- (void)showMessageBar:(id)arg1;
- (void)showErrorBar:(id)arg1;
- (void)addErrorBar;
- (BOOL)findErrorBar;
- (void)timeline:(id)arg1 unreadCountChanged:(int)arg2;
- (void)timeline:(id)arg1 clientFailed:(id)arg2 withError:(id)arg3;
- (void)timeline:(id)arg1 clientFailed:(id)arg2;
- (void)checkSyncStatus;
- (void)moveSyncStatus:(int)arg1;
- (int)removeSyncStatus;
- (id)statusIdAtScrollPosition;
- (void)timeline:(id)arg1 clientSucceeded:(id)arg2 insertedStatuses:(id)arg3;
- (void)timeline:(id)arg1 clientEnd:(id)arg2;
- (void)timeline:(id)arg1 clientBegin:(id)arg2;
- (void)timeline:(id)arg1 requestForPage:(int)arg2 since_id:(id)arg3 max_id:(id)arg4;
- (void)timeline:(id)arg1 requestForPage:(int)arg2 since_id:(id)arg3;
- (void)setupClearButton;
- (id)clearButtonItem;
- (void)clearButton:(id)arg1;
- (void)askMarkAsRead:(id)arg1;
- (void)toggleNinjaMode:(BOOL)arg1;
- (void)handleTimer:(id)arg1;
- (void)reloadTable:(id)arg1;
- (void)tlUpdate:(id)arg1;
- (void)reloadButton:(id)arg1;
- (void)removeNowloadingView;
- (void)insertNowloadingViewIfNeeds;
- (void)setupNavigationBar;
- (void)setupTableView;
- (void)enableReadTrack:(id)arg1;
- (void)hideReloadButton;
- (void)pulldownRefresh;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (id)reloadView;
- (void)addSearchBar;
- (void)setCurrentDate;
- (void)setReloadButtonNormal:(BOOL)arg1;
- (id)nowloadingView;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)filterContentForSearchText:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchScope:(int)arg2;
- (void)loadSearchController;

@end

