//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FLPBPasteboardExchangeDelegate.h"

@class FLPBPasteboardExchange, NSMutableArray, NSString;

@interface FleksyPasteboardManager : NSObject <FLPBPasteboardExchangeDelegate>
{
    NSMutableArray *_availableLanguages;
    unsigned long _jetLanguagePackFileDescriptorOffset;
    int _jetLanguagePackFileDescriptor;
    BOOL _jetLanguagePackFileDescriptorOpen;
    FLPBPasteboardExchange *_pasteboardExchange;
    NSString *_version;
    NSString *_languageToGetForInitialSwitch;
    NSString *_languageRequestInProgress;
}

- (void).cxx_destruct;
- (void)pushSettings:(id)arg1;
- (id)pullSettings;
- (void)dismissServer;
- (void)requestLanguage:(id)arg1 startOffset:(unsigned long)arg2 useOpenURL:(BOOL)arg3;
- (BOOL)requestLanguage:(id)arg1 useOpenURL:(BOOL)arg2;
- (void)pasteboardExchange:(id)arg1 didReceiveResponse:(id)arg2 forRequest:(id)arg3;
- (void)waitToRequestForLanguage;
- (void)pasteboardExchange:(id)arg1 requestDidFailWithError:(id)arg2;
- (void)requestLanguage:(id)arg1 otherResources:(BOOL)arg2;
- (BOOL)openJetLanguageFileDescriptor:(id)arg1 error:(id *)arg2;
- (void)closeJetLanguageFileDescriptor;
- (void)dealloc;
- (id)initWithVersionString:(id)arg1;

@end

