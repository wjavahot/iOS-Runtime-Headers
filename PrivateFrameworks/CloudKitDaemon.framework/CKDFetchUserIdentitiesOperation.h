/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray;

@interface CKDFetchUserIdentitiesOperation : CKDOperation {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _fetchUserIdentityProgressBlock;

    NSArray *_identityInfos;
}

@property(copy) id fetchUserIdentityProgressBlock;
@property(retain) NSArray * identityInfos;

- (void).cxx_destruct;
- (void)_fetchInfoFromCache;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleFetchedInfo:(id)arg1 withIdentity:(id)arg2 error:(id)arg3;
- (id)fetchUserIdentityProgressBlock;
- (id)identityInfos;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (void)setFetchUserIdentityProgressBlock:(id)arg1;
- (void)setIdentityInfos:(id)arg1;

@end
