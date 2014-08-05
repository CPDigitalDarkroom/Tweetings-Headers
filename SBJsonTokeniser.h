//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SBJsonUTF8Stream;

@interface SBJsonTokeniser : NSObject
{
    SBJsonUTF8Stream *_stream;
    NSString *_error;
}

@property(copy) NSString *error; // @synthesize error=_error;
- (int)getToken:(id *)arg1;
- (int)getNumberToken:(id *)arg1;
- (int)getStringToken:(id *)arg1;
- (BOOL)decodeHexQuad:(unsigned short *)arg1;
- (BOOL)decodeEscape:(unsigned short)arg1 into:(unsigned short *)arg2;
- (int)match:(const char *)arg1 length:(unsigned int)arg2 retval:(int)arg3;
- (void)appendData:(id)arg1;
- (void)dealloc;
- (id)init;

@end

