//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NTLNHttpClient.h"

@class NSObject<FSQClientDelegate>;

@interface FSQClient : NTLNHttpClient
{
    NSObject<FSQClientDelegate> *delegate;
    BOOL parseExpander;
    BOOL parseFourSquare;
}

@property(retain) NSObject<FSQClientDelegate> *delegate; // @synthesize delegate;
- (void)requestFailed:(id)arg1;
- (void)requestSucceeded;
- (void)getVenue:(id)arg1;
- (void)getVenueId:(id)arg1;
- (void)dealloc;

@end

