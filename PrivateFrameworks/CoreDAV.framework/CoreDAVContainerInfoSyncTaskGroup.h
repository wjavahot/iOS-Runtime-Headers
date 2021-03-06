/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class <CoreDAVContainerInfoSyncProvider>, NSString, NSURL;

@interface CoreDAVContainerInfoSyncTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
    NSURL *_containerURL;
    NSString *_previousSyncToken;
}

@property(copy,readonly) NSString * debugDescription;
@property <CoreDAVContainerInfoSyncProvider> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (Class)containerItemClass;
- (id)copyContainerParserMappings;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)initWithContainerURL:(id)arg1 previousSyncToken:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4;
- (void)setDelegate:(id)arg1;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;

@end
