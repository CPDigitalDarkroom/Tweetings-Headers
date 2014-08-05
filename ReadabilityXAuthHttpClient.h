//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ReadabilityXAuthHttpClient : NSObject
{
    id <ReadabilityXAuthHttpClientDelegate> _delegate;
}

+ (id)consumer;
@property id <ReadabilityXAuthHttpClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)accessTokenTicket:(id)arg1 didFailWithError:(id)arg2;
- (void)accessTokenTicket:(id)arg1 didFinishWithData:(id)arg2;
- (id)screenNameFromHTTPResponseBody:(id)arg1;
- (void)requestTokenWithScreenName:(id)arg1 password:(id)arg2;

@end

