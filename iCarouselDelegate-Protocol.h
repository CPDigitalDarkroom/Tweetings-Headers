//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView, iCarousel;

@protocol iCarouselDelegate <NSObject>

@optional
- (void)carousel:(iCarousel *)arg1 didSelectItemAtIndex:(int)arg2;
- (BOOL)carousel:(iCarousel *)arg1 shouldSelectItemAtIndex:(int)arg2;
- (struct CATransform3D)carousel:(iCarousel *)arg1 transformForItemView:(UIView *)arg2 withOffset:(float)arg3;
- (float)carousel:(iCarousel *)arg1 valueForTransformOption:(int)arg2 withDefault:(float)arg3;
- (struct CATransform3D)carousel:(iCarousel *)arg1 itemTransformForOffset:(float)arg2 baseTransform:(struct CATransform3D)arg3;
- (float)carousel:(iCarousel *)arg1 itemAlphaForOffset:(float)arg2;
- (BOOL)carouselShouldWrap:(iCarousel *)arg1;
- (float)carouselOffsetMultiplier:(iCarousel *)arg1;
- (float)carouselItemWidth:(iCarousel *)arg1;
- (void)carouselDidEndDecelerating:(iCarousel *)arg1;
- (void)carouselWillBeginDecelerating:(iCarousel *)arg1;
- (void)carouselDidEndDragging:(iCarousel *)arg1 willDecelerate:(BOOL)arg2;
- (void)carouselWillBeginDragging:(iCarousel *)arg1;
- (void)carouselCurrentItemIndexUpdated:(iCarousel *)arg1;
- (void)carouselDidScroll:(iCarousel *)arg1;
- (void)carouselDidEndScrollingAnimation:(iCarousel *)arg1;
- (void)carouselWillBeginScrollingAnimation:(iCarousel *)arg1;
@end

