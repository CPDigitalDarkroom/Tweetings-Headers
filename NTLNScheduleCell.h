//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NTLNCell.h"

@class NSString;

@interface NTLNScheduleCell : NTLNCell
{
    BOOL isEven;
    NSString *time;
    NSString *tweet;
}

+ (void)drawText:(id)arg1 tweet:(id)arg2 selected:(BOOL)arg3;
@property(readonly) NSString *tweet; // @synthesize tweet;
@property(readonly) NSString *time; // @synthesize time;
- (void)drawBackgroundRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateByNameAndTweetNoDisclosureFull:(id)arg1 tweet:(id)arg2 isEven:(BOOL)arg3;
- (void)updateByNameAndTweetNoDisclosure:(id)arg1 tweet:(id)arg2 isEven:(BOOL)arg3;
- (void)updateByNameAndTweetFull:(id)arg1 tweet:(id)arg2 isEven:(BOOL)arg3;
- (void)updateByNameAndTweet:(id)arg1 tweet:(id)arg2 isEven:(BOOL)arg3;
- (void)createCell;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 reuseIdentifier:(id)arg2;

@end
