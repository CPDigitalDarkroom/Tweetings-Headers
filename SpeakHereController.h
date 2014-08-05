//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AQLevelMeter, UIBarButtonItem, UILabel;

@interface SpeakHereController : NSObject
{
    UIBarButtonItem *btn_record;
    UIBarButtonItem *btn_play;
    UILabel *fileDescription;
    AQLevelMeter *lvlMeter_in;
    struct AQPlayer *player;
    struct AQRecorder *recorder;
    BOOL playbackWasInterrupted;
    BOOL playbackWasPaused;
    struct __CFString *recordFilePath;
}

@property BOOL playbackWasInterrupted; // @synthesize playbackWasInterrupted;
@property(retain, nonatomic) AQLevelMeter *lvlMeter_in; // @synthesize lvlMeter_in;
@property(retain, nonatomic) UILabel *fileDescription; // @synthesize fileDescription;
@property(retain, nonatomic) UIBarButtonItem *btn_play; // @synthesize btn_play;
@property(retain, nonatomic) UIBarButtonItem *btn_record; // @synthesize btn_record;
@property(readonly) struct AQRecorder *recorder; // @synthesize recorder;
@property(readonly) struct AQPlayer *player; // @synthesize player;
- (void)dealloc;
- (void)playbackQueueResumed:(id)arg1;
- (void)playbackQueueStopped:(id)arg1;
- (void)awakeFromNib;
- (void)record:(id)arg1;
- (void)play:(id)arg1;
- (void)stopRecord;
- (void)pausePlayQueue;
- (void)stopPlayQueue;
- (void)setFileDescriptionForFormat:(struct CAStreamBasicDescription)arg1 withName:(id)arg2;

@end

