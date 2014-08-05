//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDate, NSURLResponse;

@interface GTMCachedURLResponse : NSObject
{
    NSURLResponse *response_;
    NSData *data_;
    NSDate *useDate_;
    NSDate *reservationDate_;
}

@property(retain) NSDate *useDate; // @synthesize useDate=useDate_;
@property(retain) NSDate *reservationDate; // @synthesize reservationDate=reservationDate_;
@property(readonly) NSData *data; // @synthesize data=data_;
@property(readonly) NSURLResponse *response; // @synthesize response=response_;
- (int)compareUseDate:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithResponse:(id)arg1 data:(id)arg2;

@end

