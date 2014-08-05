//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSMutableDictionary, NSString;

@interface ReadItLater : NSObject
{
    id delegate;
    NSString *method;
    NSMutableDictionary *apiResponse;
    NSMutableData *requestData;
    NSString *stringResponse;
}

+ (void)signupWithUsername:(id)arg1 password:(id)arg2 delegate:(id)arg3;
+ (void)authWithUsername:(id)arg1 password:(id)arg2 delegate:(id)arg3;
+ (void)save:(id)arg1 title:(id)arg2 delegate:(id)arg3 username:(id)arg4 password:(id)arg5 statusId:(id)arg6;
+ (void)save:(id)arg1 title:(id)arg2 delegate:(id)arg3 username:(id)arg4 password:(id)arg5;
+ (void)save:(id)arg1 title:(id)arg2 delegate:(id)arg3;
+ (id)encode:(id)arg1;
@property(retain, nonatomic) NSString *stringResponse; // @synthesize stringResponse;
@property(retain, nonatomic) NSMutableData *requestData; // @synthesize requestData;
@property(retain, nonatomic) NSMutableDictionary *apiResponse; // @synthesize apiResponse;
@property(retain, nonatomic) NSString *method; // @synthesize method;
@property(nonatomic) id delegate; // @synthesize delegate;
- (void)dealloc;
- (void)done;
- (void)finishConnection;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)sendRequest:(id)arg1 username:(id)arg2 password:(id)arg3 params:(id)arg4;

@end

