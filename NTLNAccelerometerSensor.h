//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAccelerometerDelegate.h"

@class NSObject<NTLNAccelerometerSensorDelegate>;

@interface NTLNAccelerometerSensor : NSObject <UIAccelerometerDelegate>
{
    NSObject<NTLNAccelerometerSensorDelegate> *delegate;
    double accAvg[3];
    double lastFired;
}

+ (id)sharedInstance;
@property(retain) NSObject<NTLNAccelerometerSensorDelegate> *delegate; // @synthesize delegate;
- (void)updateByConfiguration;
- (void)accelerometer:(id)arg1 didAccelerate:(id)arg2;
- (void)dealloc;
- (id)init;

@end

