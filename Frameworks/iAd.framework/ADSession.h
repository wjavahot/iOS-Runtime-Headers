/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class NSString, NSMutableDictionary, NSMutableSet;

@interface ADSession : NSObject {
    BOOL _applicationCanReceiveBackgroundAds;
    NSMutableDictionary *_bannerControllers;
    NSMutableDictionary *_bannerControllersByAdType;
    double _lastControllerCreationTime;
    NSMutableSet *_pendingOpenControllers;
    NSMutableSet *_reassignmentScheduledAdTypes;
    NSMutableDictionary *_recipientsByAdType;
    id _remoteSession;
    NSString *_serverURL;
}

@property(retain) id remoteSession;
@property(retain) NSString * serverURL;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedInstance;

- (void)_adSheetConnectionBootstrapped;
- (void)_adSheetConnectionLost;
- (void)_appDidBecomeActive;
- (void)_appWillResignActive;
- (BOOL)_createBannerControllerForRecipient:(id)arg1;
- (void)_handleAdSheetMessage:(id)arg1 userInfo:(id)arg2;
- (void)_orientationChanged;
- (void)_reassignAllBannerControllers;
- (void)_reassignBannerControllersForAdType:(id)arg1 pool:(id)arg2;
- (id)_unassignedBannerControllerForAdType:(id)arg1;
- (void)adRecipientPriorityChanged:(id)arg1;
- (BOOL)applicationStateAllowsAds;
- (id)autorelease;
- (void)bannerControllerDidClose:(id)arg1;
- (void)bannerControllerDidOpen:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)forwardShakeEventToAdSheet;
- (id)init;
- (void)registerAdRecipient:(id)arg1;
- (oneway void)release;
- (id)remoteSession;
- (id)retain;
- (unsigned int)retainCount;
- (id)serverURL;
- (void)setRemoteSession:(id)arg1;
- (void)setServerURL:(id)arg1;
- (void)unregisterAdRecipient:(id)arg1;

@end
