//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LevelMeter.h"

@class EAGLContext;

@interface GLLevelMeter : LevelMeter
{
    int _backingWidth;
    int _backingHeight;
    EAGLContext *_context;
    unsigned int _viewRenderbuffer;
    unsigned int _viewFramebuffer;
}

+ (Class)layerClass;
- (void)dealloc;
- (void)setNeedsDisplay;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_drawView;
- (void)_performInit;
- (void)_setupView;
- (void)_destroyFramebuffer;
- (BOOL)_createFramebuffer;

@end

