//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NTLNStatus;

@interface NTLNSelectedCellBackgroundView : UIView
{
    NTLNStatus *status;
    int fontSize;
    int theme;
    int inlinePhotos;
    BOOL marker;
}

@property BOOL marker; // @synthesize marker;
@property int inlinePhotos; // @synthesize inlinePhotos;
@property int theme; // @synthesize theme;
@property int fontSize; // @synthesize fontSize;
@property(retain) NTLNStatus *status; // @synthesize status;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
