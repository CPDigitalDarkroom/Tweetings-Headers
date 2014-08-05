//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class BWHockeyViewController, NSArray, NSDate, NSMutableData, NSString, NSURLConnection, UINavigationController, UIView;

@interface BWHockeyManager : NSObject <UIAlertViewDelegate>
{
    id <BWHockeyManagerDelegate> delegate_;
    NSArray *apps_;
    NSString *updateURL_;
    NSString *appIdentifier_;
    NSString *currentAppVersion_;
    UINavigationController *navController_;
    BWHockeyViewController *currentHockeyViewController_;
    UIView *authorizeView_;
    NSMutableData *receivedData_;
    BOOL loggingEnabled_;
    BOOL checkInProgress_;
    BOOL dataFound;
    BOOL updateAvailable_;
    BOOL showFeedback_;
    BOOL updateURLOffline_;
    BOOL updateAlertShowing_;
    BOOL lastCheckFailed_;
    BOOL isAppStoreEnvironment_;
    NSURLConnection *urlConnection_;
    NSDate *lastCheck_;
    NSDate *usageStartTimestamp_;
    BOOL sendUserData_;
    BOOL sendUsageTime_;
    BOOL allowUserToDisableSendData_;
    BOOL userAllowsSendUserData_;
    BOOL userAllowsSendUsageTime_;
    BOOL showUpdateReminder_;
    BOOL checkForUpdateOnLaunch_;
    int compareVersionType_;
    int updateSetting_;
    BOOL showUserSettings_;
    BOOL showDirectInstallOption_;
    BOOL requireAuthorization_;
    NSString *authenticationSecret_;
    BOOL useAlternativeInstallURL_;
    NSString *alternativeInstallURL_;
}

+ (id)sharedHockeyManager;
@property(nonatomic, getter=shouldUseAlternativeInstallURL) BOOL useAlternativeInstallURL; // @synthesize useAlternativeInstallURL=useAlternativeInstallURL_;
@property(copy, nonatomic) NSString *alternativeInstallURL; // @synthesize alternativeInstallURL=alternativeInstallURL_;
@property(readonly, nonatomic) BOOL isAppStoreEnvironment; // @synthesize isAppStoreEnvironment=isAppStoreEnvironment_;
@property(retain, nonatomic) UIView *authorizeView; // @synthesize authorizeView=authorizeView_;
@property(retain, nonatomic) NSString *authenticationSecret; // @synthesize authenticationSecret=authenticationSecret_;
@property(nonatomic, getter=isRequireAuthorization) BOOL requireAuthorization; // @synthesize requireAuthorization=requireAuthorization_;
@property(nonatomic, getter=ishowingDirectInstallOption) BOOL showDirectInstallOption; // @synthesize showDirectInstallOption=showDirectInstallOption_;
@property(retain, nonatomic) BWHockeyViewController *currentHockeyViewController; // @synthesize currentHockeyViewController=currentHockeyViewController_;
@property(copy, nonatomic) NSDate *usageStartTimestamp; // @synthesize usageStartTimestamp=usageStartTimestamp_;
@property(nonatomic, getter=isUpdateAvailable) BOOL updateAvailable; // @synthesize updateAvailable=updateAvailable_;
@property(copy, nonatomic) NSArray *apps; // @synthesize apps=apps_;
@property(nonatomic) int updateSetting; // @synthesize updateSetting=updateSetting_;
@property(nonatomic, getter=shouldShowUserSettings) BOOL showUserSettings; // @synthesize showUserSettings=showUserSettings_;
@property(copy, nonatomic) NSDate *lastCheck; // @synthesize lastCheck=lastCheck_;
@property(nonatomic) int compareVersionType; // @synthesize compareVersionType=compareVersionType_;
@property(nonatomic, getter=isCheckForUpdateOnLaunch) BOOL checkForUpdateOnLaunch; // @synthesize checkForUpdateOnLaunch=checkForUpdateOnLaunch_;
@property(nonatomic) BOOL alwaysShowUpdateReminder; // @synthesize alwaysShowUpdateReminder=showUpdateReminder_;
@property(nonatomic, getter=doesUserAllowsSendUsageTime) BOOL userAllowsSendUsageTime; // @synthesize userAllowsSendUsageTime=userAllowsSendUsageTime_;
@property(nonatomic, getter=doesUserAllowsSendUserData) BOOL userAllowsSendUserData; // @synthesize userAllowsSendUserData=userAllowsSendUserData_;
@property(nonatomic, getter=isAllowUserToDisableSendData) BOOL allowUserToDisableSendData; // @synthesize allowUserToDisableSendData=allowUserToDisableSendData_;
@property(nonatomic, getter=shouldSendUsageTime) BOOL sendUsageTime; // @synthesize sendUsageTime=sendUsageTime_;
@property(nonatomic, getter=shouldSendUserData) BOOL sendUserData; // @synthesize sendUserData=sendUserData_;
@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=receivedData_;
@property(nonatomic, getter=isCheckInProgress) BOOL checkInProgress; // @synthesize checkInProgress=checkInProgress_;
@property(nonatomic, getter=isLoggingEnabled) BOOL loggingEnabled; // @synthesize loggingEnabled=loggingEnabled_;
@property(retain, nonatomic) NSURLConnection *urlConnection; // @synthesize urlConnection=urlConnection_;
@property(retain, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=appIdentifier_;
@property(retain, nonatomic) NSString *updateURL; // @synthesize updateURL=updateURL_;
@property(nonatomic) id <BWHockeyManagerDelegate> delegate; // @synthesize delegate=delegate_;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)app;
- (id)currentAppVersion;
- (BOOL)hasNewerMandatoryVersion;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)startManager;
- (BOOL)appVersionIsAuthorized;
- (BOOL)initiateAppDownload;
- (void)checkForUpdateShowFeedback:(BOOL)arg1;
- (void)checkForUpdate;
- (void)checkForAuthorization;
- (BOOL)shouldCheckForUpdates;
- (id)parseJSONResultString:(id)arg1;
- (void)showAuthorizationScreen:(id)arg1 image:(id)arg2;
- (void)alertFallback:(id)arg1;
- (void)showCheckForUpdateAlert_;
- (void)showUpdateView;
- (id)hockeyViewController:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)canSendUsageTime;
- (BOOL)canSendUserData;
- (id)findVisibleWindow;
- (void)saveAppCache_;
- (void)loadAppCache_;
- (void)checkUpdateAvailable_;
- (int)authorizationState;
- (id)authenticationToken;
- (id)deviceIdentifier;
- (id)installationDateString;
- (id)currentUsageString;
- (void)stopUsage;
- (void)startUsage;
- (void)connectionClosed_;
- (void)connectionOpened_;
- (id)getDevicePlatform_;
- (id)encodedAppIdentifier_;
- (void)reportError_:(id)arg1;

@end
