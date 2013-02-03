/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, UIWindow, UIViewController, MPAudioDeviceController;

@interface MPAudioVideoRoutingActionSheet : UIActionSheet <UIActionSheetDelegate> {
    int _airPlayPasswordAlertDidAppearToken;
    BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
    MPAudioDeviceController *_audioDeviceController;
    unsigned int _avItemType;
    id _completionHandler;
    NSArray *_displayedRoutes;
    BOOL _shouldPauseAfterDismissing;
    UIViewController *_viewControllerForActionSheet;
    UIWindow *_windowForActionSheet;
}

- (id)_availableRoutes;
- (void)_debugButtonAction:(id)arg1;
- (BOOL)_isDeviceVideoRoute:(id)arg1;
- (BOOL)_shouldShowDebugButton;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)dealloc;
- (id)initWithType:(unsigned int)arg1;
- (void)layoutSubviews;
- (void)showInPopoverFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 backgroundStyle:(int)arg3 animated:(BOOL)arg4 completionHandler:(id)arg5;
- (void)showWithValidInterfaceOrientationsBlock:(id)arg1 completionHandler:(id)arg2;

@end
