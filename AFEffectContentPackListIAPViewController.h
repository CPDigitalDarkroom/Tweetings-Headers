//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFContentPackListIAPViewController.h"

@class AFEffectContentPackThumnailGenerator;

@interface AFEffectContentPackListIAPViewController : AFContentPackListIAPViewController
{
    AFEffectContentPackThumnailGenerator *_thumbnailGenerator;
}

+ (id)typeDescriptor;
@property(retain, nonatomic) AFEffectContentPackThumnailGenerator *thumbnailGenerator; // @synthesize thumbnailGenerator=_thumbnailGenerator;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)arg1;
- (id)loadDetailViewControllerWithContentPack:(id)arg1;

@end
