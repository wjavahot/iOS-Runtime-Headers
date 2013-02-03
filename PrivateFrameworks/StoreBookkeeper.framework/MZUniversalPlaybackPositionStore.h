/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class MZUniversalPlaybackPositionSyncHandler, NSTimer, MZAsynchronousTask, <MZUniversalPlaybackPositionDataSource>, NSObject<OS_dispatch_queue>, NSDate;

@interface MZUniversalPlaybackPositionStore : NSObject {
    id _accountsObserver;
    unsigned int _automaticSynchronizeOptions;
    double _autorefreshRate;
    MZAsynchronousTask *_bagLookupTask;
    double _bagSpecifiedPollingInterval;
    <MZUniversalPlaybackPositionDataSource> *_dataSource;
    NSDate *_dateToFireNextTimer;
    BOOL _hasLocalChangesToSync;
    BOOL _initialAutosyncNeeded;
    BOOL _isActive;
    id _prefsObserver;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _refreshTimerActive;
    MZUniversalPlaybackPositionSyncHandler *_syncHandler;
    MZAsynchronousTask *_synchronizeTask;
    NSTimer *_timer;
}

@property unsigned int automaticSynchronizeOptions;
@property(retain) MZAsynchronousTask * bagLookupTask;
@property <MZUniversalPlaybackPositionDataSource> * dataSource;
@property(retain) NSDate * dateToFireNextTimer;
@property BOOL hasLocalChangesToSync;
@property(retain) MZUniversalPlaybackPositionSyncHandler * syncHandler;
@property(retain) MZAsynchronousTask * synchronizeTask;
@property(retain) NSTimer * timer;

+ (id)keyValueStoreItemIdentifierForItem:(id)arg1;

- (id)_accountForSyncing;
- (BOOL)_automaticallySynchronizeLocalChangesOnResignActive;
- (BOOL)_automaticallySynchronizeOnBecomeActive;
- (void)_debugDisplayEntireBagDictionary:(id)arg1;
- (double)_effectiveAutorefreshRate;
- (void)_onQueueLoadBagContextWithCompletionHandler:(id)arg1;
- (void)_onQueueResumeTimer;
- (void)_onQueueScheduleTimer;
- (void)_onQueueStartNewTimer;
- (void)_onQueueStartNewTimerWithTimeIntervalSinceNow:(double)arg1;
- (void)_onQueueStopTimer;
- (void)_onQueueSuspendTimer;
- (void)_onQueueSynchronizeImmediatelyWithCompletionBlock:(id)arg1;
- (void)_onQueueSynchronizeWithAutosynchronizeMask:(unsigned int)arg1 withCompletionBlock:(id)arg2;
- (void)_onQueueUpdateTimerForActiveChanges;
- (void)_onQueueUpdateTimerForAutomaticSyncOptionChanges;
- (void)_timerFired:(id)arg1;
- (BOOL)_timerIsStopped;
- (void)_updateAutorefreshRateSettingAndRestartTimer:(BOOL)arg1;
- (void)_updateForStoreAccountsChange;
- (void)_updateSettingsFromLoadedBagContext:(id)arg1;
- (unsigned int)automaticSynchronizeOptions;
- (BOOL)automaticallySynchronizeLocalChangesOnResignActive;
- (BOOL)automaticallySynchronizeOnBecomeActive;
- (id)bagLookupTask;
- (void)becomeActive;
- (void)checkForAvailabilityWithCompletionBlock:(id)arg1;
- (id)dataSource;
- (id)dateToFireNextTimer;
- (void)dealloc;
- (BOOL)hasLocalChangesToSync;
- (id)init;
- (id)initWithInitialUpdateDelay:(double)arg1 isActive:(BOOL)arg2;
- (id)initWithInitialUpdateDelay:(double)arg1;
- (void)resignActive;
- (void)setAutomaticSynchronizeOptions:(unsigned int)arg1;
- (void)setAutomaticallySynchronizeLocalChangesOnResignActive:(BOOL)arg1;
- (void)setAutomaticallySynchronizeOnBecomeActive:(BOOL)arg1;
- (void)setBagLookupTask:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDateToFireNextTimer:(id)arg1;
- (void)setHasLocalChangesToSync:(BOOL)arg1;
- (void)setSyncHandler:(id)arg1;
- (void)setSynchronizeTask:(id)arg1;
- (void)setTimer:(id)arg1;
- (id)syncHandler;
- (void)synchronizeImmediatelyWithCompletionBlock:(id)arg1;
- (void)synchronizeImmedietlyWithCompletionBlock:(id)arg1;
- (id)synchronizeTask;
- (id)timer;

@end
