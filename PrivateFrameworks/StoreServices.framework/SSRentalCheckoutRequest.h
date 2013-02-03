/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber, NSArray;

@interface SSRentalCheckoutRequest : SSRequest <SSXPCCoding> {
    NSNumber *_accountIdentifier;
    long long _downloadIdentifier;
    NSNumber *_rentalKeyIdentifier;
    NSArray *_sinfs;
}

@property(readonly) NSNumber * accountIdentifier;
@property(readonly) long long downloadIdentifier;
@property(readonly) NSNumber * rentalKeyIdentifier;
@property(readonly) NSArray * sinfs;

- (id)accountIdentifier;
- (id)copyXPCEncoding;
- (void)dealloc;
- (long long)downloadIdentifier;
- (id)init;
- (id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2;
- (id)initWithDownloadIdentifier:(long long)arg1;
- (id)initWithSinfs:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)rentalKeyIdentifier;
- (id)sinfs;
- (void)startWithCompletionBlock:(id)arg1;
- (void)startWithConnectionResponseBlock:(id)arg1;

@end
