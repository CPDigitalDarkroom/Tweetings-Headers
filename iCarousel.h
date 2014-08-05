//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSDictionary, NSMutableSet;

@interface iCarousel : UIView
{
    BOOL decelerating;
    BOOL scrollEnabled;
    BOOL bounces;
    BOOL scrolling;
    BOOL shouldWrap;
    BOOL vertical;
    BOOL dragging;
    BOOL didDrag;
    BOOL stopAtItemBoundary;
    BOOL scrollToItemBoundary;
    BOOL useDisplayLink;
    BOOL ignorePerpendicularSwipes;
    BOOL centerItemWhenSelected;
    id <iCarouselDataSource> dataSource;
    id <iCarouselDelegate> delegate;
    int type;
    float perspective;
    int numberOfItems;
    int numberOfPlaceholders;
    int numberOfPlaceholdersToShow;
    int numberOfVisibleItems;
    UIView *contentView;
    NSDictionary *itemViews;
    NSMutableSet *itemViewPool;
    NSMutableSet *placeholderViewPool;
    int previousItemIndex;
    float itemWidth;
    float scrollOffset;
    float offsetMultiplier;
    float startVelocity;
    id timer;
    float decelerationRate;
    float bounceDistance;
    float startOffset;
    float endOffset;
    float previousTranslation;
    float scrollSpeed;
    float toggle;
    struct CGSize contentOffset;
    struct CGSize viewpointOffset;
    double scrollDuration;
    double startTime;
    double toggleTime;
}

@property(nonatomic) BOOL centerItemWhenSelected; // @synthesize centerItemWhenSelected;
@property(nonatomic) BOOL ignorePerpendicularSwipes; // @synthesize ignorePerpendicularSwipes;
@property(nonatomic) BOOL useDisplayLink; // @synthesize useDisplayLink;
@property(nonatomic) BOOL scrollToItemBoundary; // @synthesize scrollToItemBoundary;
@property(nonatomic) BOOL stopAtItemBoundary; // @synthesize stopAtItemBoundary;
@property(readonly, nonatomic) float toggle; // @synthesize toggle;
@property(nonatomic) double toggleTime; // @synthesize toggleTime;
@property(nonatomic) float scrollSpeed; // @synthesize scrollSpeed;
@property(nonatomic) BOOL didDrag; // @synthesize didDrag;
@property(nonatomic) BOOL dragging; // @synthesize dragging;
@property(nonatomic, getter=isVertical) BOOL vertical; // @synthesize vertical;
@property(nonatomic) BOOL shouldWrap; // @synthesize shouldWrap;
@property(nonatomic) float previousTranslation; // @synthesize previousTranslation;
@property(nonatomic) BOOL scrolling; // @synthesize scrolling;
@property(nonatomic) double startTime; // @synthesize startTime;
@property(nonatomic) double scrollDuration; // @synthesize scrollDuration;
@property(nonatomic) float endOffset; // @synthesize endOffset;
@property(nonatomic) float startOffset; // @synthesize startOffset;
@property(nonatomic) struct CGSize viewpointOffset; // @synthesize viewpointOffset;
@property(nonatomic) struct CGSize contentOffset; // @synthesize contentOffset;
@property(nonatomic) BOOL bounces; // @synthesize bounces;
@property(nonatomic) float bounceDistance; // @synthesize bounceDistance;
@property(nonatomic) float decelerationRate; // @synthesize decelerationRate;
@property(nonatomic) BOOL scrollEnabled; // @synthesize scrollEnabled;
@property(nonatomic) BOOL decelerating; // @synthesize decelerating;
@property(nonatomic) id timer; // @synthesize timer;
@property(nonatomic) float startVelocity; // @synthesize startVelocity;
@property(nonatomic) float offsetMultiplier; // @synthesize offsetMultiplier;
@property(nonatomic) float scrollOffset; // @synthesize scrollOffset;
@property(nonatomic) float itemWidth; // @synthesize itemWidth;
@property(nonatomic) int previousItemIndex; // @synthesize previousItemIndex;
@property(retain, nonatomic) NSMutableSet *placeholderViewPool; // @synthesize placeholderViewPool;
@property(retain, nonatomic) NSMutableSet *itemViewPool; // @synthesize itemViewPool;
@property(retain, nonatomic) NSDictionary *itemViews; // @synthesize itemViews;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView;
@property(nonatomic) int numberOfVisibleItems; // @synthesize numberOfVisibleItems;
@property(nonatomic) int numberOfPlaceholdersToShow; // @synthesize numberOfPlaceholdersToShow;
@property(readonly, nonatomic) int numberOfPlaceholders; // @synthesize numberOfPlaceholders;
@property(readonly, nonatomic) int numberOfItems; // @synthesize numberOfItems;
@property(nonatomic) float perspective; // @synthesize perspective;
@property(nonatomic) int type; // @synthesize type;
@property(nonatomic) id <iCarouselDelegate> delegate; // @synthesize delegate;
@property(nonatomic) id <iCarouselDataSource> dataSource; // @synthesize dataSource;
- (void)didPan:(id)arg1;
- (void)didTap:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)viewOrSuperview:(id)arg1 isKindOfClass:(Class)arg2;
- (int)viewOrSuperviewIndex:(id)arg1;
- (void)didScroll;
- (void)viewDidMoveToSuperview;
- (void)didMoveToSuperview;
- (void)step;
- (float)easeInOut:(float)arg1;
- (void)startDecelerating;
- (BOOL)shouldScroll;
- (BOOL)shouldDecelerate;
- (float)decelerationDistance;
- (void)stopAnimation;
- (void)startAnimation;
- (void)reloadItemAtIndex:(int)arg1 animated:(BOOL)arg2;
- (void)insertItemAtIndex:(int)arg1 animated:(BOOL)arg2;
- (void)fadeInItemView:(id)arg1;
- (void)removeItemAtIndex:(int)arg1 animated:(BOOL)arg2;
- (void)scrollToItemAtIndex:(int)arg1 animated:(BOOL)arg2;
- (void)scrollToItemAtIndex:(int)arg1 duration:(double)arg2;
- (void)scrollByNumberOfItems:(int)arg1 duration:(double)arg2;
- (float)minScrollDistanceFromOffset:(float)arg1 toOffset:(float)arg2;
- (int)minScrollDistanceFromIndex:(int)arg1 toIndex:(int)arg2;
@property(readonly, nonatomic) int currentItemIndex;
- (float)clampedOffset:(float)arg1;
- (int)clampedIndex:(int)arg1;
- (void)reloadData;
- (void)loadUnloadViews;
- (id)loadViewAtIndex:(int)arg1;
- (id)loadViewAtIndex:(int)arg1 withContainerView:(id)arg2;
- (id)dequeuePlaceholderView;
- (id)dequeueItemView;
- (void)queuePlaceholderView:(id)arg1;
- (void)queueItemView:(id)arg1;
- (void)layOutItemViews;
- (void)updateItemWidth;
- (void)transformItemViews;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)transformItemView:(id)arg1 atIndex:(int)arg2;
- (id)containView:(id)arg1;
- (float)offsetForIndex:(int)arg1;
- (void)depthSortViews;
- (struct CATransform3D)transformForItemView:(id)arg1 withOffset:(float)arg2;
- (float)valueForTransformOption:(int)arg1 withDefault:(float)arg2;
- (float)alphaForItemWithOffset:(float)arg1;
- (void)insertView:(id)arg1 atIndex:(int)arg2;
- (void)removeViewAtIndex:(int)arg1;
- (void)setItemView:(id)arg1 forIndex:(int)arg2;
- (int)indexOfItemViewOrSubview:(id)arg1;
- (int)indexOfItemView:(id)arg1;
@property(readonly, nonatomic) UIView *currentItemView;
- (id)itemViewAtIndex:(int)arg1;
@property(readonly, nonatomic) NSArray *visibleItemViews;
@property(readonly, nonatomic) NSArray *indexesForVisibleItems;
- (void)setUseDisplayLinkIfAvailable:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setUp;

@end
