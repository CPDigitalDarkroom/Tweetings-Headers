//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFViewController.h"

#import "AFAboutViewDelegate.h"
#import "AFCameraViewControllerDelegate.h"
#import "AFFeedbackViewDelegate.h"
#import "AFResetOverlayViewDelegate.h"
#import "AFScrollingImageViewDelegate.h"
#import "AFToolSelectionViewDelegate.h"
#import "AFToolViewControllerDelegate.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UINavigationBarDelegate.h"

@class AFAboutView, AFAppBackgroundStateManager, AFAviaryContentManager, AFContentPack, AFNavigationBar, AFOpenGLInstance, AFPhotoEditorSession, AFScrollingImageView, AFToolSelectionView, AFToolViewController, AFView, NSString, UIActivityIndicatorView, UIGestureRecognizer, UIImage, UIImageView, UIView;

@interface AFSDKViewController : AFViewController <AFToolViewControllerDelegate, AFToolSelectionViewDelegate, AFAboutViewDelegate, AFFeedbackViewDelegate, MFMailComposeViewControllerDelegate, AFCameraViewControllerDelegate, AFResetOverlayViewDelegate, UIGestureRecognizerDelegate, UINavigationBarDelegate, AFScrollingImageViewDelegate>
{
    BOOL _bordersEnabled;
    BOOL _shouldResizeImage;
    BOOL _shouldResizeImageWithPlaceholer;
    BOOL _transparentBackground;
    BOOL _shouldConfirmCancel;
    BOOL _wasMonitoringBattery;
    BOOL _imageFinishedResizing;
    BOOL _isShowingReset;
    BOOL _isShowingConfirmation;
    BOOL _attemptMessaging;
    id <AFPhotoEditorControllerDelegate_Private> _delegate;
    UIView *_canvasView;
    AFNavigationBar *_navigationBar;
    AFScrollingImageView *_scrollableImageView;
    UIImageView *_bottomShadowView;
    UIImageView *_topShadowView;
    UIView *_navigationContainerView;
    UIView *_toolSelectionContainerView;
    UIView *_statusBarView;
    AFToolSelectionView *_toolSelectionView;
    UIActivityIndicatorView *_wheelView;
    AFPhotoEditorSession *_session;
    AFOpenGLInstance *_glInstance;
    NSString *_overridenCancelButtonTitle;
    AFToolViewController *_toolViewController;
    UIImage *_image;
    UIImage *_resizedImage;
    UIImageView *_brandingView;
    AFAviaryContentManager *_contentManager;
    AFAppBackgroundStateManager *_backgroundStateManager;
    NSString *_quickLaunchKey;
    AFAboutView *_aboutView;
    AFView *_aboutDimmerView;
    AFContentPack *_quickLaunchContentPack;
    UIView *_resetContainerView;
    UIGestureRecognizer *_resetGestureRecognizer;
}

+ (id)storeKitManager;
+ (void)initialize;
@property(nonatomic, getter=shouldAttemptMessaging) BOOL attemptMessaging; // @synthesize attemptMessaging=_attemptMessaging;
@property(retain, nonatomic) UIGestureRecognizer *resetGestureRecognizer; // @synthesize resetGestureRecognizer=_resetGestureRecognizer;
@property(retain, nonatomic) UIView *resetContainerView; // @synthesize resetContainerView=_resetContainerView;
@property(nonatomic) BOOL isShowingConfirmation; // @synthesize isShowingConfirmation=_isShowingConfirmation;
@property(nonatomic) BOOL isShowingReset; // @synthesize isShowingReset=_isShowingReset;
@property(retain, nonatomic) AFContentPack *quickLaunchContentPack; // @synthesize quickLaunchContentPack=_quickLaunchContentPack;
@property(retain, nonatomic) AFView *aboutDimmerView; // @synthesize aboutDimmerView=_aboutDimmerView;
@property(retain, nonatomic) AFAboutView *aboutView; // @synthesize aboutView=_aboutView;
@property(retain, nonatomic) NSString *quickLaunchKey; // @synthesize quickLaunchKey=_quickLaunchKey;
@property(retain, nonatomic) AFAppBackgroundStateManager *backgroundStateManager; // @synthesize backgroundStateManager=_backgroundStateManager;
@property(nonatomic) BOOL imageFinishedResizing; // @synthesize imageFinishedResizing=_imageFinishedResizing;
@property(nonatomic) BOOL wasMonitoringBattery; // @synthesize wasMonitoringBattery=_wasMonitoringBattery;
@property(retain, nonatomic) AFAviaryContentManager *contentManager; // @synthesize contentManager=_contentManager;
@property(retain, nonatomic) UIImageView *brandingView; // @synthesize brandingView=_brandingView;
@property(retain, nonatomic) UIImage *resizedImage; // @synthesize resizedImage=_resizedImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) AFToolViewController *toolViewController; // @synthesize toolViewController=_toolViewController;
@property(nonatomic) BOOL shouldConfirmCancel; // @synthesize shouldConfirmCancel=_shouldConfirmCancel;
@property(nonatomic) BOOL transparentBackground; // @synthesize transparentBackground=_transparentBackground;
@property(nonatomic) BOOL shouldResizeImageWithPlaceholer; // @synthesize shouldResizeImageWithPlaceholer=_shouldResizeImageWithPlaceholer;
@property(nonatomic) BOOL shouldResizeImage; // @synthesize shouldResizeImage=_shouldResizeImage;
@property(nonatomic) BOOL bordersEnabled; // @synthesize bordersEnabled=_bordersEnabled;
@property(retain, nonatomic) NSString *overridenCancelButtonTitle; // @synthesize overridenCancelButtonTitle=_overridenCancelButtonTitle;
@property(retain, nonatomic) AFOpenGLInstance *glInstance; // @synthesize glInstance=_glInstance;
@property(retain, nonatomic) AFPhotoEditorSession *session; // @synthesize session=_session;
@property(retain, nonatomic) UIActivityIndicatorView *wheelView; // @synthesize wheelView=_wheelView;
@property(retain, nonatomic) AFToolSelectionView *toolSelectionView; // @synthesize toolSelectionView=_toolSelectionView;
@property(retain, nonatomic) UIView *statusBarView; // @synthesize statusBarView=_statusBarView;
@property(retain, nonatomic) UIView *toolSelectionContainerView; // @synthesize toolSelectionContainerView=_toolSelectionContainerView;
@property(retain, nonatomic) UIView *navigationContainerView; // @synthesize navigationContainerView=_navigationContainerView;
@property(retain, nonatomic) UIImageView *topShadowView; // @synthesize topShadowView=_topShadowView;
@property(retain, nonatomic) UIImageView *bottomShadowView; // @synthesize bottomShadowView=_bottomShadowView;
@property(retain, nonatomic) AFScrollingImageView *scrollableImageView; // @synthesize scrollableImageView=_scrollableImageView;
@property(retain, nonatomic) AFNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) UIView *canvasView; // @synthesize canvasView=_canvasView;
@property(nonatomic) __weak id <AFPhotoEditorControllerDelegate_Private> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)messageDismissedWithAction:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleTapGesture;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)disablesAutomaticKeyboardDismissal;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)feedbackViewRequestedSendFeedback:(id)arg1;
- (void)aboutViewDismissed:(id)arg1;
- (void)presentFeedbackView;
- (void)poweredByAviaryPressed:(id)arg1;
- (void)imageViewDidZoom:(id)arg1;
- (void)imageViewStoppedDragging:(id)arg1;
- (void)imageViewBeganDragging:(id)arg1;
- (void)imageViewStoppedZooming:(id)arg1;
- (void)imageViewBeganZooming:(id)arg1;
- (BOOL)imageView:(id)arg1 isPointInside:(struct CGPoint)arg2 event:(id)arg3;
- (void)restoreOriginal;
- (void)resetButtonPressed:(id)arg1;
- (void)removeResetButton;
- (void)presentResetButton;
- (void)showCurrentImage;
- (void)imageViewDidReceiveTouchUp:(id)arg1;
- (void)imageViewDidReceiveTouchDown:(id)arg1;
- (void)toolController:(id)arg1 finishedWithStatus:(unsigned int)arg2;
- (BOOL)toolWithContentTypeRequiresBadge:(Class)arg1;
- (void)selectionViewDidSelectFeedback:(id)arg1;
- (id)toolViewControllerWithKey:(id)arg1 quickLauch:(BOOL)arg2;
- (void)selectionView:(id)arg1 didSelectToolAtIndex:(int)arg2 withBadge:(BOOL)arg3;
- (BOOL)selectionView:(id)arg1 requiresBadgeForTool:(id)arg2;
- (id)selectionView:(id)arg1 highlightedImageForToolAtIndex:(int)arg2;
- (id)selectionView:(id)arg1 imageForToolAtIndex:(int)arg2;
- (id)selectionView:(id)arg1 titleForToolAtIndex:(int)arg2;
- (int)numberOfToolsInSelectionView:(id)arg1;
- (id)toolDictionaryAtIndex:(unsigned int)arg1;
- (id)toolDictionaries;
- (id)orderedToolKeys;
- (void)dismissEditorSuccessfully;
- (void)removeResetContainer;
- (void)resetOverlay:(id)arg1 pressedButtonAtIndex:(unsigned int)arg2;
- (void)doneButtonPressed:(id)arg1;
- (void)cancelSDK;
- (void)cancelPendingProcessing;
- (void)cancelButtonPressed:(id)arg1;
- (BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (void)newContentAvailable:(id)arg1;
- (void)dismissToolViewControllerAnimated:(BOOL)arg1;
- (void)presentToolViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setupImageWithDisplayCompletionBlock:(CDUnknownBlockType)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (struct CGAffineTransform)getContentTransformFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2;
- (unsigned int)interfaceOrientationMaskForOrientation:(int)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (int)preferredStatusBarStyle;
- (void)viewDidLoad;
- (id)createRightButton;
- (id)createLeftButton;
- (void)resizeImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGSize)maximumEditingSize;
- (id)initWithImage:(id)arg1 quickLaunchContentIdentifier:(id)arg2;
- (id)initWithImage:(id)arg1 quickLaunchTool:(id)arg2;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 options:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)unloadResourcesIfNeeded;
- (void)dealloc;

@end
