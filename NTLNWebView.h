//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWebView.h"

@interface NTLNWebView : UIWebView
{
    BOOL overrideScroll;
    BOOL dragging;
    float oldX;
    float oldY;
    struct CGRect originalFrame;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(nonatomic) BOOL dragging; // @synthesize dragging;
@property(nonatomic) BOOL overrideScroll; // @synthesize overrideScroll;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (void)release;
- (unsigned int)retainCount;
- (id)retain;

@end

