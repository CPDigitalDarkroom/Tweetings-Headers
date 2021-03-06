//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, UIImage, UIView;

@interface BlockAlertView : NSObject
{
    UIView *_view;
    NSMutableArray *_blocks;
    float _height;
    BOOL _vignetteBackground;
    UIImage *_backgroundImage;
}

+ (id)alertWithTitle:(id)arg1 message:(id)arg2;
+ (void)initialize;
@property(nonatomic) BOOL vignetteBackground; // @synthesize vignetteBackground=_vignetteBackground;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void)buttonClicked:(id)arg1;
- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (void)show;
- (void)setDestructiveButtonWithTitle:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)setCancelButtonWithTitle:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)addButtonWithTitle:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)addButtonWithTitle:(id)arg1 color:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)setRotation:(id)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 message:(id)arg2;

@end

