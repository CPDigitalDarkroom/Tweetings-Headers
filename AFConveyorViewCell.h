//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFHorizontalTableViewCell.h"

@class UIImageView;

@interface AFConveyorViewCell : AFHorizontalTableViewCell
{
    BOOL _adjacent;
    int _type;
    UIImageView *_backgroundImageView;
}

@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic, getter=isAdjacent) BOOL adjacent; // @synthesize adjacent=_adjacent;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)setDepressed:(BOOL)arg1;
- (void)reset;
- (id)initWithReuseIdentifier:(id)arg1;

@end

