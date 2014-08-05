//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AFPhotoEditorControllerDelegate.h"
#import "ATMHudDelegate.h"
#import "BufferClientDelegate.h"
#import "FBRequestDelegate.h"
#import "FBSessionDelegate.h"
#import "MKReverseGeocoderDelegate.h"
#import "MPMediaPickerControllerDelegate.h"
#import "NTLNImageClientDelegate.h"
#import "NTLNLocationManagerDelegate.h"
#import "NTLNShortenerClientDelegate.h"
#import "NTLNTwitterClientDelegate.h"
#import "NTLNTwitterUserClientDelegate.h"
#import "NTLNVideoClientDelegate.h"
#import "TwitLongerClientDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITextViewDelegate.h"

@class ATMHud, Facebook, NSMutableArray, NSString, NTLNLocationManager, NTLNTweetPostView, NTLNUser, TWConnection, UIBarButtonItem, UIButton, UIImageView, UILabel, UIPageControl, UIProgressView, UIScrollView, UIToolbar, UIView;

@interface NTLNTweetPostViewController : UIViewController <BufferClientDelegate, ATMHudDelegate, NTLNTwitterClientDelegate, NTLNShortenerClientDelegate, NTLNVideoClientDelegate, NTLNImageClientDelegate, UINavigationControllerDelegate, UIActionSheetDelegate, UIImagePickerControllerDelegate, UITextViewDelegate, NTLNTwitterUserClientDelegate, MKReverseGeocoderDelegate, FBSessionDelegate, FBRequestDelegate, TwitLongerClientDelegate, MPMediaPickerControllerDelegate, UIAlertViewDelegate, UIScrollViewDelegate, NTLNLocationManagerDelegate, AFPhotoEditorControllerDelegate>
{
    NTLNTweetPostView *tweetPostView;
    UILabel *textLengthView;
    NTLNUser *selectedUser;
    int maxTextLength;
    int fbPermission;
    int draftsId;
    NTLNLocationManager *locationManager;
    ATMHud *overlay;
    float screenHeight;
    UIBarButtonItem *locationButton;
    UIBarButtonItem *cameraButton;
    UIToolbar *toolbarBottom;
    UIButton *keyboardToggler;
    UIImageView *toolBackground;
    UIView *tools;
    NSString *fullStatus;
    NSString *placeId;
    UIScrollView *userSelectionView;
    Facebook *_facebook;
    BOOL selectedAudio;
    NSString *selectedURL;
    TWConnection *tpconnection;
    BOOL showMap;
    BOOL isDM;
    double downtime;
    UIView *expandView;
    struct CGRect postFrame;
    struct CGRect quoteFrame;
    BOOL locationProfile;
    BOOL locationTweet;
    BOOL locationRough;
    double currentlat;
    double currentlong;
    UIButton *locationBigButton;
    UIButton *hashButton;
    UIButton *atButton;
    UIButton *geoButton;
    UILabel *locationBigText;
    UIButton *cameraBigButton;
    UILabel *cameraBigText;
    UIButton *libraryBigButton;
    UILabel *libraryBigText;
    UIButton *userBigButton;
    UILabel *userBigText;
    UIButton *linkBigButton;
    UILabel *linkBigText;
    UIButton *trashBigButton;
    UILabel *trashBigText;
    UIButton *draftBigButton;
    UILabel *draftBigText;
    UIButton *scheduleBigButton;
    UILabel *scheduleBigText;
    UIButton *scheduleaddBigButton;
    UILabel *scheduleaddBigText;
    UIButton *fbBigButton;
    UILabel *fbBigText;
    UIButton *audioBigButton;
    UILabel *audioBigText;
    UIButton *clearBigButton;
    UILabel *clearBigText;
    UIImageView *keyboardShadow;
    UIBarButtonItem *title;
    NSString *schedule;
    BOOL twitLongerPost;
    BOOL twtMorePost;
    UIBarButtonItem *sendButton;
    UIScrollView *scrollView;
    UIPageControl *pageControl;
    NSMutableArray *pageControllers;
    NSMutableArray *tweetParts;
    NSMutableArray *photoArray;
    NSMutableArray *mediaArray;
    NSMutableArray *videoArray;
    NSMutableArray *userArray;
    UIButton *attachments;
    UILabel *attachmentLabel;
    int attachCounter;
    BOOL pageControlUsed;
    BOOL dmMode;
    BOOL bufferMode;
    int linkLength;
    int linkSLength;
    float keyboardStart;
    float keyboardHeight;
    UIImageView *iconview;
    NSString *note;
    UIProgressView *progressBar;
}

+ (void)presentWithDMPicker:(id)arg1;
+ (void)present:(id)arg1;
+ (void)present:(id)arg1 withBuffer:(BOOL)arg2;
+ (void)addImage:(id)arg1;
+ (BOOL)composeActive;
+ (void)dismiss;
+ (BOOL)active;
@property(readonly) Facebook *facebook; // @synthesize facebook=_facebook;
@property(retain) NSMutableArray *mediaArray; // @synthesize mediaArray;
@property(retain, nonatomic) UIProgressView *progressBar; // @synthesize progressBar;
@property(retain, nonatomic) UIView *tools; // @synthesize tools;
@property(retain, nonatomic) NSString *note; // @synthesize note;
@property(retain, nonatomic) UIScrollView *userSelectionView; // @synthesize userSelectionView;
@property BOOL bufferMode; // @synthesize bufferMode;
@property(nonatomic) float keyboardHeight; // @synthesize keyboardHeight;
@property(nonatomic) float keyboardStart; // @synthesize keyboardStart;
@property(nonatomic) int linkSLength; // @synthesize linkSLength;
@property(nonatomic) int linkLength; // @synthesize linkLength;
@property(retain, nonatomic) NSString *placeId; // @synthesize placeId;
@property(retain, nonatomic) UIButton *geoButton; // @synthesize geoButton;
@property(retain) NSMutableArray *userArray; // @synthesize userArray;
@property(retain, nonatomic) UIButton *atButton; // @synthesize atButton;
@property(retain, nonatomic) UIButton *hashButton; // @synthesize hashButton;
@property(retain) UIImageView *iconview; // @synthesize iconview;
@property(retain, nonatomic) NSString *fullStatus; // @synthesize fullStatus;
@property(retain) NSMutableArray *photoArray; // @synthesize photoArray;
@property(retain) NSMutableArray *videoArray; // @synthesize videoArray;
@property BOOL dmMode; // @synthesize dmMode;
@property(retain, nonatomic) UIButton *attachments; // @synthesize attachments;
@property(retain, nonatomic) UIButton *audioBigButton; // @synthesize audioBigButton;
@property(retain, nonatomic) UIButton *fbBigButton; // @synthesize fbBigButton;
@property(retain, nonatomic) UIButton *scheduleaddBigButton; // @synthesize scheduleaddBigButton;
@property(retain, nonatomic) NSMutableArray *pageControllers; // @synthesize pageControllers;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView;
@property(retain) NTLNLocationManager *locationManager; // @synthesize locationManager;
@property(retain, nonatomic) UIBarButtonItem *sendButton; // @synthesize sendButton;
@property(nonatomic) BOOL twtMorePost; // @synthesize twtMorePost;
@property(nonatomic) BOOL twitLongerPost; // @synthesize twitLongerPost;
@property(nonatomic) double currentlong; // @synthesize currentlong;
@property(nonatomic) double currentlat; // @synthesize currentlat;
@property(retain, nonatomic) UIButton *locationBigButton; // @synthesize locationBigButton;
@property(retain, nonatomic) NSString *schedule; // @synthesize schedule;
@property(retain, nonatomic) UIImageView *toolBackground; // @synthesize toolBackground;
@property(retain, nonatomic) UIButton *keyboardToggler; // @synthesize keyboardToggler;
@property(retain, nonatomic) UIView *expandView; // @synthesize expandView;
@property(retain, nonatomic) NSString *selectedURL; // @synthesize selectedURL;
@property(retain, nonatomic) NSMutableArray *tweetParts; // @synthesize tweetParts;
@property(nonatomic) BOOL isDM; // @synthesize isDM;
@property(retain, nonatomic) ATMHud *overlay; // @synthesize overlay;
@property BOOL selectedAudio; // @synthesize selectedAudio;
- (void)saveAnyContacts;
- (void)saveAnyHashTags;
- (void)reverseGeocoder:(id)arg1 didFindPlacemark:(id)arg2;
- (void)reverseGeocoder:(id)arg1 didFailWithError:(id)arg2;
- (void)twitterUserClientFailed:(id)arg1;
- (void)twitterUserClientSucceeded:(id)arg1;
- (id)createTinyURL:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didLoad:(id)arg2;
- (void)request:(id)arg1 didReceiveResponse:(id)arg2;
- (void)postToFacebook;
- (void)askTwitLonger;
- (void)sendButtonPushed:(id)arg1;
- (void)twitterClientEnd:(id)arg1;
- (void)twitterClientBegin:(id)arg1;
- (void)twitterClientFailed:(id)arg1 withError:(id)arg2;
- (void)twitterClientFailed:(id)arg1;
- (void)twitterSearchClientSucceeded:(id)arg1 messages:(id)arg2;
- (void)twitterClientSucceeded:(id)arg1 messages:(id)arg2;
- (void)bufferClientFailed:(id)arg1;
- (void)bufferClientSucceeded:(id)arg1;
- (void)postTweet;
- (void)postMedia;
- (void)uploadNote;
- (void)postNote;
- (void)clearButtonPushed:(id)arg1;
- (void)noteButtonPushed:(id)arg1;
- (void)noteViewControllerUpdate:(id)arg1;
- (void)clearAllAttachments;
- (void)closeButtonPushed:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)refreshFollowing:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)tweetSent:(id)arg1;
- (void)uploadProgress:(id)arg1;
- (void)checkAc;
- (void)viewDidAppear:(BOOL)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestSucceeded;
- (void)updateLocation;
- (void)locationManagerFailed:(id)arg1;
- (void)updateLocationWithCoords:(double)arg1 latitude:(double)arg2 place:(id)arg3 placeName:(id)arg4;
- (void)locationManagerSucceeded:(id)arg1 longitude:(double)arg2 latitude:(double)arg3;
- (void)getCurrentLocation:(BOOL)arg1;
- (void)locationButtonPushed:(id)arg1;
- (void)removeLocation:(id)arg1;
- (void)contactFindButtonPushed:(id)arg1;
- (void)contactDMButtonPushed:(id)arg1;
- (void)contactButtonPushed:(id)arg1;
- (void)shortenerClientFailed:(id)arg1 withError:(id)arg2;
- (void)shortenerClientSucceeded:(id)arg1 withURL:(id)arg2 originalUrl:(id)arg3;
- (void)linkButtonPushed:(id)arg1;
- (void)linkButtonTouchDown:(id)arg1;
- (void)addSourceActionLink:(id)arg1;
- (void)linkButtonLongPush:(id)arg1;
- (void)musicButtonPushed:(id)arg1;
- (void)mediaPickerDidCancel:(id)arg1;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)showMediaPicker;
- (void)nowPlaying;
- (void)TweetShrinkDidFail:(id)arg1 error:(id)arg2 detail:(id)arg3;
- (void)TweetShrinkDidSucceed:(id)arg1 url:(id)arg2;
- (void)twitLongerClientDidFail:(id)arg1 error:(id)arg2 detail:(id)arg3;
- (void)twitLongerClientDidPost:(id)arg1 returnText:(id)arg2;
- (void)imageClientFailed:(id)arg1 withError:(id)arg2;
- (void)imageClientSucceeded:(id)arg1 withURL:(id)arg2;
- (void)twitterClientSucceeded:(id)arg1 withMedia:(id)arg2;
- (void)videoClientFailed:(id)arg1 withError:(id)arg2;
- (void)audioClientSucceeded:(id)arg1 withURL:(id)arg2;
- (void)videoClientSucceeded:(id)arg1 withURL:(id)arg2;
- (void)videoClientAuthSucceeded:(id)arg1 withToken:(id)arg2;
- (void)uploadAudio;
- (void)uploadVideo;
- (void)uploadPhoto;
- (void)uploadTwitterPhoto;
- (void)updateToTwtMore;
- (void)updateToTwitLonger;
- (void)audioViewControllerDidDisappear:(BOOL)arg1;
- (void)scheduleViewControllerDidDisappear:(id)arg1;
- (void)draftsViewControllerDidDisappear:(id)arg1 draftId:(int)arg2;
- (void)hashtagViewControllerDidDisappear:(id)arg1;
- (void)addHash:(id)arg1;
- (void)addAt:(id)arg1;
- (void)contactViewControllerDidDisappear:(id)arg1 isDM:(BOOL)arg2;
- (void)imagePickerControllerDidDisappear;
- (void)showKeyboard;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)didFinishSavingWithError:(id)arg1 contextInfo:(void *)arg2;
- (void)customiseAsk:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)customizePhoto;
- (void)takeWithCameraPlus;
- (void)lastSavedPhoto;
- (void)photoEditorCanceled:(id)arg1;
- (void)photoEditor:(id)arg1 finishedWithImage:(id)arg2;
- (void)cameraButtonTouchDown:(id)arg1;
- (void)addSourceAction:(id)arg1;
- (void)cameraButtonLongPush:(id)arg1;
- (void)cameraButtonPushed:(id)arg1;
- (void)audioButtonPushed:(id)arg1;
- (void)fbButtonPushed:(id)arg1;
- (void)draftButtonPushed:(id)arg1;
- (void)actionButtonPushed:(id)arg1;
- (void)scheduleaddButtonPushed:(id)arg1;
- (void)scheduleButtonPushed:(id)arg1;
- (void)setBuffer:(BOOL)arg1;
- (void)addScheduleButton;
- (void)showImagePicker:(BOOL)arg1;
- (BOOL)textViewShouldBeginEditing:(id)arg1;
- (void)dealloc;
- (void)handleTimer:(id)arg1;
- (void)changePage:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadScrollViewWithPage:(int)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)viewDidLoad;
- (void)updateTextLengthView;
- (void)setMaxTextLength;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)processOrientation:(int)arg1;
- (void)toggleKeyboard:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)takePhotoButtonPushed:(id)arg1;
- (void)viewAttachments:(id)arg1;
- (void)removeAudio;
- (void)removeVideoAtIndex:(int)arg1;
- (void)removePhotoAtIndex:(int)arg1;
- (void)removeUserSelectionView:(id)arg1;
- (void)selectUser:(id)arg1;
- (void)showUserSelectionMenu:(id)arg1;
- (void)geoViewPushed:(id)arg1;
- (void)getUserInfo:(id)arg1;
- (void)setupViews;
- (void)attachRemoteImage:(id)arg1;
- (void)resizeViewControllerToFitScreen;
- (void)updateViewColors;
- (id)myCustomAuth;
- (void)addImage:(id)arg1;

@end
