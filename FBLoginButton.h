//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface FBLoginButton : UIButton
{
    BOOL _isLoggedIn;
}

@property(nonatomic) BOOL isLoggedIn; // @synthesize isLoggedIn=_isLoggedIn;
- (void)updateImage;
- (id)buttonHighlightedImage;
- (id)buttonImage;

@end

