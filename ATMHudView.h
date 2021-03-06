//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ATMHud, ATMProgressLayer, ATMTextLayer, CALayer, NSString, UIActivityIndicatorView, UIImage;

@interface ATMHudView : UIView
{
    NSString *caption;
    UIImage *image;
    UIActivityIndicatorView *activity;
    int activityStyle;
    ATMHud *p;
    BOOL showActivity;
    float progress;
    struct CGRect targetBounds;
    struct CGRect captionRect;
    struct CGRect progressRect;
    struct CGRect activityRect;
    struct CGRect imageRect;
    struct CGSize fixedSize;
    struct CGSize activitySize;
    CALayer *backgroundLayer;
    CALayer *imageLayer;
    ATMTextLayer *captionLayer;
    ATMProgressLayer *progressLayer;
}

@property(retain, nonatomic) ATMProgressLayer *progressLayer; // @synthesize progressLayer;
@property(retain, nonatomic) ATMTextLayer *captionLayer; // @synthesize captionLayer;
@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer;
@property(retain, nonatomic) CALayer *backgroundLayer; // @synthesize backgroundLayer;
@property(nonatomic) struct CGSize activitySize; // @synthesize activitySize;
@property(nonatomic) struct CGSize fixedSize; // @synthesize fixedSize;
@property(nonatomic) struct CGRect imageRect; // @synthesize imageRect;
@property(nonatomic) struct CGRect activityRect; // @synthesize activityRect;
@property(nonatomic) struct CGRect progressRect; // @synthesize progressRect;
@property(nonatomic) struct CGRect captionRect; // @synthesize captionRect;
@property(nonatomic) struct CGRect targetBounds; // @synthesize targetBounds;
@property(nonatomic) float progress; // @synthesize progress;
@property(nonatomic) BOOL showActivity; // @synthesize showActivity;
@property(retain, nonatomic) ATMHud *p; // @synthesize p;
@property(nonatomic) int activityStyle; // @synthesize activityStyle;
@property(retain, nonatomic) UIActivityIndicatorView *activity; // @synthesize activity;
@property(retain, nonatomic) UIImage *image; // @synthesize image;
@property(retain, nonatomic) NSString *caption; // @synthesize caption;
- (void)reset;
- (void)update;
- (void)hide;
- (void)show;
- (void)applyWithMode:(int)arg1;
- (struct CGSize)calculateSizeForQueueItem:(id)arg1;
- (struct CGSize)sizeForActivityStyle:(int)arg1;
- (void)calculate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andController:(id)arg2;
- (struct CGPoint)sharpPoint:(struct CGPoint)arg1;
- (struct CGRect)sharpRect:(struct CGRect)arg1;

@end

