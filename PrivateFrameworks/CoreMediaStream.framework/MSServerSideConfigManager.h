/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class MSServerSideConfigProtocol, NSString, MSMediaStreamDaemon, NSDictionary;

@interface MSServerSideConfigManager : NSObject <MSServerSideConfigProtocolDelegate> {
    NSDictionary *_config;
    NSString *_configPath;
    MSMediaStreamDaemon *_daemon;
    NSString *_personID;
    MSServerSideConfigProtocol *_protocol;
    int _state;
}

@property(retain) NSDictionary * config;
@property MSMediaStreamDaemon * daemon;
@property(readonly) NSString * personID;

+ (void)abortAllActivities;
+ (id)configManagerForPersonID:(id)arg1;
+ (double)doubleValueForParameter:(id)arg1 forPersonID:(id)arg2 defaultValue:(double)arg3;
+ (id)existingConfigManagerForPersonID:(id)arg1;
+ (void)forgetPersonID:(id)arg1;
+ (int)intValueForParameter:(id)arg1 forPersonID:(id)arg2 defaultValue:(int)arg3;
+ (long long)longLongValueForParameter:(id)arg1 forPersonID:(id)arg2 defaultValue:(long long)arg3;
+ (long)longValueForParameter:(id)arg1 forPersonID:(id)arg2 defaultValue:(long)arg3;
+ (id)objectForKey:(id)arg1 forPersonID:(id)arg2 defaultValue:(id)arg3;

- (void).cxx_destruct;
- (void)abort;
- (id)config;
- (id)daemon;
- (void)dealloc;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (id)personID;
- (void)refreshConfiguration;
- (void)serverSideConfigProtocol:(id)arg1 didFinishWithConfiguration:(id)arg2 error:(id)arg3;
- (void)serverSideConfigProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)setConfig:(id)arg1;
- (void)setDaemon:(id)arg1;

@end
