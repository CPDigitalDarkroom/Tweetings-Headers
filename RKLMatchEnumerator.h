//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class NSString;

@interface RKLMatchEnumerator : NSEnumerator
{
    NSString *string;
    NSString *regex;
    unsigned int location;
}

- (void)dealloc;
- (id)nextObject;
- (id)initWithString:(id)arg1 regex:(id)arg2;

@end

