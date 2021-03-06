/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GEOMapRequestManager;

@interface GEOMapRequest : NSObject {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    BOOL _isFinished;
    GEOMapRequestManager *_requestManager;
}

@property(copy) id completionHandler;
@property(readonly) BOOL isFinished;

- (void)cancel;
- (void)complete;
- (id)completionHandler;
- (void)dealloc;
- (id)initWithManager:(id)arg1;
- (BOOL)isFinished;
- (void)setCompletionHandler:(id)arg1;

@end
