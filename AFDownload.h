//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURLRequest;

@interface AFDownload : NSObject
{
    NSString *_uniqueIdentifier;
    NSURLRequest *_request;
    NSString *_destinationPath;
}

@property(copy, nonatomic) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 destinationPath:(id)arg2;

@end
