//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PathPoint : NSObject
{
    struct CGPoint location;
    double timestamp;
    double notificationTime;
    int phase;
}

@property(readonly) int phase; // @synthesize phase;
@property(readonly) double notificationTime; // @synthesize notificationTime;
@property(readonly) double timestamp; // @synthesize timestamp;
@property(readonly) struct CGPoint location; // @synthesize location;
- (id).cxx_construct;
- (id)description;
- (void)setEnded:(int)arg1;
- (id)initWithLocation:(struct CGPoint)arg1 timestamp:(double)arg2 phase:(int)arg3;

@end

