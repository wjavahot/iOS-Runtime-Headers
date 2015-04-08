/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSArray, NSPredicate, NSString;

@interface PHFetchOptions : NSObject <NSCopying> {
    int _cacheSizeForFetch;
    int _chunkSizeForFetch;
    NSArray *_customObjectIDSortOrder;
    unsigned int _fetchLimit;
    unsigned int _fetchPropertyHint;
    BOOL _forceIncludeCloudSharedAssets;
    BOOL _forceIncludeiTunesSyncAssets;
    BOOL _hasIncludeCloudSharedAssetsOverride;
    BOOL _includeAllBurstAssets;
    BOOL _includeDuplicateAssets;
    BOOL _includeHiddenAssets;
    BOOL _includeWallpaperAssets;
    NSPredicate *_internalPredicate;
    NSArray *_internalSortDescriptors;
    NSPredicate *_predicate;
    BOOL _reverseSortOrder;
    NSArray *_sortDescriptors;
    NSString *_transientIdentifier;
    BOOL _wantsIncrementalChangeDetails;
}

@property int cacheSizeForFetch;
@property int chunkSizeForFetch;
@property(retain) NSArray * customObjectIDSortOrder;
@property unsigned int fetchLimit;
@property unsigned int fetchPropertyHint;
@property BOOL forceIncludeCloudSharedAssets;
@property BOOL forceIncludeiTunesSyncAssets;
@property(readonly) BOOL hasIncludeCloudSharedAssetsOverride;
@property BOOL includeAllBurstAssets;
@property BOOL includeDuplicateAssets;
@property BOOL includeHiddenAssets;
@property BOOL includeWallpaperAssets;
@property(retain) NSPredicate * internalPredicate;
@property(retain) NSArray * internalSortDescriptors;
@property(retain) NSPredicate * predicate;
@property BOOL reverseSortOrder;
@property(retain) NSArray * sortDescriptors;
@property(retain) NSString * transientIdentifier;
@property BOOL wantsIncrementalChangeDetails;

+ (id)fetchOptionsWithInclusiveDefaults;
+ (id)pu_standardFetchOptions;

- (void).cxx_destruct;
- (int)cacheSizeForFetch;
- (int)chunkSizeForFetch;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customObjectIDSortOrder;
- (id)description;
- (unsigned int)fetchLimit;
- (unsigned int)fetchPropertyHint;
- (BOOL)forceIncludeCloudSharedAssets;
- (BOOL)forceIncludeiTunesSyncAssets;
- (BOOL)hasIncludeCloudSharedAssetsOverride;
- (BOOL)includeAllBurstAssets;
- (BOOL)includeDuplicateAssets;
- (BOOL)includeHiddenAssets;
- (BOOL)includeWallpaperAssets;
- (id)init;
- (id)internalPredicate;
- (id)internalSortDescriptors;
- (id)predicate;
- (BOOL)reverseSortOrder;
- (void)setCacheSizeForFetch:(int)arg1;
- (void)setChunkSizeForFetch:(int)arg1;
- (void)setCustomObjectIDSortOrder:(id)arg1;
- (void)setFetchLimit:(unsigned int)arg1;
- (void)setFetchPropertyHint:(unsigned int)arg1;
- (void)setForceIncludeCloudSharedAssets:(BOOL)arg1;
- (void)setForceIncludeiTunesSyncAssets:(BOOL)arg1;
- (void)setIncludeAllBurstAssets:(BOOL)arg1;
- (void)setIncludeDuplicateAssets:(BOOL)arg1;
- (void)setIncludeHiddenAssets:(BOOL)arg1;
- (void)setIncludeWallpaperAssets:(BOOL)arg1;
- (void)setInternalPredicate:(id)arg1;
- (void)setInternalSortDescriptors:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setReverseSortOrder:(BOOL)arg1;
- (void)setSortDescriptors:(id)arg1;
- (void)setTransientIdentifier:(id)arg1;
- (void)setWantsIncrementalChangeDetails:(BOOL)arg1;
- (id)sortDescriptors;
- (id)transientIdentifier;
- (BOOL)wantsIncrementalChangeDetails;

@end