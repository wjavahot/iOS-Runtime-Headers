/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, GKStoreItemInternal, NSDictionary, NSNumber, GKGameInternal;

@interface GKGame : NSObject <NSCoding> {
    GKGameInternal *_internal;
    BOOL _sandboxed;
    GKStoreItemInternal *_storeItem;
}

@property(readonly) NSNumber * adamID;
@property(readonly) NSString * bundleIdentifier;
@property(readonly) NSString * bundleVersion;
@property(readonly) NSString * cacheKey;
@property(readonly) NSString * defaultCategory;
@property(getter=isDownloading,readonly) BOOL downloading;
@property(readonly) NSNumber * externalVersion;
@property(readonly) NSDictionary * gameDescriptor;
@property(readonly) struct GKGameInfo { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned int x5; unsigned int x6; unsigned int x7; } gameInfo;
@property(getter=isInstalled,readonly) BOOL installed;
@property(getter=isInternal,readonly) BOOL internal;
@property(retain) GKGameInternal * internal;
@property(readonly) NSString * name;
@property(readonly) BOOL nearbyMultiplayerEnabled;
@property(retain) NSNumber * nearbyMultiplayerOverride;
@property unsigned int platform;
@property(getter=isPrerendered) BOOL prerendered;
@property(getter=isSandboxed) BOOL sandboxed;
@property(retain) GKStoreItemInternal * storeItem;

+ (id)currentGame;
+ (id)defaultGameIconWithStyle:(int)arg1;
+ (BOOL)isGameCenter;
+ (void)loadStoreItemsForGames:(id)arg1 withCompletionHandler:(id)arg2;
+ (id)lookupMobileInstallation:(id)arg1;
+ (void)removeHistoryForGameWithBundleIdentifier:(id)arg1 completionHandler:(id)arg2;
+ (struct CGSize { float x1; float x2; })serverImageSizeForIconStyle:(int)arg1;
+ (void)updateGames:(id)arg1 withCompletionHandler:(id)arg2;

- (id)URLStringForImageWithShineIfNeeded;
- (id)_imageURLForIconStyle:(int)arg1;
- (id)cacheKey;
- (id)cachedIconForStyle:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)gameDescriptor;
- (struct GKGameInfo { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned int x5; unsigned int x6; unsigned int x7; })gameInfo;
- (void)getFriendPlayersForAchievement:(id)arg1 handler:(id)arg2;
- (void)getFriendPlayersForLeaderboard:(id)arg1 handler:(id)arg2;
- (void)getFriendPlayersIncludingCompatibleGames:(BOOL)arg1 handler:(id)arg2;
- (unsigned int)hash;
- (id)imageSourceForIconStyle:(int)arg1;
- (id)imageSourceForiOSIconStyle:(int)arg1;
- (id)init;
- (id)initWithBundleID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (BOOL)isDownloading;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isInstalled;
- (BOOL)isInternal;
- (BOOL)isSandboxed;
- (BOOL)isStoreItemUnexpired;
- (void)loadGameRatingWithCompletionHandler:(id)arg1;
- (id)loadIconForStyle:(int)arg1 withCompletionHandler:(id)arg2;
- (void)loadStoreItemWithCompletionHandler:(id)arg1;
- (void)loadTellAFriendMessageWithCompletionHandler:(id)arg1;
- (id)macBrushForIconStyle:(int)arg1;
- (BOOL)nearbyMultiplayerEnabled;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setInternal:(id)arg1;
- (void)setNearbyMultiplayerOverride:(id)arg1;
- (void)setSandboxed:(BOOL)arg1;
- (void)setStoreItem:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)storeItem;
- (void)submitRating:(float)arg1 withCompletionHandler:(id)arg2;
- (void)updateWithInternal:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end
