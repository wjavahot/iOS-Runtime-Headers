/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UITableView, NSArray, <PLAirTunesServicePickerViewControllerDelegate>, PLAirTunesService;

@interface PLAirTunesServicePickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    NSArray *_availableServices;
    id _delegate;
    PLAirTunesService *_selectedService;
    BOOL _showDebugOption;
    UITableView *_table;
}

@property <PLAirTunesServicePickerViewControllerDelegate> * delegate;

- (void)_setCell:(id)arg1 checked:(BOOL)arg2;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopoverView;
- (void)dealloc;
- (id)delegate;
- (id)initWithAvailableAirTunesServices:(id)arg1 previouslySelectedService:(id)arg2 showDebugOption:(BOOL)arg3;
- (void)loadView;
- (void)setAvailableServices:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidAppear:(BOOL)arg1;

@end
