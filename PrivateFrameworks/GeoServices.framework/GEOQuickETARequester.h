/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOClientETARequest, GEODirectionsRouteRequest, GEOQuickETARequest, NSString;

@interface GEOQuickETARequester : NSObject {
    GEODirectionsRouteRequest *_directionsETARequest;
    NSString *_loggingFacility;
    GEOQuickETARequest *_request;
    GEOClientETARequest *_simpleETARequest;
}

@property(copy) NSString * loggingFacility;

- (void)_calculateRoutingETAWithHandler:(id)arg1;
- (void)_calculateSimpleETAWithHandler:(id)arg1;
- (void)calculateETALocalizedDescriptionFromOrigin:(id)arg1 toLOI:(id)arg2 handler:(id)arg3;
- (void)calculateETAWithHandler:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;
- (id)loggingFacility;
- (void)setLoggingFacility:(id)arg1;

@end