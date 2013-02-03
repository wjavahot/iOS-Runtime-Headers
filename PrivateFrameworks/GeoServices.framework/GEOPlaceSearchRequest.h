/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOBusinessOptions, GEOLatLng, GEOLocation, GEOSearchSubstring, NSMutableArray, GEOAddress, NSString, GEOMapRegion, GEOIndexQueryNode, NSData;

@interface GEOPlaceSearchRequest : PBRequest {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    struct { 
        unsigned long long *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        long long *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        unsigned int sessionGUID : 1; 
        unsigned int distanceTraveled : 1; 
        unsigned int geoId : 1; 
        unsigned int intersectingGeoId : 1; 
        unsigned int timeSinceMapEnteredForeground : 1; 
        unsigned int timeSinceMapViewportChanged : 1; 
        unsigned int timestamp : 1; 
        unsigned int businessSortOrder : 1; 
        unsigned int localSearchProviderID : 1; 
        unsigned int maxBusinessReviews : 1; 
        unsigned int maxResults : 1; 
        unsigned int resultOffset : 1; 
        unsigned int sequenceNumber : 1; 
        unsigned int sessionID : 1; 
        unsigned int allowABTestResponse : 1; 
        unsigned int excludeAddressInResults : 1; 
        unsigned int includeBusinessCategories : 1; 
        unsigned int includeBusinessRating : 1; 
        unsigned int includeEntryPoints : 1; 
        unsigned int includeFeatureSets : 1; 
        unsigned int includeGeoId : 1; 
        unsigned int includePhonetics : 1; 
        unsigned int includeQuads : 1; 
        unsigned int includeStatusCodeInfo : 1; 
        unsigned int includeSuggestionsOnly : 1; 
        unsigned int includeUnmatchedStrings : 1; 
        unsigned int isFromAPI : 1; 
        unsigned int isStrictMapRegion : 1; 
        unsigned int structuredSearch : 1; 
        unsigned int suppressResultsRequiringAttribution : 1; 
    GEOAddress *_address;
    BOOL _allowABTestResponse;
    } _businessIDs;
    GEOBusinessOptions *_businessOptions;
    int _businessSortOrder;
    NSString *_deviceCountryCode;
    GEOLatLng *_deviceLocation;
    double _distanceTraveled;
    BOOL _excludeAddressInResults;
    NSMutableArray *_filterByBusinessCategorys;
    long long _geoId;
    } _has;
    } _includeAdditionalPlaceTypes;
    BOOL _includeBusinessCategories;
    BOOL _includeBusinessRating;
    BOOL _includeEntryPoints;
    BOOL _includeFeatureSets;
    BOOL _includeGeoId;
    BOOL _includePhonetics;
    BOOL _includeQuads;
    BOOL _includeStatusCodeInfo;
    BOOL _includeSuggestionsOnly;
    BOOL _includeUnmatchedStrings;
    GEOIndexQueryNode *_indexFilter;
    NSString *_inputLanguage;
    unsigned long long _intersectingGeoId;
    BOOL _isFromAPI;
    BOOL _isStrictMapRegion;
    int _localSearchProviderID;
    GEOLocation *_location;
    GEOMapRegion *_mapRegion;
    int _maxBusinessReviews;
    int _maxResults;
    NSString *_phoneticLocaleIdentifier;
    } _placeIDs;
    GEOAddress *_preserveFields;
    int _resultOffset;
    NSString *_search;
    NSString *_searchContext;
    GEOSearchSubstring *_searchContextSubstring;
    NSMutableArray *_searchSubstrings;
    int _sequenceNumber;
    NSMutableArray *_serviceTags;
    } _sessionGUID;
    int _sessionID;
    BOOL _structuredSearch;
    NSString *_suggestionsPrefix;
    BOOL _suppressResultsRequiringAttribution;
    double _timeSinceMapEnteredForeground;
    double _timeSinceMapViewportChanged;
    double _timestamp;
    NSData *_zilchPoints;
}

@property(retain) GEOAddress * address;
@property BOOL allowABTestResponse;
@property(readonly) unsigned long long* businessIDs;
@property(readonly) unsigned int businessIDsCount;
@property(retain) GEOBusinessOptions * businessOptions;
@property int businessSortOrder;
@property(retain) NSString * deviceCountryCode;
@property(retain) GEOLatLng * deviceLocation;
@property double distanceTraveled;
@property BOOL excludeAddressInResults;
@property(retain) NSMutableArray * filterByBusinessCategorys;
@property long long geoId;
@property(readonly) BOOL hasAddress;
@property BOOL hasAllowABTestResponse;
@property(readonly) BOOL hasBusinessOptions;
@property BOOL hasBusinessSortOrder;
@property(readonly) BOOL hasDeviceCountryCode;
@property(readonly) BOOL hasDeviceLocation;
@property BOOL hasDistanceTraveled;
@property BOOL hasExcludeAddressInResults;
@property BOOL hasGeoId;
@property BOOL hasIncludeBusinessCategories;
@property BOOL hasIncludeBusinessRating;
@property BOOL hasIncludeEntryPoints;
@property BOOL hasIncludeFeatureSets;
@property BOOL hasIncludeGeoId;
@property BOOL hasIncludePhonetics;
@property BOOL hasIncludeQuads;
@property BOOL hasIncludeStatusCodeInfo;
@property BOOL hasIncludeSuggestionsOnly;
@property BOOL hasIncludeUnmatchedStrings;
@property(readonly) BOOL hasIndexFilter;
@property(readonly) BOOL hasInputLanguage;
@property BOOL hasIntersectingGeoId;
@property BOOL hasIsFromAPI;
@property BOOL hasIsStrictMapRegion;
@property BOOL hasLocalSearchProviderID;
@property(readonly) BOOL hasLocation;
@property(readonly) BOOL hasMapRegion;
@property BOOL hasMaxBusinessReviews;
@property BOOL hasMaxResults;
@property(readonly) BOOL hasPhoneticLocaleIdentifier;
@property(readonly) BOOL hasPreserveFields;
@property BOOL hasResultOffset;
@property(readonly) BOOL hasSearch;
@property(readonly) BOOL hasSearchContext;
@property(readonly) BOOL hasSearchContextSubstring;
@property BOOL hasSequenceNumber;
@property BOOL hasSessionGUID;
@property BOOL hasSessionID;
@property BOOL hasStructuredSearch;
@property(readonly) BOOL hasSuggestionsPrefix;
@property BOOL hasSuppressResultsRequiringAttribution;
@property BOOL hasTimeSinceMapEnteredForeground;
@property BOOL hasTimeSinceMapViewportChanged;
@property BOOL hasTimestamp;
@property(readonly) BOOL hasZilchPoints;
@property(readonly) int* includeAdditionalPlaceTypes;
@property(readonly) unsigned int includeAdditionalPlaceTypesCount;
@property BOOL includeBusinessCategories;
@property BOOL includeBusinessRating;
@property BOOL includeEntryPoints;
@property BOOL includeFeatureSets;
@property BOOL includeGeoId;
@property BOOL includePhonetics;
@property BOOL includeQuads;
@property BOOL includeStatusCodeInfo;
@property BOOL includeSuggestionsOnly;
@property BOOL includeUnmatchedStrings;
@property(retain) GEOIndexQueryNode * indexFilter;
@property(retain) NSString * inputLanguage;
@property unsigned long long intersectingGeoId;
@property BOOL isFromAPI;
@property BOOL isStrictMapRegion;
@property int localSearchProviderID;
@property(retain) GEOLocation * location;
@property(retain) GEOMapRegion * mapRegion;
@property int maxBusinessReviews;
@property int maxResults;
@property(retain) NSString * phoneticLocaleIdentifier;
@property(readonly) long long* placeIDs;
@property(readonly) unsigned int placeIDsCount;
@property(retain) GEOAddress * preserveFields;
@property int resultOffset;
@property(retain) NSString * search;
@property(retain) NSString * searchContext;
@property(retain) GEOSearchSubstring * searchContextSubstring;
@property(retain) NSMutableArray * searchSubstrings;
@property int sequenceNumber;
@property(retain) NSMutableArray * serviceTags;
@property struct { unsigned long long x1; unsigned long long x2; } sessionGUID;
@property int sessionID;
@property BOOL structuredSearch;
@property(retain) NSString * suggestionsPrefix;
@property BOOL suppressResultsRequiringAttribution;
@property double timeSinceMapEnteredForeground;
@property double timeSinceMapViewportChanged;
@property double timestamp;
@property(retain) NSData * zilchPoints;

- (void)_applyDeviceLocation;
- (void)_setCLClientLocation:(const struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; }*)arg1;
- (void)addBusinessID:(unsigned long long)arg1;
- (void)addFilterByBusinessCategory:(id)arg1;
- (void)addIncludeAdditionalPlaceType:(int)arg1;
- (void)addPlaceID:(long long)arg1;
- (void)addSearchSubstring:(id)arg1;
- (void)addServiceTag:(id)arg1;
- (id)address;
- (BOOL)allowABTestResponse;
- (unsigned long long)businessIDAtIndex:(unsigned int)arg1;
- (unsigned long long*)businessIDs;
- (unsigned int)businessIDsCount;
- (id)businessOptions;
- (int)businessSortOrder;
- (void)clearBusinessIDs;
- (void)clearFilterByBusinessCategorys;
- (void)clearIncludeAdditionalPlaceTypes;
- (void)clearPlaceIDs;
- (void)clearSearchSubstrings;
- (void)clearServiceTags;
- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceCountryCode;
- (id)deviceLocation;
- (id)dictionaryRepresentation;
- (double)distanceTraveled;
- (BOOL)excludeAddressInResults;
- (id)filterByBusinessCategoryAtIndex:(unsigned int)arg1;
- (id)filterByBusinessCategorys;
- (unsigned int)filterByBusinessCategorysCount;
- (long long)geoId;
- (BOOL)hasAddress;
- (BOOL)hasAllowABTestResponse;
- (BOOL)hasBusinessOptions;
- (BOOL)hasBusinessSortOrder;
- (BOOL)hasDeviceCountryCode;
- (BOOL)hasDeviceLocation;
- (BOOL)hasDistanceTraveled;
- (BOOL)hasExcludeAddressInResults;
- (BOOL)hasGeoId;
- (BOOL)hasIncludeBusinessCategories;
- (BOOL)hasIncludeBusinessRating;
- (BOOL)hasIncludeEntryPoints;
- (BOOL)hasIncludeFeatureSets;
- (BOOL)hasIncludeGeoId;
- (BOOL)hasIncludePhonetics;
- (BOOL)hasIncludeQuads;
- (BOOL)hasIncludeStatusCodeInfo;
- (BOOL)hasIncludeSuggestionsOnly;
- (BOOL)hasIncludeUnmatchedStrings;
- (BOOL)hasIndexFilter;
- (BOOL)hasInputLanguage;
- (BOOL)hasIntersectingGeoId;
- (BOOL)hasIsFromAPI;
- (BOOL)hasIsStrictMapRegion;
- (BOOL)hasLocalSearchProviderID;
- (BOOL)hasLocation;
- (BOOL)hasMapRegion;
- (BOOL)hasMaxBusinessReviews;
- (BOOL)hasMaxResults;
- (BOOL)hasPhoneticLocaleIdentifier;
- (BOOL)hasPreserveFields;
- (BOOL)hasResultOffset;
- (BOOL)hasSearch;
- (BOOL)hasSearchContext;
- (BOOL)hasSearchContextSubstring;
- (BOOL)hasSequenceNumber;
- (BOOL)hasSessionGUID;
- (BOOL)hasSessionID;
- (BOOL)hasStructuredSearch;
- (BOOL)hasSuggestionsPrefix;
- (BOOL)hasSuppressResultsRequiringAttribution;
- (BOOL)hasTimeSinceMapEnteredForeground;
- (BOOL)hasTimeSinceMapViewportChanged;
- (BOOL)hasTimestamp;
- (BOOL)hasZilchPoints;
- (unsigned int)hash;
- (int)includeAdditionalPlaceTypeAtIndex:(unsigned int)arg1;
- (int*)includeAdditionalPlaceTypes;
- (unsigned int)includeAdditionalPlaceTypesCount;
- (BOOL)includeBusinessCategories;
- (BOOL)includeBusinessRating;
- (BOOL)includeEntryPoints;
- (BOOL)includeFeatureSets;
- (BOOL)includeGeoId;
- (BOOL)includePhonetics;
- (BOOL)includeQuads;
- (BOOL)includeStatusCodeInfo;
- (BOOL)includeSuggestionsOnly;
- (BOOL)includeUnmatchedStrings;
- (id)indexFilter;
- (id)inputLanguage;
- (unsigned long long)intersectingGeoId;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFromAPI;
- (BOOL)isStrictMapRegion;
- (int)localSearchProviderID;
- (id)location;
- (id)mapRegion;
- (int)maxBusinessReviews;
- (int)maxResults;
- (id)phoneticLocaleIdentifier;
- (long long)placeIDAtIndex:(unsigned int)arg1;
- (long long*)placeIDs;
- (unsigned int)placeIDsCount;
- (id)preserveFields;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (int)resultOffset;
- (id)search;
- (id)searchContext;
- (id)searchContextSubstring;
- (id)searchSubstringAtIndex:(unsigned int)arg1;
- (id)searchSubstrings;
- (unsigned int)searchSubstringsCount;
- (int)sequenceNumber;
- (id)serviceTagAtIndex:(unsigned int)arg1;
- (id)serviceTags;
- (unsigned int)serviceTagsCount;
- (struct { unsigned long long x1; unsigned long long x2; })sessionGUID;
- (int)sessionID;
- (void)setAddress:(id)arg1;
- (void)setAllowABTestResponse:(BOOL)arg1;
- (void)setBusinessIDs:(unsigned long long*)arg1 count:(unsigned int)arg2;
- (void)setBusinessOptions:(id)arg1;
- (void)setBusinessSortOrder:(int)arg1;
- (void)setDeviceCountryCode:(id)arg1;
- (void)setDeviceLocation:(id)arg1;
- (void)setDistanceTraveled:(double)arg1;
- (void)setExcludeAddressInResults:(BOOL)arg1;
- (void)setFilterByBusinessCategorys:(id)arg1;
- (void)setGeoId:(long long)arg1;
- (void)setHasAllowABTestResponse:(BOOL)arg1;
- (void)setHasBusinessSortOrder:(BOOL)arg1;
- (void)setHasDistanceTraveled:(BOOL)arg1;
- (void)setHasExcludeAddressInResults:(BOOL)arg1;
- (void)setHasGeoId:(BOOL)arg1;
- (void)setHasIncludeBusinessCategories:(BOOL)arg1;
- (void)setHasIncludeBusinessRating:(BOOL)arg1;
- (void)setHasIncludeEntryPoints:(BOOL)arg1;
- (void)setHasIncludeFeatureSets:(BOOL)arg1;
- (void)setHasIncludeGeoId:(BOOL)arg1;
- (void)setHasIncludePhonetics:(BOOL)arg1;
- (void)setHasIncludeQuads:(BOOL)arg1;
- (void)setHasIncludeStatusCodeInfo:(BOOL)arg1;
- (void)setHasIncludeSuggestionsOnly:(BOOL)arg1;
- (void)setHasIncludeUnmatchedStrings:(BOOL)arg1;
- (void)setHasIntersectingGeoId:(BOOL)arg1;
- (void)setHasIsFromAPI:(BOOL)arg1;
- (void)setHasIsStrictMapRegion:(BOOL)arg1;
- (void)setHasLocalSearchProviderID:(BOOL)arg1;
- (void)setHasMaxBusinessReviews:(BOOL)arg1;
- (void)setHasMaxResults:(BOOL)arg1;
- (void)setHasResultOffset:(BOOL)arg1;
- (void)setHasSequenceNumber:(BOOL)arg1;
- (void)setHasSessionGUID:(BOOL)arg1;
- (void)setHasSessionID:(BOOL)arg1;
- (void)setHasStructuredSearch:(BOOL)arg1;
- (void)setHasSuppressResultsRequiringAttribution:(BOOL)arg1;
- (void)setHasTimeSinceMapEnteredForeground:(BOOL)arg1;
- (void)setHasTimeSinceMapViewportChanged:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setIncludeAdditionalPlaceTypes:(int*)arg1 count:(unsigned int)arg2;
- (void)setIncludeBusinessCategories:(BOOL)arg1;
- (void)setIncludeBusinessRating:(BOOL)arg1;
- (void)setIncludeEntryPoints:(BOOL)arg1;
- (void)setIncludeFeatureSets:(BOOL)arg1;
- (void)setIncludeGeoId:(BOOL)arg1;
- (void)setIncludePhonetics:(BOOL)arg1;
- (void)setIncludeQuads:(BOOL)arg1;
- (void)setIncludeStatusCodeInfo:(BOOL)arg1;
- (void)setIncludeSuggestionsOnly:(BOOL)arg1;
- (void)setIncludeUnmatchedStrings:(BOOL)arg1;
- (void)setIndexFilter:(id)arg1;
- (void)setInputLanguage:(id)arg1;
- (void)setIntersectingGeoId:(unsigned long long)arg1;
- (void)setIsFromAPI:(BOOL)arg1;
- (void)setIsStrictMapRegion:(BOOL)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (void)setLocation:(id)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setMaxBusinessReviews:(int)arg1;
- (void)setMaxResults:(int)arg1;
- (void)setPhoneticLocaleIdentifier:(id)arg1;
- (void)setPlaceIDs:(long long*)arg1 count:(unsigned int)arg2;
- (void)setPreserveFields:(id)arg1;
- (void)setResultOffset:(int)arg1;
- (void)setSearch:(id)arg1;
- (void)setSearchContext:(id)arg1;
- (void)setSearchContextSubstring:(id)arg1;
- (void)setSearchSubstrings:(id)arg1;
- (void)setSequenceNumber:(int)arg1;
- (void)setServiceTags:(id)arg1;
- (void)setSessionGUID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSessionID:(int)arg1;
- (void)setStructuredSearch:(BOOL)arg1;
- (void)setSuggestionsPrefix:(id)arg1;
- (void)setSuppressResultsRequiringAttribution:(BOOL)arg1;
- (void)setTimeSinceMapEnteredForeground:(double)arg1;
- (void)setTimeSinceMapViewportChanged:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setZilchPoints:(id)arg1;
- (BOOL)structuredSearch;
- (id)suggestionsPrefix;
- (BOOL)suppressResultsRequiringAttribution;
- (double)timeSinceMapEnteredForeground;
- (double)timeSinceMapViewportChanged;
- (double)timestamp;
- (void)writeTo:(id)arg1;
- (id)zilchPoints;

@end
