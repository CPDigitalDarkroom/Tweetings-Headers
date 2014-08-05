//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WETouchableViewDelegate.h"

@class NSArray, UIView, UIViewController, WEPopoverContainerViewProperties, WETouchableView;

@interface WEPopoverController : NSObject <WETouchableViewDelegate>
{
    UIViewController *contentViewController;
    UIView *view;
    WETouchableView *backgroundView;
    BOOL popoverVisible;
    unsigned int popoverArrowDirection;
    id <WEPopoverControllerDelegate> delegate;
    struct CGSize popoverContentSize;
    WEPopoverContainerViewProperties *containerViewProperties;
    id <NSObject> context;
    NSArray *passthroughViews;
}

@property(copy, nonatomic) NSArray *passthroughViews; // @synthesize passthroughViews;
@property(retain, nonatomic) id <NSObject> context; // @synthesize context;
@property(retain, nonatomic) WEPopoverContainerViewProperties *containerViewProperties; // @synthesize containerViewProperties;
@property(readonly, nonatomic) UIView *view; // @synthesize view;
@property(nonatomic) id <WEPopoverControllerDelegate> delegate; // @synthesize delegate;
@property(readonly, nonatomic) unsigned int popoverArrowDirection; // @synthesize popoverArrowDirection;
@property(readonly, nonatomic, getter=isPopoverVisible) BOOL popoverVisible; // @synthesize popoverVisible;
@property(nonatomic) struct CGSize popoverContentSize; // @synthesize popoverContentSize;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController;
- (void)viewWasTouched:(id)arg1;
- (void)repositionPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned int)arg3;
- (void)presentPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned int)arg3 animated:(BOOL)arg4;
- (void)presentPopoverFromBarButtonItem:(id)arg1 permittedArrowDirections:(unsigned int)arg2 animated:(BOOL)arg3;
- (void)dismissPopoverAnimated:(BOOL)arg1;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)dealloc;
- (id)initWithContentViewController:(id)arg1;
- (id)init;
- (id)defaultContainerViewProperties;
- (struct CGRect)displayAreaForView:(id)arg1;
- (void)dismissPopoverAnimated:(BOOL)arg1 userInitiated:(BOOL)arg2;
- (void)updateBackgroundPassthroughViews;
- (void)setView:(id)arg1;
- (id)keyView;

@end

