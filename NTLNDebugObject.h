//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface NTLNDebugObject : NSObject
{
    NSString *response;
    NSString *request;
    NSString *url;
    NSDate *requestDate;
    int statusCode;
}

@property(copy) NSString *url; // @synthesize url;
@property(copy) NSDate *requestDate; // @synthesize requestDate;
@property int statusCode; // @synthesize statusCode;
@property(copy) NSString *response; // @synthesize response;
@property(copy) NSString *request; // @synthesize request;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

