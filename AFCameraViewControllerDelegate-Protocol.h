//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFCameraViewController, NSDictionary, UIImage;

@protocol AFCameraViewControllerDelegate <NSObject>

@optional
- (void)afCameraViewControllerDidCancel:(AFCameraViewController *)arg1;
- (void)afCameraViewControllerRequestedGallery:(AFCameraViewController *)arg1;
- (void)afCameraViewController:(AFCameraViewController *)arg1 didFinishWithImage:(UIImage *)arg2 andMetadata:(NSDictionary *)arg3;
@end

