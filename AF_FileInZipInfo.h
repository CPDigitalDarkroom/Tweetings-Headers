//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface AF_FileInZipInfo : NSObject
{
    unsigned int _length;
    int _level;
    BOOL _crypted;
    unsigned int _size;
    NSDate *_date;
    unsigned int _crc32;
    NSString *_name;
}

@property(readonly, nonatomic) unsigned int crc32; // @synthesize crc32=_crc32;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) unsigned int size; // @synthesize size=_size;
@property(readonly, nonatomic) BOOL crypted; // @synthesize crypted=_crypted;
@property(readonly, nonatomic) int level; // @synthesize level=_level;
@property(readonly, nonatomic) unsigned int length; // @synthesize length=_length;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;
- (id)initWithName:(id)arg1 length:(unsigned int)arg2 level:(int)arg3 crypted:(BOOL)arg4 size:(unsigned int)arg5 date:(id)arg6 crc32:(unsigned int)arg7;

@end

