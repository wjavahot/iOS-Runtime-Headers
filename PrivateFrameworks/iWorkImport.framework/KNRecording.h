/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class KNRecordingMovieTrack, KNRecordingSyncState, NSArray, NSDate;

@interface KNRecording : TSPObject {
    double mDuration;
    NSArray *mEventTracks;
    NSDate *mModificationDate;
    KNRecordingMovieTrack *mMovieTrack;
    KNRecordingSyncState *mSyncState;
}

@property(readonly) double duration;
@property(readonly) NSArray * eventTracks;
@property(getter=isInSyncWithShow,readonly) BOOL inSyncWithShow;
@property(readonly) NSDate * modificationDate;
@property(readonly) KNRecordingMovieTrack * movieTrack;

- (void)dealloc;
- (double)duration;
- (id)eventTracks;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 eventTracks:(id)arg2 movieTrack:(id)arg3 duration:(double)arg4;
- (id)initWithContext:(id)arg1 eventTracks:(id)arg2 movieTrack:(id)arg3 duration:(double)arg4 modificationDate:(id)arg5;
- (BOOL)isInSyncWithShow;
- (id)modificationDate;
- (id)movieTrack;
- (id)recordingByMarkingAsOutOfSyncWithShow:(BOOL)arg1 withLocalOutOfSyncToken:(id)arg2 restoringModificationDate:(id)arg3;
- (id)recordingByReplacingSegmentAfterTime:(double)arg1 withRecording:(id)arg2;
- (void)saveToArchive:(struct RecordingArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct Reference {} *x6; double x7; struct Date {} *x8; struct RecordingSyncState {} *x9; int x10; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;

@end
