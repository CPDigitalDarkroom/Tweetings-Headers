//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UITextViewDelegate.h"

@class NSMutableArray, NSMutableString, NSObject<UITextViewDelegate>, NSString, UIImageView, UITextView, UIView;

@interface NTLNTweetPostView : UIScrollView <UITextViewDelegate>
{
    UIScrollView *scrollView;
    UITextView *textView;
    UIView *quoteView;
    NSString *orientation;
    NSObject<UITextViewDelegate> *textViewDelegate;
    struct _NSRange cursorPosition;
    BOOL acEnable;
    BOOL acHashEnable;
    NSMutableString *acSearch;
    struct sqlite3 *database;
    NSMutableArray *users;
    NSMutableArray *filteredUsers;
    NSMutableArray *hash;
    NSMutableArray *filteredHash;
    UIScrollView *autoCompeteView;
    UIImageView *borderLeft;
    UIImageView *borderRight;
    UIImageView *pull;
}

@property(retain, nonatomic) NSMutableArray *filteredHash; // @synthesize filteredHash;
@property(retain, nonatomic) NSMutableArray *hash; // @synthesize hash;
@property(retain) UIScrollView *scrollView; // @synthesize scrollView;
@property(retain, nonatomic) UIScrollView *autoCompeteView; // @synthesize autoCompeteView;
@property(retain, nonatomic) NSMutableArray *filteredUsers; // @synthesize filteredUsers;
@property(retain, nonatomic) NSMutableArray *users; // @synthesize users;
@property(nonatomic) BOOL acHashEnable; // @synthesize acHashEnable;
@property(nonatomic) BOOL acEnable; // @synthesize acEnable;
@property(retain, nonatomic) NSMutableString *acSearch; // @synthesize acSearch;
@property struct _NSRange cursorPosition; // @synthesize cursorPosition;
@property(retain) NSObject<UITextViewDelegate> *textViewDelegate; // @synthesize textViewDelegate;
@property(retain) NSString *orientation; // @synthesize orientation;
@property(readonly) UIView *quoteView; // @synthesize quoteView;
@property(readonly) UITextView *textView; // @synthesize textView;
- (void)filterContentForHash:(id)arg1;
- (void)filterContentForUser:(id)arg1;
- (void)loadHashArchive;
- (void)loadArchive;
- (void)reloadAutocomplete;
- (void)selectUser:(id)arg1;
- (void)refreshFollowing:(id)arg1;
- (void)selectHash:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)beginAutocomplete:(BOOL)arg1;
- (void)showReloadBar;
- (void)updateQuoteView;
- (void)dealloc;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)becomeResponder;
- (void)drawRect:(struct CGRect)arg1;
- (void)layout;
- (void)removeAc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

