//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FSQVenue : NSObject
{
    NSString *venue_id;
    NSString *venue_name;
    NSString *address;
    NSString *city;
    NSString *state;
    NSString *zip;
    NSString *twitter;
    NSString *latitude;
    NSString *longitude;
    NSString *phone;
    NSString *category;
    NSString *category_image;
    NSString *mayor_firstname;
    NSString *mayor_lastname;
}

@property(copy) NSString *latitude; // @synthesize latitude;
@property(copy) NSString *longitude; // @synthesize longitude;
@property(copy) NSString *mayor_lastname; // @synthesize mayor_lastname;
@property(copy) NSString *mayor_firstname; // @synthesize mayor_firstname;
@property(copy) NSString *twitter; // @synthesize twitter;
@property(copy) NSString *zip; // @synthesize zip;
@property(copy) NSString *state; // @synthesize state;
@property(copy) NSString *city; // @synthesize city;
@property(copy) NSString *address; // @synthesize address;
@property(copy) NSString *venue_name; // @synthesize venue_name;
@property(copy) NSString *phone; // @synthesize phone;
@property(copy) NSString *category_image; // @synthesize category_image;
@property(copy) NSString *category; // @synthesize category;
@property(copy) NSString *venue_id; // @synthesize venue_id;
- (id)init;
- (void)dealloc;

@end

