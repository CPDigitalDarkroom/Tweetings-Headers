//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICPrototypeTableCell.h"

@class NSString;

@interface UICPrototypeTableCellTextInput : UICPrototypeTableCell
{
    NSString *value;
    NSString *placeholder;
    BOOL secure;
}

@property BOOL secure; // @synthesize secure;
@property(retain) NSString *placeholder; // @synthesize placeholder;
- (void)dealloc;
- (id)value;
- (void)setValue:(id)arg1;
- (id)cellIdentifier;
- (id)tableCellViewWithReuseId:(id)arg1;
- (id)initWithTitle:(id)arg1 withUserDefaultsKey:(id)arg2;

@end

