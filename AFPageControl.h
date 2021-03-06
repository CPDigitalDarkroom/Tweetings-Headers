//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFView.h"

@class NSMutableArray, UIColor, UIImage;

@interface AFPageControl : AFView
{
    BOOL _showsSinglePage;
    unsigned int _numberOfPages;
    unsigned int _currentPage;
    float _dotRadius;
    float _dotPadding;
    UIColor *_selectedPageColor;
    UIColor *_unselectedPageColor;
    NSMutableArray *_dotImageViews;
    UIImage *_activePageImage;
    UIImage *_defaultPageImage;
}

@property(retain, nonatomic) UIImage *defaultPageImage; // @synthesize defaultPageImage=_defaultPageImage;
@property(retain, nonatomic) UIImage *activePageImage; // @synthesize activePageImage=_activePageImage;
@property(retain, nonatomic) NSMutableArray *dotImageViews; // @synthesize dotImageViews=_dotImageViews;
@property(retain, nonatomic) UIColor *unselectedPageColor; // @synthesize unselectedPageColor=_unselectedPageColor;
@property(retain, nonatomic) UIColor *selectedPageColor; // @synthesize selectedPageColor=_selectedPageColor;
@property(nonatomic) float dotPadding; // @synthesize dotPadding=_dotPadding;
@property(nonatomic) float dotRadius; // @synthesize dotRadius=_dotRadius;
@property(nonatomic) BOOL showsSinglePage; // @synthesize showsSinglePage=_showsSinglePage;
@property(nonatomic) unsigned int currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) unsigned int numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)prepareView;

@end

