/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKShareID, NSData, NSString, NSURL;

@interface CKDAcceptShareInfo : NSObject {
    NSString *_etag;
    NSData *_publicKey;
    NSData *_publicPCSData;
    NSString *_publicPCSEtag;
    CKShareID *_shareID;
    NSURL *_shareURL;
}

@property(retain) NSString * etag;
@property(retain) NSData * publicKey;
@property(retain) NSData * publicPCSData;
@property(retain) NSString * publicPCSEtag;
@property(retain) CKShareID * shareID;
@property(retain) NSURL * shareURL;

- (void).cxx_destruct;
- (id)etag;
- (id)publicKey;
- (id)publicPCSData;
- (id)publicPCSEtag;
- (void)setEtag:(id)arg1;
- (void)setPublicKey:(id)arg1;
- (void)setPublicPCSData:(id)arg1;
- (void)setPublicPCSEtag:(id)arg1;
- (void)setShareID:(id)arg1;
- (void)setShareURL:(id)arg1;
- (id)shareID;
- (id)shareURL;

@end
