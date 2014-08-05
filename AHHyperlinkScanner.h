//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"

@class NSDictionary, NSString;

@interface AHHyperlinkScanner : NSObject <NSFastEnumeration>
{
    NSDictionary *m_urlSchemes;
    NSString *m_scanString;
    BOOL m_strictChecking;
    unsigned long m_scanLocation;
    unsigned long m_scanStringLength;
}

+ (BOOL)isStringValidURI:(id)arg1 usingStrict:(BOOL)arg2 fromIndex:(unsigned long *)arg3 withStatus:(int *)arg4;
+ (id)strictHyperlinkScannerWithString:(id)arg1;
+ (id)hyperlinkScannerWithString:(id)arg1;
+ (void)initialize;
- (BOOL)_scanString:(id)arg1 charactersFromSet:(id)arg2 intoRange:(struct _NSRange *)arg3 fromIndex:(unsigned long *)arg4;
- (BOOL)_scanString:(id)arg1 upToCharactersFromSet:(id)arg2 intoRange:(struct _NSRange *)arg3 fromIndex:(unsigned long *)arg4;
- (struct _NSRange)_longestBalancedEnclosureInRange:(struct _NSRange)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)setScanLocation:(unsigned int)arg1;
- (unsigned long)scanLocation;
- (id)linkifiedHTML;
- (id)allURIs;
- (id)nextURI;
- (BOOL)isValidURI;
- (void)dealloc;
- (id)initWithString:(id)arg1 usingStrictChecking:(BOOL)arg2;

@end
