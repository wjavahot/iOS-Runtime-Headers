/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSArray, <ISUpdateQueueDelegate>, NSString;

@interface ISUpdateQueue : NSObject {
    NSInteger _checkQueueCount;
    <ISUpdateQueueDelegate> *_delegate;
    NSString *_identifier;
    NSInteger _loadingCount;
    NSInteger _state;
    NSArray *_updates;
}

@property(retain) NSArray *updates; /* unknown property attribute: V_updates */
@property NSInteger state; /* unknown property attribute: V_state */
@property(copy) NSString *identifier; /* unknown property attribute: V_identifier */
@property <ISUpdateQueueDelegate> *delegate; /* unknown property attribute: V_delegate */

+ (void)_externalApplicationChange:(id)arg1;
+ (void)setWatchesForExternalChanges:(BOOL)arg1;

- (void)_beginLoading;
- (void)_daemonExited:(id)arg1;
- (void)_endLoadingWithState:(NSInteger)arg1;
- (void)_mainThreadDaemonExited:(id)arg1;
- (void)_registerWithDaemon;
- (void)_sendErrorToDelegate:(id)arg1;
- (void)_updateCheckFailed:(id)arg1;
- (void)_updatesChanged:(id)arg1;
- (BOOL)checkQueue;
- (void)dealloc;
- (id)delegate;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setState:(NSInteger)arg1;
- (void)setUpdates:(id)arg1;
- (NSInteger)state;
- (id)updates;

@end