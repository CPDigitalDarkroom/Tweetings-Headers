//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TwitterText : NSObject
{
}

+ (int)remainingCharacterCount:(id)arg1 httpURLLength:(int)arg2 httpsURLLength:(int)arg3;
+ (int)remainingCharacterCount:(id)arg1;
+ (int)tweetLength:(id)arg1 httpURLLength:(int)arg2 httpsURLLength:(int)arg3;
+ (int)tweetLength:(id)arg1;
+ (id)repliedScreenNameInText:(id)arg1;
+ (id)mentionsOrListsInText:(id)arg1;
+ (id)mentionedScreenNamesInText:(id)arg1;
+ (id)cashtagsInText:(id)arg1 withURLEntities:(id)arg2;
+ (id)cashtagsInText:(id)arg1 checkingURLOverlap:(BOOL)arg2;
+ (id)hashtagsInText:(id)arg1 withURLEntities:(id)arg2;
+ (id)hashtagsInText:(id)arg1 checkingURLOverlap:(BOOL)arg2;
+ (id)URLsInText:(id)arg1;
+ (id)entitiesInText:(id)arg1;

@end

