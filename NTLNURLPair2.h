//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NTLNURLPair2 : NSObject
{
    NSString *text;
    NSString *url;
    NSString *geo;
    NSString *hash;
    NSString *list;
    NSString *screenName;
    BOOL conversation;
    BOOL retweet;
    int replyCount;
    BOOL whoRetweet;
}

@property BOOL whoRetweet; // @synthesize whoRetweet;
@property(retain) NSString *geo; // @synthesize geo;
@property BOOL retweet; // @synthesize retweet;
@property BOOL conversation; // @synthesize conversation;
@property(retain) NSString *screenName; // @synthesize screenName;
@property(retain) NSString *list; // @synthesize list;
@property(retain) NSString *text; // @synthesize text;
@property(retain) NSString *hash; // @synthesize hash;
@property(retain) NSString *url; // @synthesize url;
- (void)dealloc;

@end
