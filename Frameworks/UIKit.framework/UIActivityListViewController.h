/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIActivityViewController;

@interface UIActivityListViewController : UIViewController <UIPopoverControllerDelegate> {
    NSArray *_activities;
    UIActivityViewController *_activityViewController;
}

@property(retain) NSArray * activities;
@property UIActivityViewController * activityViewController;

- (id)activities;
- (id)activityViewController;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (void)dealloc;
- (void)dimStatusBar:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithActivityViewController:(id)arg1 activities:(id)arg2;
- (void)loadView;
- (void)reloadActivity:(id)arg1;
- (void)setActivities:(id)arg1;
- (void)setActivityViewController:(id)arg1;
- (void)setHeaderVisible:(BOOL)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
