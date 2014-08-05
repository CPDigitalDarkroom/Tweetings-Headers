//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NTLNTheme, UIColor, UIImage;

@interface NTLNColors : NSObject
{
    NTLNTheme *currentTheme;
    UIColor *textForground;
    UIColor *textAnnotateForground;
    UIColor *textSelected;
    UIColor *oddBackground;
    UIColor *evenBackground;
    UIColor *tweetNameBackground;
    UIColor *tweetNameNoStripeBackground;
    UIColor *nameColor;
    UIColor *mentionNameColor;
    UIColor *mineNameColor;
    UIColor *replyBackground;
    UIColor *myPostBackground;
    UIImage *replyBackgroundImage;
    UIImage *myPostBackgroundImage;
    UIImage *defaultBackgroundImage;
    UIColor *probableReplyBackground;
    UIColor *directMessageBackground;
    UIColor *subText;
    UIColor *linkColor;
    UIColor *linkMentionColor;
    UIColor *linkDmColor;
    UIColor *composeColor;
    BOOL themeIsDark;
    BOOL navBarIsDark;
    UIColor *scrollViewBackground;
    UIColor *navBarTintColor;
    UIColor *navBarBackgroundColor;
    UIColor *selectedBackground;
    UIColor *otherGradientTop;
    UIColor *otherGradientBottom;
    UIColor *iconOverlayColor;
    UIColor *selectedIconOverlayColor;
    UIColor *textTimeForeground;
    struct CGGradient *linkBackgroundGradient;
    struct CGGradient *linkSelectedBackgroundGradient;
    struct CGGradient *timelineSelectedBackgroundGradient;
    struct CGGradient *timelineMainGradient;
    struct CGGradient *timelineMentionGradient;
    struct CGGradient *timelineMineGradient;
    struct CGGradient *composeGradient;
    struct CGColor *separator;
    struct CGColor *separator2;
    struct CGColor *textShadowColor;
    struct CGSize textShadowSize;
    struct CGColor *quoteTextColor;
    struct CGColor *quoteBackgroundColor;
    UIColor *textMention;
    UIColor *textDm;
    UIColor *timeMention;
    UIColor *timeDm;
    UIColor *separatorColor;
    UIColor *_separatorColor;
}

+ (id)instance;
@property(retain) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(retain) UIColor *timeDm; // @synthesize timeDm;
@property(retain) UIColor *timeMention; // @synthesize timeMention;
@property(retain) UIColor *textDm; // @synthesize textDm;
@property(retain) UIColor *textMention; // @synthesize textMention;
@property(readonly) BOOL themeIsDark; // @synthesize themeIsDark;
@property(readonly) BOOL navBarIsDark; // @synthesize navBarIsDark;
@property(readonly) struct CGColor *textShadowColor; // @synthesize textShadowColor;
@property(readonly) struct CGColor *quoteBackgroundColor; // @synthesize quoteBackgroundColor;
@property(readonly) struct CGColor *quoteTextColor; // @synthesize quoteTextColor;
@property(readonly) UIColor *selectedIconOverlayColor; // @synthesize selectedIconOverlayColor;
@property(readonly) UIColor *iconOverlayColor; // @synthesize iconOverlayColor;
@property(readonly) struct CGColor *separator2; // @synthesize separator2;
@property(readonly) struct CGColor *separator; // @synthesize separator;
@property(readonly) UIColor *navBarBackgroundColor; // @synthesize navBarBackgroundColor;
@property(retain) UIColor *otherGradientBottom; // @synthesize otherGradientBottom;
@property(retain) UIColor *otherGradientTop; // @synthesize otherGradientTop;
@property(readonly) UIColor *mineNameColor; // @synthesize mineNameColor;
@property(readonly) UIColor *mentionNameColor; // @synthesize mentionNameColor;
@property(readonly) UIColor *nameColor; // @synthesize nameColor;
@property(readonly) struct CGGradient *composeGradient; // @synthesize composeGradient;
@property(readonly) UIColor *composeColor; // @synthesize composeColor;
@property(readonly) UIColor *linkDmColor; // @synthesize linkDmColor;
@property(readonly) UIColor *linkMentionColor; // @synthesize linkMentionColor;
@property(readonly) UIColor *linkColor; // @synthesize linkColor;
@property(retain, nonatomic) NTLNTheme *currentTheme; // @synthesize currentTheme;
@property(readonly) UIColor *navBarTintColor; // @synthesize navBarTintColor;
@property(readonly) struct CGGradient *timelineMentionGradient; // @synthesize timelineMentionGradient;
@property(readonly) struct CGGradient *timelineMineGradient; // @synthesize timelineMineGradient;
@property(readonly) struct CGGradient *timelineMainGradient; // @synthesize timelineMainGradient;
@property(readonly) UIColor *subText; // @synthesize subText;
@property(readonly) UIColor *textTimeForeground; // @synthesize textTimeForeground;
@property(readonly) UIImage *defaultBackgroundImage; // @synthesize defaultBackgroundImage;
@property(readonly) UIImage *myPostBackgroundImage; // @synthesize myPostBackgroundImage;
@property(readonly) UIImage *replyBackgroundImage; // @synthesize replyBackgroundImage;
@property(readonly) struct CGGradient *timelineSelectedBackgroundGradient; // @synthesize timelineSelectedBackgroundGradient;
@property(readonly) struct CGGradient *linkSelectedBackgroundGradient; // @synthesize linkSelectedBackgroundGradient;
@property(readonly) struct CGGradient *linkBackgroundGradient; // @synthesize linkBackgroundGradient;
@property(readonly) UIColor *selectedBackground; // @synthesize selectedBackground;
@property(readonly) UIColor *textSelected; // @synthesize textSelected;
@property(readonly) UIColor *scrollViewBackground; // @synthesize scrollViewBackground;
@property(readonly) UIColor *directMessageBackground; // @synthesize directMessageBackground;
@property(readonly) UIColor *probableReplyBackground; // @synthesize probableReplyBackground;
@property(readonly) UIColor *myPostBackground; // @synthesize myPostBackground;
@property(readonly) UIColor *replyBackground; // @synthesize replyBackground;
@property(readonly) UIColor *tweetNameNoStripeBackground; // @synthesize tweetNameNoStripeBackground;
@property(readonly) UIColor *tweetNameBackground; // @synthesize tweetNameBackground;
@property(readonly) UIColor *evenBackground; // @synthesize evenBackground;
@property(readonly) UIColor *oddBackground; // @synthesize oddBackground;
@property(readonly) UIColor *textAnnotateForground; // @synthesize textAnnotateForground;
@property(readonly) UIColor *textForground; // @synthesize textForground;
- (void)linkShadowEnd:(struct CGContext *)arg1;
- (void)linkShadowBegin:(struct CGContext *)arg1;
- (void)textShadowEnd:(struct CGContext *)arg1;
- (void)textShadowBegin:(struct CGContext *)arg1;
- (void)dealloc;
- (id)init;
- (void)setupColors:(int)arg1;
- (void)setupColors;
- (void)setupBlindsDarkColors;
- (void)setupCustomColors;
- (void)setupBlindsColors;
- (void)setupBlindsDarkGradients;
- (void)setupCustomGradients;
- (void)setupBlindsGradients;
- (void)releaseColors;

@end
