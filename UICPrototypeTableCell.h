//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface UICPrototypeTableCell : NSObject
{
    NSString *title;
    NSString *userDefaultsKey;
}

+ (id)cellsForTitles:(id)arg1;
+ (id)cellForSoundSelect:(id)arg1 withSelectTitles:(id)arg2 withSelectAudio:(id)arg3 withUserDefaultsKey:(id)arg4;
+ (id)cellForSoundSelect:(id)arg1 withSelectTitles:(id)arg2 withSelectAudio:(id)arg3;
+ (id)cellForSelectChange:(id)arg1 withSelectTitles:(id)arg2 withUserDefaultsKey:(id)arg3;
+ (id)cellForSelectChange:(id)arg1 withSelectTitles:(id)arg2 values:(id)arg3 withUserDefaultsKey:(id)arg4;
+ (id)cellForSelectChange:(id)arg1 withSelectTitles:(id)arg2;
+ (id)cellForSelect:(id)arg1 withSelectTitles:(id)arg2 withUserDefaultsKey:(id)arg3;
+ (id)cellForSelect:(id)arg1 withSelectTitles:(id)arg2;
+ (id)cellForTextInput:(id)arg1 withPlaceholder:(id)arg2 withUserDefaultsKey:(id)arg3;
+ (id)cellForTextInput:(id)arg1 withPlaceholder:(id)arg2;
+ (id)cellForSwitch:(id)arg1 withUserDefaultsKey:(id)arg2;
+ (id)cellForSwitch:(id)arg1 withSwitch:(BOOL)arg2;
+ (id)cellForTitle:(id)arg1;
@property(readonly) NSString *title; // @synthesize title;
- (void)dealloc;
- (id)cellIdentifier;
- (id)tableCellViewWithReuseId:(id)arg1;
- (id)initWithTitle:(id)arg1;

@end

