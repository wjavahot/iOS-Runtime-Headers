/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class WebUIBrowserLoadingController, <_UIRemoteWebViewControllerProtocol>, _UIServiceWebView;

@interface _UIServiceWebViewController : UIViewController <XPCProxyTarget, _UIServiceWebViewControllerProtocol, WebUIBrowserLoadingControllerDelegate> {
    WebUIBrowserLoadingController *_loadingController;
    <_UIRemoteWebViewControllerProtocol> *_remoteViewControllerProxy;
    _UIServiceWebView *_uiWebView;
}

- (BOOL)_isInternalInstall;
- (id)_makeAlertView;
- (void)_remotelyDecidePolicyForRequest:(id)arg1 inMainFrame:(BOOL)arg2 navigationType:(id)arg3 decisionHandler:(id)arg4;
- (void)_remotelyDispatchDidDismissViewController;
- (void)_remotelyDispatchWillPresentViewControllerWithCompletionHandler:(id)arg1;
- (void)_setupRemoteInspectorDetailsForRequestingProcess;
- (void)_webContentSizeWithReplyHandler:(id)arg1;
- (void)browserLoadingController:(id)arg1 didFinishLoadingWithError:(id)arg2 dataSource:(id)arg3;
- (void)browserLoadingControllerDidStartLoading:(id)arg1;
- (void)browserLoadingControllerDidUpdateBackForward:(id)arg1;
- (void)browserLoadingControllerDidUpdateEstimatedProgress:(id)arg1;
- (void)browserLoadingControllerDidUpdateTitle:(id)arg1;
- (void)browserLoadingControllerDidUpdateURLString:(id)arg1;
- (void)configureWithEncodedSettings:(id)arg1;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)goBack;
- (void)goForward;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadEncodedRequest:(id)arg1;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadUserTypedAddress:(id)arg1;
- (void)loadView;
- (id)localizedApplicationNameForProcess:(int)arg1;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)reload;
- (void)setShouldDecidePolicyRemotely:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)stopLoading;
- (void)willAppearInRemoteViewController:(id)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
