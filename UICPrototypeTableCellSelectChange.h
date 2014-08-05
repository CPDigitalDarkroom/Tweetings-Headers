//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICPrototypeTableCell.h"

@class NSArray;

@interface UICPrototypeTableCellSelectChange : UICPrototypeTableCell
{
    NSArray *titles;
    NSArray *values;
    int selectedIndex;
}

@property(retain) NSArray *values; // @synthesize values;
@property(retain) NSArray *titles; // @synthesize titles;
- (void)dealloc;
- (int)selectedIndex;
- (void)setSelectedIndex:(int)arg1;
- (id)cellIdentifier;
- (id)tableCellViewWithReuseId:(id)arg1;
- (id)initWithTitle:(id)arg1 withSelectTitles:(id)arg2 withUserDefaultsKey:(id)arg3;
- (id)initWithTitle:(id)arg1 withSelectTitles:(id)arg2 values:(id)arg3 withUserDefaultsKey:(id)arg4;
- (id)initWithTitle:(id)arg1 withSelectTitles:(id)arg2 values:(id)arg3;

@end

