/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSArray, SSNetworkConstraints, NSDictionary, NSSet, SSURLBagContext;

@interface ISURLBag : NSObject {
    SSURLBagContext *_context;
    SSNetworkConstraints *_defaultConstraints;
    NSDictionary *_dictionary;
    NSArray *_guidPatterns;
    NSSet *_guidSchemes;
    NSDictionary *_headerPatterns;
    double _invalidationTime;
    BOOL _loadedFromDiskCache;
}

@property(copy) SSURLBagContext * URLBagContext;
@property(readonly) NSDictionary * URLBagDictionary;
@property(readonly) NSSet * availableStorefrontItemKinds;
@property double invalidationTime;
@property BOOL loadedFromDiskCache;
@property(getter=isValid,readonly) BOOL valid;
@property(readonly) long long versionIdentifier;

+ (id)URLBagForContext:(id)arg1 wasDiskCached:(BOOL*)arg2;
+ (BOOL)_allowUnsignedBags;
+ (id)_copyFallbackContextForContext:(id)arg1;
+ (void)_loadItemKindURLBagKeyMap;
+ (void)_observeExternalChanges;
+ (void)_setURLBag:(id)arg1 forContext:(id)arg2;
+ (id)_urlBagForContext:(id)arg1;
+ (id)copyExtraHeadersForURL:(id)arg1 inBagContext:(id)arg2;
+ (id)diskCachedURLBagForContext:(id)arg1;
+ (void)invalidateAllBags;
+ (id)networkConstraintsForDownloadKind:(id)arg1 inBagContext:(id)arg2;
+ (void)setURLBag:(id)arg1 forContext:(id)arg2;
+ (BOOL)shouldSendGUIDForURL:(id)arg1 inBagContext:(id)arg2;
+ (id)storeFrontURLBagKeyForItemKind:(id)arg1;
+ (id)urlBagForContext:(id)arg1;
+ (id)urlForKey:(id)arg1 inBagContext:(id)arg2;
+ (BOOL)urlIsTrusted:(id)arg1 inBagContext:(id)arg2;
+ (id)valueForKey:(id)arg1 inBagContext:(id)arg2;

- (id)URLBagContext;
- (id)URLBagDictionary;
- (id)URLForURL:(id)arg1 clientIdentifier:(id)arg2;
- (id)_copyGUIDPatternsFromDictionary:(id)arg1;
- (id)_copyGUIDSchemesFromDictionary:(id)arg1;
- (id)_copyHeaderPatternsFromDictionary:(id)arg1;
- (BOOL)_loadFromSignedDictionary:(id)arg1 returningError:(id*)arg2;
- (id)_networkConstraintsCachePath;
- (void)_setDictionary:(id)arg1;
- (void)_writeNetworkConstraintsCacheFile;
- (void)_writeURLResolutionCacheFile;
- (id)availableStorefrontItemKinds;
- (id)copyExtraHeadersForURL:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithRawDictionary:(id)arg1;
- (id)initWithURLBagContext:(id)arg1;
- (void)invalidate;
- (double)invalidationTime;
- (BOOL)isValid;
- (BOOL)loadFromDictionary:(id)arg1 returningError:(id*)arg2;
- (BOOL)loadedFromDiskCache;
- (id)networkConstraintsForDownloadKind:(id)arg1;
- (id)sanitizedURLForURL:(id)arg1;
- (id)searchQueryParametersForClientIdentifier:(id)arg1 networkType:(int)arg2;
- (void)setInvalidationTime:(double)arg1;
- (void)setLoadedFromDiskCache:(BOOL)arg1;
- (void)setURLBagContext:(id)arg1;
- (BOOL)shouldSendGUIDForURL:(id)arg1;
- (id)urlForKey:(id)arg1;
- (BOOL)urlIsTrusted:(id)arg1;
- (id)valueForKey:(id)arg1;
- (long long)versionIdentifier;
- (BOOL)writeToFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;

@end
