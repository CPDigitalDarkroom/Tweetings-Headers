//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKProductsRequestDelegate.h"

@class MKStoreObserver, NSMutableArray;

@interface MKStoreManager : NSObject <SKProductsRequestDelegate>
{
    NSMutableArray *purchasableObjects;
    MKStoreObserver *storeObserver;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedManager;
+ (BOOL)featurePushPurchased;
+ (BOOL)featureComposePurchased;
+ (BOOL)featureThemePurchased;
+ (BOOL)featureAccountsPurchased;
+ (BOOL)featureListsPurchased;
+ (BOOL)featurePurchased;
+ (void)setDelegate:(id)arg1;
+ (id)delegate;
@property(retain, nonatomic) MKStoreObserver *storeObserver; // @synthesize storeObserver;
@property(retain, nonatomic) NSMutableArray *purchasableObjects; // @synthesize purchasableObjects;
- (void)provideContent:(id)arg1 shouldSerialize:(BOOL)arg2;
- (void)failedTransaction:(id)arg1;
- (void)buyFeatureLists;
- (void)buyFeatureAccounts;
- (void)buyFeaturePush;
- (void)buyFeatureCompose;
- (void)buyFeatureTheme;
- (void)buyFeatureFull;
- (BOOL)canCurrentDeviceUseFeature:(id)arg1;
- (void)buyFeature:(id)arg1;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)requestProductData;
- (id)autorelease;
- (void)release;
- (unsigned int)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

