//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFModule.h"

@interface AFCropModule : AFModule
{
    BOOL _isHiRes;
    struct CGSize _scaledSize;
    struct CGRect _rect;
}

@property(nonatomic) BOOL isHiRes; // @synthesize isHiRes=_isHiRes;
@property(nonatomic) struct CGSize scaledSize; // @synthesize scaledSize=_scaledSize;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (void)createProcessors:(id)arg1;
- (void)preprocess:(id)arg1;
- (id)init;

@end
