/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEORequester, NSString;

@interface GEOVoltaireGeocodeProvider : GEOGeocodeProvider <PBRequesterDelegate> {
    BOOL _cancelled;
    BOOL _isBatchRequest;
    BOOL _isForwardGeocodeRequest;
    GEORequester *_requester;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)batchReverseGeocoderURL;
+ (id)forwardGeocoderURL;
+ (id)providerName;
+ (id)reverseGeocoderURL;

- (void)_batchRequesterDidFinish:(id)arg1;
- (void)_singleRequesterDidFinish:(id)arg1;
- (void)batchReverseGeocode:(id)arg1 success:(id)arg2 error:(id)arg3;
- (void)cancel;
- (void)dealloc;
- (void)forwardGeocode:(id)arg1 success:(id)arg2 networkActivity:(id)arg3 error:(id)arg4;
- (id)newRequester:(id)arg1;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)reverseGeocode:(id)arg1 success:(id)arg2 error:(id)arg3;

@end
