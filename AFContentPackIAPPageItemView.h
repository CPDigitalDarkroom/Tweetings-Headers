//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFScrollBarPageItemView.h"

@class NSArray;

@interface AFContentPackIAPPageItemView : AFScrollBarPageItemView
{
    NSArray *_imageViews;
    int _rowCount;
}

@property(nonatomic) int rowCount; // @synthesize rowCount=_rowCount;
@property(retain, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
- (void).cxx_destruct;
- (void)setImageViewsWithImages:(id)arg1;
- (float)labelHeight;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end

