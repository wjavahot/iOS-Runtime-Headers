/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSObject<OS_dispatch_queue>, <GKServerProxyDataUpdateDelegate>, NSXPCConnection;

@interface GKServerProxy : NSObject <GKClientProtocol> {
    NSObject<OS_dispatch_queue> *_authQueue;
    int _authState;
    NSXPCConnection *_connection;
    <GKServerProxyDataUpdateDelegate> *_dataUpdateDelegate;
    int _networkIndicatorCount;
    BOOL _networkIndicatorEnabled;
}

@property NSXPCConnection * connection;
@property <GKServerProxyDataUpdateDelegate> * dataUpdateDelegate;

+ (id)serverProxy;

- (BOOL)_isAuthenticatedWithResponse:(id)arg1;
- (void)abortChallenges:(id)arg1 handler:(id)arg2;
- (void)acceptFriendRequestsFromPlayerIDs:(id)arg1 withHandles:(id)arg2 handler:(id)arg3;
- (void)acceptGameInvite:(id)arg1 connectionData:(id)arg2 handler:(id)arg3;
- (void)acceptInviteForTurnBasedMatch:(id)arg1 handler:(id)arg2;
- (void)accountCreated:(id)arg1 playerID:(id)arg2 authenticationToken:(id)arg3 alias:(id)arg4 finished:(BOOL)arg5 handler:(id)arg6;
- (void)accountEdited:(id)arg1 alias:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 handler:(id)arg5;
- (id)accountName;
- (void)accountTypesAvailableForLinkingWithHandler:(id)arg1;
- (void)addEmail:(id)arg1 handler:(id)arg2;
- (int)authState;
- (void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 handler:(id)arg3;
- (id)authenticatedPlayerID;
- (void)authenticationCancelledWithHandler:(id)arg1;
- (void)authenticationDisabledWithHandler:(id)arg1;
- (oneway void)beginNetworkActivity;
- (void)cachePhotos:(id)arg1 handler:(id)arg2;
- (void)cancelGameInviteWithHandler:(id)arg1;
- (void)cancelOutstandingMatchRequestWithHandler:(id)arg1;
- (void)cancelRelayRequest:(id)arg1 handler:(id)arg2;
- (oneway void)challengeCompleted:(id)arg1;
- (oneway void)challengeReceived:(id)arg1;
- (void)clearBadgeCountOfType:(unsigned int)arg1;
- (void)clearBulletinsForReceivedChallenges:(id)arg1;
- (void)clearBulletinsOfType:(int)arg1 forPlayerIDs:(id)arg2;
- (void)completeTurnBasedMatch:(id)arg1 handler:(id)arg2;
- (oneway void)completedChallengeSelected:(id)arg1;
- (id)connection;
- (void)createTurnBasedGameForMatchRequest:(id)arg1 individualMessages:(id)arg2 handler:(id)arg3;
- (id)dataUpdateDelegate;
- (void)dealloc;
- (void)declineFriendRequestsFromPlayerIDs:(id)arg1 handler:(id)arg2;
- (void)declineGameInvite:(id)arg1 reason:(int)arg2 handler:(id)arg3;
- (void)declineInviteForTurnBasedMatch:(id)arg1 handler:(id)arg2;
- (void)deletePhotoWithHandler:(id)arg1;
- (void)dismissFriendRecommendations:(id)arg1 handler:(id)arg2;
- (void)dismissGameRecommendations:(id)arg1 handler:(id)arg2;
- (oneway void)endNetworkActivity;
- (void)getAcceptedGameInviteWithHandler:(id)arg1;
- (void)getAccountURLsWithHandler:(id)arg1;
- (void)getAchievementDescriptionsForGame:(id)arg1 handler:(id)arg2;
- (void)getAchievementsForGame:(id)arg1 players:(id)arg2 handler:(id)arg3;
- (void)getAchievementsLeaderboard:(id)arg1 handler:(id)arg2;
- (void)getChallengesForGame:(id)arg1 handler:(id)arg2;
- (void)getCommonFriendsForPlayer:(id)arg1 handler:(id)arg2;
- (oneway void)getCompatibilityMatrix:(id)arg1 handler:(id)arg2;
- (void)getDetailsForChallenges:(id)arg1 handler:(id)arg2;
- (void)getDetailsForTurnBasedMatchIDs:(id)arg1 includeGameData:(BOOL)arg2 handler:(id)arg3;
- (void)getFlowRateForPlayerGroup:(int)arg1 handler:(id)arg2;
- (void)getFriendRecommendationsWithHandler:(id)arg1;
- (void)getFriendRequestsWithHandler:(id)arg1;
- (void)getFriendsForPlayer:(id)arg1 handler:(id)arg2;
- (void)getGameRecommendationsWithHandler:(id)arg1;
- (void)getGamesForPlayer:(id)arg1 includeInstalled:(BOOL)arg2 handler:(id)arg3;
- (void)getGamesWithAchievementStatsForPlayer:(id)arg1 handler:(id)arg2;
- (void)getImageDataForURL:(id)arg1 handler:(id)arg2;
- (void)getImageForURL:(id)arg1 handler:(id)arg2;
- (void)getInviteSessionTokenWithHandler:(id)arg1;
- (void)getLastTurnBasedEventWithHandler:(id)arg1;
- (void)getLeaderboardsForGame:(id)arg1 player:(id)arg2 handler:(id)arg3;
- (void)getMetadataForGames:(id)arg1 handler:(id)arg2;
- (void)getOverallFlowRateWithHandler:(id)arg1;
- (void)getPlayerRatingWithHandler:(id)arg1;
- (void)getPlayerStatsForGames:(id)arg1 player:(id)arg2 handler:(id)arg3;
- (void)getPlayersForGame:(id)arg1 achievementID:(id)arg2 handler:(id)arg3;
- (void)getPlayersForGame:(id)arg1 compatibleGames:(BOOL)arg2 handler:(id)arg3;
- (void)getPlayersForGame:(id)arg1 leaderboardID:(id)arg2 handler:(id)arg3;
- (void)getPlayersForMatchRequest:(id)arg1 connectionData:(id)arg2 connectedPeers:(int)arg3 rematchID:(id)arg4 handler:(id)arg5;
- (void)getPlayersToInviteWithHandler:(id)arg1;
- (void)getProfilesForPlayerIDs:(id)arg1 pieces:(unsigned int)arg2 handler:(id)arg3;
- (void)getRecentMatchesForGame:(id)arg1 otherPlayer:(id)arg2 handler:(id)arg3;
- (void)getScoresForLeaderboard:(id)arg1 game:(id)arg2 handler:(id)arg3;
- (void)getStoreBagValuesForKeys:(id)arg1 handler:(id)arg2;
- (void)getStoreItemsForAdamIDs:(id)arg1 handler:(id)arg2;
- (void)getTopGamesWithHandler:(id)arg1;
- (void)getTurnBasedMatchesWithHandler:(id)arg1;
- (void)handleBulletinResponse:(id)arg1;
- (void)handleServerError:(id)arg1;
- (BOOL)hasAuthenticatedAccount;
- (void)incrementNumberOfResponsesForService:(unsigned int)arg1 handler:(id)arg2;
- (id)init;
- (void)initiateRelayRequest:(id)arg1 handler:(id)arg2;
- (void)invitePlayers:(id)arg1 toGame:(id)arg2 handler:(id)arg3;
- (void)invitePlayersForMatchRequest:(id)arg1 onlineConnectionData:(id)arg2 nearbyConnectionData:(id)arg3 handler:(id)arg4;
- (void)issueChallenge:(id)arg1 toPlayerIDs:(id)arg2 handler:(id)arg3;
- (void)linkAccounts:(BOOL)arg1 withAuthToken:(id)arg2 forService:(unsigned int)arg3 mayAskAgainLater:(BOOL)arg4 handler:(id)arg5;
- (void)markFriendRecommendations:(id)arg1 viewed:(BOOL)arg2 handler:(id)arg3;
- (void)markGameRecommendations:(id)arg1 viewed:(BOOL)arg2 handler:(id)arg3;
- (void)nearbyInviteWasCancelled:(id)arg1;
- (void)openSettings;
- (void)presentNearbyInvite:(id)arg1;
- (oneway void)receivedChallengeSelected:(id)arg1;
- (oneway void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)removeFriend:(id)arg1 handler:(id)arg2;
- (void)removeGameForBundleID:(id)arg1 handler:(id)arg2;
- (void)removePlayersFromGameInvite:(id)arg1 handler:(id)arg2;
- (void)removeTurnBasedMatch:(id)arg1 handler:(id)arg2;
- (void)resetAchievementsWithHandler:(id)arg1;
- (oneway void)resetNetworkActivity;
- (void)resignFromTurnBasedGame:(id)arg1 outcome:(unsigned int)arg2 handler:(id)arg3;
- (oneway void)respondedToNearbyInvite:(id)arg1;
- (void)saveDataForTurnBasedMatch:(id)arg1 handler:(id)arg2;
- (void)sendFriendRequestToPlayerIDs:(id)arg1 emailAddresses:(id)arg2 aliases:(id)arg3 twitterScreenNames:(id)arg4 facebookIDs:(id)arg5 message:(id)arg6 rid:(id)arg7 handler:(id)arg8;
- (void)sendReconnectInvitation:(id)arg1 playerID:(id)arg2 connectionData:(id)arg3 sessionToken:(id)arg4 pushToken:(id)arg5 handler:(id)arg6;
- (BOOL)setAuthState:(int)arg1;
- (oneway void)setBadgeCount:(unsigned int)arg1 forType:(unsigned int)arg2;
- (void)setConnection:(id)arg1;
- (void)setDataUpdateDelegate:(id)arg1;
- (void)setDefaultLeaderboard:(id)arg1 handler:(id)arg2;
- (void)setNearbyMultiplayerOverride:(id)arg1;
- (void)setPhotoData:(id)arg1 handler:(id)arg2;
- (void)setStatus:(id)arg1 handler:(id)arg2;
- (void)setupAccountForParameters:(id)arg1 handler:(id)arg2;
- (void)shouldAskToLinkAccountsForService:(unsigned int)arg1 handler:(id)arg2;
- (void)signOutPlayerWithHandler:(id)arg1;
- (void)startGameWithChallenge:(id)arg1;
- (void)submitAWDMetrics:(id)arg1;
- (void)submitAchievements:(id)arg1 handler:(id)arg2;
- (void)submitRating:(float)arg1 forGame:(id)arg2 handler:(id)arg3;
- (void)submitScores:(id)arg1 handler:(id)arg2;
- (void)submitTurnForTurnBasedMatch:(id)arg1 nextParticipantIndexes:(id)arg2 turnTimeout:(double)arg3 handler:(id)arg4;
- (void)terminateDaemon;
- (void)updateCacheWithNearbyProfileDictionary:(id)arg1;
- (void)updateContactsWithHandler:(id)arg1;
- (void)updateLinkedAccountsForService:(unsigned int)arg1 withAuthToken:(id)arg2 handler:(id)arg3;
- (void)updateNotificationTopics;
- (void)updateRelayRequest:(id)arg1 handler:(id)arg2;
- (void)validateAccountWithPassword:(id)arg1 handler:(id)arg2;

@end
