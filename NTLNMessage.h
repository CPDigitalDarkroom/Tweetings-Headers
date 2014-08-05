//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableArray, NSString, NTLNIconContainer;

@interface NTLNMessage : NSObject
{
    NSString *statusId;
    NSString *name;
    NSString *screenName;
    NSString *rtScreenName;
    NSString *rtStatusId;
    NSString *screenNameRecipient;
    BOOL geoEnabled;
    BOOL nsfw;
    NSString *geo;
    NSString *geoCoord;
    NSString *placeName;
    NSString *placeFullName;
    NSString *placeCountry;
    NSString *placeId;
    BOOL verified;
    BOOL following;
    NSString *text;
    NSString *textOriginal;
    NSString *location;
    NSString *source;
    NSString *sourceLink;
    NSString *retweetCount;
    long long userId;
    NSString *in_reply_to_status_id;
    NSString *in_reply_to_screen_name;
    NSDate *timestamp;
    int replyType;
    int status;
    BOOL favorited;
    NTLNIconContainer *iconContainer;
    int identifierId;
    NTLNMessage *rt;
    NSString *tl;
    NSString *tm;
    NSString *popularCount;
    NSMutableArray *media;
    NSString *profile_image_url;
}

@property(copy) NSString *profile_image_url; // @synthesize profile_image_url;
@property BOOL following; // @synthesize following;
@property BOOL nsfw; // @synthesize nsfw;
@property(copy) NSMutableArray *media; // @synthesize media;
@property long long userId; // @synthesize userId;
@property(copy) NSString *tm; // @synthesize tm;
@property(copy) NSString *tl; // @synthesize tl;
@property(copy) NSString *sourceLink; // @synthesize sourceLink;
@property(copy) NSString *textOriginal; // @synthesize textOriginal;
@property(copy) NSString *placeName; // @synthesize placeName;
@property(copy) NSString *placeFullName; // @synthesize placeFullName;
@property(copy) NSString *placeCountry; // @synthesize placeCountry;
@property(copy) NSString *placeId; // @synthesize placeId;
@property(retain) NTLNMessage *rt; // @synthesize rt;
@property int identifierId; // @synthesize identifierId;
@property(copy) NSString *location; // @synthesize location;
@property(copy) NSString *geoCoord; // @synthesize geoCoord;
@property(copy) NSString *geo; // @synthesize geo;
@property(copy) NSString *rtStatusId; // @synthesize rtStatusId;
@property(copy) NSString *rtScreenName; // @synthesize rtScreenName;
@property(copy) NSString *in_reply_to_screen_name; // @synthesize in_reply_to_screen_name;
@property(copy) NSString *screenNameRecipient; // @synthesize screenNameRecipient;
@property(readonly) NTLNIconContainer *iconContainer; // @synthesize iconContainer;
@property BOOL verified; // @synthesize verified;
@property BOOL geoEnabled; // @synthesize geoEnabled;
@property BOOL favorited; // @synthesize favorited;
@property(copy) NSString *in_reply_to_status_id; // @synthesize in_reply_to_status_id;
@property(copy) NSString *retweetCount; // @synthesize retweetCount;
@property(copy) NSString *popularCount; // @synthesize popularCount;
@property(copy) NSString *source; // @synthesize source;
@property int status; // @synthesize status;
@property int replyType; // @synthesize replyType;
@property(retain) NSDate *timestamp; // @synthesize timestamp;
@property(copy) NSString *text; // @synthesize text;
@property(copy) NSString *screenName; // @synthesize screenName;
@property(copy) NSString *name; // @synthesize name;
@property(copy) NSString *statusId; // @synthesize statusId;
- (void)setIconForURL:(id)arg1;
- (void)loadMedia;
- (void)hilightUserReplyWithScreenName:(id)arg1;
- (void)finishedToSetProperties:(BOOL)arg1;
- (BOOL)isMyUpdate;
- (BOOL)isProbablyReplyToMe;
- (BOOL)isReplyToMe;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

