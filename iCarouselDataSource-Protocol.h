//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView, iCarousel;

@protocol iCarouselDataSource <NSObject>
- (UIView *)carousel:(iCarousel *)arg1 viewForItemAtIndex:(unsigned int)arg2 reusingView:(UIView *)arg3;
- (unsigned int)numberOfItemsInCarousel:(iCarousel *)arg1;

@optional
- (UIView *)carousel:(iCarousel *)arg1 placeholderViewAtIndex:(unsigned int)arg2;
- (UIView *)carousel:(iCarousel *)arg1 viewForItemAtIndex:(unsigned int)arg2;
- (unsigned int)numberOfVisibleItemsInCarousel:(iCarousel *)arg1;
- (UIView *)carousel:(iCarousel *)arg1 placeholderViewAtIndex:(unsigned int)arg2 reusingView:(UIView *)arg3;
- (unsigned int)numberOfPlaceholdersInCarousel:(iCarousel *)arg1;
@end

