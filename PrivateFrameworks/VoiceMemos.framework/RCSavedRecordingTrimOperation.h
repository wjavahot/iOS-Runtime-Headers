/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class NSString, RCSavedRecording;

@interface RCSavedRecordingTrimOperation : NSOperation {
    struct { 
        double beginTime; 
        double endTime; 
    struct { 
        double beginTime; 
        double endTime; 
    RCSavedRecording *_savedRecording;
    RCSavedRecording *_sourceRecording;
    } _timeRangeToTrim;
    BOOL _trimOriginalFile;
    NSString *_trimmedPath;
    } _trimmedTimeRange;
}

@property(readonly) RCSavedRecording * savedRecording;
@property(readonly) RCSavedRecording * sourceRecording;
@property(readonly) struct { double x1; double x2; } timeRangeToTrim;
@property(readonly) BOOL trimOriginalFile;
@property(readonly) NSString * trimmedPath;
@property(readonly) struct { double x1; double x2; } trimmedTimeRange;

+ (BOOL)_trimWaveformAtPath:(id)arg1 clipToTimeRange:(struct { double x1; double x2; })arg2 outputPath:(id)arg3;

- (void).cxx_destruct;
- (id)initWithSavedRecording:(id)arg1 timeRangeToTrim:(struct { double x1; double x2; })arg2 souceRecording:(id)arg3;
- (void)main;
- (id)savedRecording;
- (id)sourceRecording;
- (struct { double x1; double x2; })timeRangeToTrim;
- (BOOL)trimOriginalFile;
- (id)trimmedPath;
- (struct { double x1; double x2; })trimmedTimeRange;

@end