/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDClientContext, NSString, PQLConnection;

@interface CKDKeyValueDiskCache : NSObject {
    CKDClientContext *_context;
    PQLConnection *_db;
    double _expirationTimeout;
    NSString *_identifier;
}

@property CKDClientContext * context;
@property(retain) PQLConnection * db;
@property double expirationTimeout;
@property(retain) NSString * identifier;

- (void).cxx_destruct;
- (void)_garbageCollectExpiredEntries;
- (id)cachedValueForKey:(id)arg1;
- (id)context;
- (id)db;
- (id)dbPath;
- (void)dealloc;
- (void)deleteCachedValuesBecauseOfLowDisk;
- (double)expirationTimeout;
- (long)expirationTimeoutAsTime;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 context:(id)arg2;
- (void)removeCachedValueForKey:(id)arg1;
- (void)setCachedValue:(id)arg1 forKey:(id)arg2;
- (void)setContext:(id)arg1;
- (void)setDb:(id)arg1;
- (void)setExpirationTimeout:(double)arg1;
- (void)setIdentifier:(id)arg1;
- (BOOL)setupCacheWithError:(id*)arg1;

@end
