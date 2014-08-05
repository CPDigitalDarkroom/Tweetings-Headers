//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class NSMutableArray, NSMutableString, NSString, NTLNMessage, NTLNUrlEntity;

@interface NTLNTwitterXMLParser : NSObject <NSXMLParserDelegate>
{
    NSMutableString *currentString;
    NTLNMessage *currentMessage;
    NSString *currentIconURL;
    NSString *currentRTIconURL;
    NSString *currentInReplyToUserId;
    NTLNUrlEntity *entity;
    NSMutableArray *entityArray;
    NSMutableArray *rtEntityArray;
    id scopeDelegate;
    BOOL statusTagChild;
    BOOL entitiesTagChild;
    BOOL userTagChild;
    BOOL entitiesMediaTagChild;
    BOOL recipientTagChild;
    BOOL entitiesCreativeTagChild;
    BOOL rtTagChild;
    BOOL rtUserTagChild;
    BOOL readText;
    BOOL currentMsgDirectMessage;
    BOOL geoTag;
    BOOL coordTag;
    BOOL placeTag;
    NSMutableArray *messages;
    int urlTagCount;
}

+ (id)decodeSource:(id)arg1;
+ (id)decodeHeart:(id)arg1;
@property(nonatomic) id scopeDelegate; // @synthesize scopeDelegate;
@property(readonly) NSMutableArray *messages; // @synthesize messages;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)dealloc;
- (void)parseXMLData:(id)arg1;

@end
