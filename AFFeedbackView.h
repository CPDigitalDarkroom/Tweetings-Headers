//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFAboutView.h"

@interface AFFeedbackView : AFAboutView
{
    id <AFFeedbackViewDelegate> _feedbackDelegate;
}

@property(nonatomic) __weak id <AFFeedbackViewDelegate> feedbackDelegate; // @synthesize feedbackDelegate=_feedbackDelegate;
- (void).cxx_destruct;
- (void)actionButtonPressed;
- (id)actionButtonText;
- (id)aboutText;

@end

