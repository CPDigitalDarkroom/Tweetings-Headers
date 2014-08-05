//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AHMarkedHyperlink, NSArray, NSString, UIColor, UIImage;

@interface JSCoreTextView : UIView
{
    id <JSCoreTextViewDelegate> _delegate;
    struct __CTFramesetter *_framesetter;
    struct __CTFrame *_frame;
    NSString *_text;
    unsigned char _textAlignment;
    NSArray *_links;
    AHMarkedHyperlink *_touchedLink;
    AHMarkedHyperlink *_linkToCopy;
    struct CGPoint _linkLocation;
    UIColor *_textColor;
    UIColor *_linkColor;
    UIColor *_highlightedLinkColor;
    UIColor *_highlightColor;
    NSString *_fontName;
    float _fontSize;
    float _paddingTop;
    float _paddingLeft;
    UIImage *_backgroundImage;
    float _bgImageTopStretchCap;
    float _bgImageLeftStretchCap;
    BOOL _underlined;
}

+ (float)measureFrameHeightForText:(id)arg1 fontName:(id)arg2 fontSize:(float)arg3 constrainedToWidth:(float)arg4 paddingTop:(float)arg5 paddingLeft:(float)arg6;
@property(nonatomic) BOOL underlined; // @synthesize underlined=_underlined;
@property(nonatomic) float bgImageLeftStretchCap; // @synthesize bgImageLeftStretchCap=_bgImageLeftStretchCap;
@property(nonatomic) float bgImageTopStretchCap; // @synthesize bgImageTopStretchCap=_bgImageTopStretchCap;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) float paddingLeft; // @synthesize paddingLeft=_paddingLeft;
@property(nonatomic) float paddingTop; // @synthesize paddingTop=_paddingTop;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) UIColor *highlightedLinkColor; // @synthesize highlightedLinkColor=_highlightedLinkColor;
@property(retain, nonatomic) UIColor *linkColor; // @synthesize linkColor=_linkColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) float fontSize; // @synthesize fontSize=_fontSize;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(nonatomic) unsigned char textAlignment; // @synthesize textAlignment=_textAlignment;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) id <JSCoreTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGPath *)newPathForRoundedRect:(struct CGRect)arg1 radius:(float)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawInContext:(struct CGContext *)arg1 bounds:(struct CGRect)arg2;
- (void)createFramesetter;
- (void)layoutSubviews;
- (void)handleMenuControllerDidHideMenuNotification:(id)arg1;
- (void)copyLink:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canResignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)handleLongPress:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)detectLinks;
- (void)setBgImageLeftStretchCapLeft:(float)arg1;
- (void)dealloc;
- (void)fontSizeChanged:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end
