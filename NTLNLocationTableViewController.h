//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NTLNTimelineViewController.h"

#import "MKMapViewDelegate.h"

@class MKMapView, NSString, UIImage, UISegmentedControl;

@interface NTLNLocationTableViewController : NTLNTimelineViewController <MKMapViewDelegate>
{
    MKMapView *mapView;
    NSString *screenName;
    NSString *userLocation;
    UIImage *userImage;
    UISegmentedControl *buttonBarSegmentedControl;
    CDStruct_2c43369c location;
}

@property(nonatomic) CDStruct_2c43369c location; // @synthesize location;
@property(retain) UIImage *userImage; // @synthesize userImage;
@property(retain) NSString *userLocation; // @synthesize userLocation;
@property(retain) NSString *screenName; // @synthesize screenName;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)timeline:(id)arg1 clientSucceeded:(id)arg2 insertedStatuses:(id)arg3;
- (void)timeline:(id)arg1 requestForPage:(int)arg2 since_id:(id)arg3;
- (CDStruct_2c43369c)addressLocation;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)togglePickers:(id)arg1;
- (void)setupToolbarMapType;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)goToGoogleMaps:(id)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (id)initWithStyle:(int)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)hideLoading;
- (void)showLoading;
- (void)changeMap;
- (void)getLocation;
- (void)setViewLocation:(id)arg1;
- (void)setProfileImage:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)init;

@end

