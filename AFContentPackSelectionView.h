//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AFHorizontalTableView, UIImageView, UITableView;

@interface AFContentPackSelectionView : AFView <UITableViewDelegate, UITableViewDataSource>
{
    BOOL _shouldDisplayGetMoreViews;
    BOOL _shouldHideFooterGetMore;
    BOOL _shouldAnimateFeaturedTray;
    id <AFContentPackSelectionViewDelegate> _delegate;
    float _currentTrayWidth;
    AFHorizontalTableView *_horizontalTableView;
    UIImageView *_backgroundView;
}

@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) AFHorizontalTableView *horizontalTableView; // @synthesize horizontalTableView=_horizontalTableView;
@property(nonatomic) BOOL shouldAnimateFeaturedTray; // @synthesize shouldAnimateFeaturedTray=_shouldAnimateFeaturedTray;
@property(nonatomic) BOOL shouldHideFooterGetMore; // @synthesize shouldHideFooterGetMore=_shouldHideFooterGetMore;
@property(nonatomic) BOOL shouldDisplayGetMoreViews; // @synthesize shouldDisplayGetMoreViews=_shouldDisplayGetMoreViews;
@property(nonatomic) float currentTrayWidth; // @synthesize currentTrayWidth=_currentTrayWidth;
@property(nonatomic) __weak id <AFContentPackSelectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)createClearView;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)dequeueReusableSelectionViewCellWithIdentifier:(id)arg1;
- (void)reloadData;
@property(readonly, nonatomic) UITableView *tableView;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)prepareView;

@end

