//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFProcessor.h"

@class NSString;

@interface AFMemeProcessor : AFProcessor
{
    NSString *_topText;
    NSString *_bottomText;
    float _scale;
    float _topFontSize;
    float _bottomFontSize;
    struct CGRect _topRect;
    struct CGRect _bottomRect;
}

@property(nonatomic) struct CGRect bottomRect; // @synthesize bottomRect=_bottomRect;
@property(nonatomic) struct CGRect topRect; // @synthesize topRect=_topRect;
@property(nonatomic) float bottomFontSize; // @synthesize bottomFontSize=_bottomFontSize;
@property(nonatomic) float topFontSize; // @synthesize topFontSize=_topFontSize;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(retain, nonatomic) NSString *bottomText; // @synthesize bottomText=_bottomText;
@property(retain, nonatomic) NSString *topText; // @synthesize topText=_topText;
- (void).cxx_destruct;
- (CDUnknownBlockType)moaBitmapBlock;
- (CDUnknownBlockType)bitmapBlock;

@end
