//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface NTLNFilter : NSObject
{
    NSString *statusText;
    NSString *screenName;
    NSString *appSource;
    NSString *dbId;
    NSDate *expires;
    BOOL caseSensitive;
    BOOL wholeWord;
    int position;
}

@property int position; // @synthesize position;
@property BOOL caseSensitive; // @synthesize caseSensitive;
@property BOOL wholeWord; // @synthesize wholeWord;
@property(copy) NSDate *expires; // @synthesize expires;
@property(copy) NSString *dbId; // @synthesize dbId;
@property(copy) NSString *appSource; // @synthesize appSource;
@property(copy) NSString *screenName; // @synthesize screenName;
@property(copy) NSString *statusText; // @synthesize statusText;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
