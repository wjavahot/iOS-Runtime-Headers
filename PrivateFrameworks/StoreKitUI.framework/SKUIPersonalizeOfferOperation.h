/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, SKUIClientContext;

@interface SKUIPersonalizeOfferOperation : NSOperation {
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _itemID;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _outputBlock;

}

@property(copy) id outputBlock;

- (void).cxx_destruct;
- (id)initWithItemIdentifier:(long long)arg1 clientContext:(id)arg2;
- (void)main;
- (id)outputBlock;
- (void)setOutputBlock:(id)arg1;

@end
