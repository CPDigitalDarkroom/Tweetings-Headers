//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableString, NSString;

@interface NTLNTrendDefinitionXMLReader : NSObject
{
    NSMutableString *currentStringValue;
    BOOL blurbTagChild;
    BOOL readText;
    NSString *definition;
}

@property(readonly) NSString *definition; // @synthesize definition;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)dealloc;
- (void)parseXMLData:(id)arg1;

@end

