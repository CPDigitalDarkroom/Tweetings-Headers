//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFSliderViewController.h"

@class AFModule;

@interface AFSharpnessViewController : AFSliderViewController
{
    AFModule *_module;
}

+ (id)customizationKeyPath;
+ (Class)processorClass;
@property(readonly, nonatomic) AFModule *module; // @synthesize module=_module;
- (void).cxx_destruct;
- (BOOL)supportsViewOriginalWithTouch;
- (void)adjustProcessorWithValue:(float)arg1;
- (void)viewDidAppear:(BOOL)arg1;

@end
