//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFContentPackSelectionViewController.h"

#import "AFContentPackDetailIAPViewControllerDelegate.h"
#import "AFContentPackListIAPViewControllerDelegate.h"
#import "AFContentPackShelfViewDelegate.h"
#import "NSFetchedResultsControllerDelegate.h"
#import "UIAlertViewDelegate.h"

@class AFContentPack, AFContentPackDetailIAPViewController, AFContentPackListIAPViewController, AFContentPackShelfView, AFView, NSArray, NSFetchedResultsController, UINavigationController, UITapGestureRecognizer;

@interface AFContentPackIAPSelectionViewController : AFContentPackSelectionViewController <NSFetchedResultsControllerDelegate, UIAlertViewDelegate, AFContentPackShelfViewDelegate, AFContentPackDetailIAPViewControllerDelegate, AFContentPackListIAPViewControllerDelegate>
{
    BOOL _downloading;
    BOOL _purchasing;
    BOOL _viewInitialized;
    BOOL _shouldShiftForContentSize;
    BOOL _shouldShowRightGetMore;
    BOOL _willHaveContentForSale;
    NSArray *_currentLockedContentPacks;
    NSArray *_currentUnlockedContentPacks;
    AFContentPackShelfView *_iapShelfView;
    NSFetchedResultsController *_fetchedResultsController;
    AFContentPackDetailIAPViewController *_detailIAPViewController;
    AFContentPackListIAPViewController *_listIAPViewController;
    UINavigationController *_IAPNavController;
    AFView *_listIAPViewDimmerView;
    AFContentPack *_purchasingPack;
    float _currentTrayOffset;
    UITapGestureRecognizer *_tapRecognizer;
    AFContentPack *_packToLaunch;
}

+ (id)firstLaunchText;
+ (id)firstLaunchTitle;
+ (BOOL)firstLaunchRequiresDownload;
+ (id)contentPackDescriptor;
+ (Class)contentPackClass;
@property(retain, nonatomic) AFContentPack *packToLaunch; // @synthesize packToLaunch=_packToLaunch;
@property(nonatomic) BOOL willHaveContentForSale; // @synthesize willHaveContentForSale=_willHaveContentForSale;
@property(nonatomic) BOOL shouldShowRightGetMore; // @synthesize shouldShowRightGetMore=_shouldShowRightGetMore;
@property(nonatomic) BOOL shouldShiftForContentSize; // @synthesize shouldShiftForContentSize=_shouldShiftForContentSize;
@property(nonatomic, getter=isViewInitialized) BOOL viewInitialized; // @synthesize viewInitialized=_viewInitialized;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(nonatomic) float currentTrayOffset; // @synthesize currentTrayOffset=_currentTrayOffset;
@property(nonatomic, getter=isPurchasing) BOOL purchasing; // @synthesize purchasing=_purchasing;
@property(nonatomic, getter=isDownloading) BOOL downloading; // @synthesize downloading=_downloading;
@property(retain, nonatomic) AFContentPack *purchasingPack; // @synthesize purchasingPack=_purchasingPack;
@property(retain, nonatomic) AFView *listIAPViewDimmerView; // @synthesize listIAPViewDimmerView=_listIAPViewDimmerView;
@property(retain, nonatomic) UINavigationController *IAPNavController; // @synthesize IAPNavController=_IAPNavController;
@property(retain, nonatomic) AFContentPackListIAPViewController *listIAPViewController; // @synthesize listIAPViewController=_listIAPViewController;
@property(retain, nonatomic) AFContentPackDetailIAPViewController *detailIAPViewController; // @synthesize detailIAPViewController=_detailIAPViewController;
@property(retain, nonatomic) NSFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
@property(retain, nonatomic) AFContentPackShelfView *iapShelfView; // @synthesize iapShelfView=_iapShelfView;
@property(retain, nonatomic) NSArray *currentUnlockedContentPacks; // @synthesize currentUnlockedContentPacks=_currentUnlockedContentPacks;
@property(retain, nonatomic) NSArray *currentLockedContentPacks; // @synthesize currentLockedContentPacks=_currentLockedContentPacks;
- (void).cxx_destruct;
- (void)downloadDidFail:(id)arg1;
- (void)resourcesUpdated:(id)arg1;
- (id)packWithIdentifier:(id)arg1;
- (void)updateDownloadProgressForContentPack:(id)arg1;
- (void)didFinishDownloadingContentPack:(id)arg1;
- (void)beginDownloadingContentPack:(id)arg1;
- (void)presentFirstDownloadMessageIfNecessary;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)didFail:(id)arg1;
- (void)didRestore:(id)arg1;
- (void)didPurchase:(id)arg1;
- (void)willPurchase:(id)arg1;
- (void)purchasePack:(id)arg1;
- (void)listIAPViewController:(id)arg1 beganPurchasingPack:(id)arg2;
- (void)listIAPViewControllerFinished:(id)arg1;
- (id)loadListIAPViewControllerWithPacks:(id)arg1;
- (void)selectionViewDidPressGetMore:(id)arg1 side:(int)arg2;
- (void)detailIAPViewController:(id)arg1 beganPurchasing:(id)arg2;
- (void)detailIAPControllerFinished:(id)arg1;
- (id)loadDetailIAPViewControllerWithContentPack:(id)arg1;
- (void)presentDetailIAPViewControllerWithContentPack:(id)arg1 withDimmer:(BOOL)arg2;
- (void)presentDetailIAPViewControllerWithContentPack:(id)arg1;
- (void)presentDetaiIAPViewControllerOnAppearanceWithContentPack:(id)arg1;
- (void)dimmerViewTapped:(id)arg1;
- (void)retractIAPViewController;
- (void)retractIAPViewController_iPad;
- (void)retractIAPViewController_iPhone;
- (void)presentIAPViewController:(id)arg1 withDimmer:(BOOL)arg2;
- (void)presentIAPViewController_iPad:(id)arg1;
- (void)presentIAPViewController_iPhone:(id)arg1;
- (void)contentPacksDidUpdate;
- (void)updateContentPackSelectionViewAnimated:(BOOL)arg1;
- (void)updateIAPViewControllers;
- (void)updateContentPacks;
- (void)productFetchDidFinish:(id)arg1;
- (void)productFetchBegan:(id)arg1;
- (void)newPacksAvailableNotification:(id)arg1;
- (void)fetchPurchaseablePacks;
- (id)contentManager;
@property(readonly, nonatomic) NSArray *lockedContentPacks; // @dynamic lockedContentPacks;
@property(readonly, nonatomic) NSArray *unlockedContentPacks; // @dynamic unlockedContentPacks;
- (void)contentPackShelfDidUpdateContentPacks:(id)arg1;
- (void)contentPackShelfDidSelectGetMore:(id)arg1;
- (void)contentPackShelfDidCancelSelection:(id)arg1;
- (void)contentPackShelf:(id)arg1 didSelectContentPack:(id)arg2;
- (void)updateSelectionViewFooter;
- (void)updateWillHavePurchasableContent;
- (void)updateSelectionViewHeaderAnimated:(BOOL)arg1;
- (void)selectionViewPressed:(id)arg1;
- (void)updateTrayOffset;
- (void)contentOffsetDidChange;
- (void)contentSizeDidChangeWithOldValue:(struct CGSize)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) BOOL inAppPurchaseEnabled; // @dynamic inAppPurchaseEnabled;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithGLInstance:(id)arg1 settings:(id)arg2 quickLaunch:(BOOL)arg3;
- (void)registerForNotifcations;
- (void)dealloc;

@end
