//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MKPlacemark, MKReverseGeocoder, NSError;

@protocol MKReverseGeocoderDelegate <NSObject>
- (void)reverseGeocoder:(MKReverseGeocoder *)arg1 didFailWithError:(NSError *)arg2;
- (void)reverseGeocoder:(MKReverseGeocoder *)arg1 didFindPlacemark:(MKPlacemark *)arg2;
@end

