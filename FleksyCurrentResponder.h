//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, UIResponder<UITextInput>;

@interface FleksyCurrentResponder : NSObject
{
    NSMutableArray *_responders;
}

+ (id)sharedCurrentResponder;
- (void).cxx_destruct;
@property(readonly) BOOL isCurrentResponderSupported;
- (BOOL)shouldEnableCustomViewSupport;
- (BOOL)isResponderClassSupported:(id)arg1;
- (BOOL)isResponderSupported:(id)arg1;
@property(readonly) UIResponder<UITextInput> *currentResponder;
- (void)notifyResponderDidResign:(id)arg1;
- (void)notifyResponderBecameActive:(id)arg1;
- (void)responderDidResign:(id)arg1;
- (void)responderBecameActive:(id)arg1;
- (void)handleNotification:(id)arg1;
- (void)handleEndedEditing:(id)arg1;
- (void)handleBeganEditing:(id)arg1;
- (id)init;

@end

