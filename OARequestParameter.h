//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface OARequestParameter : NSObject
{
    NSString *name;
    NSString *value;
}

+ (id)requestParameterWithName:(id)arg1 value:(id)arg2;
@property(retain) NSString *value; // @synthesize value;
@property(retain) NSString *name; // @synthesize name;
- (id)URLEncodedNameValuePair;
- (id)URLEncodedValue;
- (id)URLEncodedName;
- (void)dealloc;
- (id)initWithName:(id)arg1 value:(id)arg2;

@end

