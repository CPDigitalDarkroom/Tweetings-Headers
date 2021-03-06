//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class AFPhotoEditorSession;

@interface AFPhotoEditorController : UIViewController
{
}

+ (id)versionString;
+ (void)fetchContent;
+ (id)inAppPurchaseManager;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 options:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <AFPhotoEditorControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, nonatomic) AFPhotoEditorSession *session; // @dynamic session;

@end

