/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSOperationQueue, UIButton, UIImage;

@interface IUAlbumTrackListAggregateViewConfiguration : IUMediaListAggregateViewConfiguration {
    UIImage *_artworkImage;
    UIButton *_cloudDownloadButton;
    unsigned int _cloudDownloadButtonIndex;
    NSOperationQueue *_downloadableEntitiesOperationQueue;
    BOOL _shouldShowCloudDownloadButton;
    UIButton *_shuffleButton;
    unsigned int _shuffleButtonIndex;
}

- (id)_albumArtistString;
- (id)_albumString;
- (void)_canShowCloudDownloadButtonsDidChangeNotification:(id)arg1;
- (id)_cloudDownloadButton;
- (void)_cloudDownloadButtonAction:(id)arg1;
- (id)_copyrightInfoString;
- (id)_findAggregateView:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForCloudDownloadButton;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForShuffleButton;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1;
- (void)_purchasableMediaDidChangeNotification:(id)arg1;
- (id)_releaseDateString;
- (id)_shuffleButton;
- (void)_shuffleButtonClickedUp:(id)arg1;
- (id)_songAndDurationString;
- (void)_updateCloudDownloadButton;
- (id)artworkImageWithLoadingCompletionHandler:(id)arg1;
- (id)backgroundImage;
- (BOOL)canDisplayShuffleButton;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (void)dealloc;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForButtonAtIndex:(unsigned int)arg1;
- (void)initStorage;
- (id)initWithDataSource:(id)arg1;
- (unsigned int)numberOfButtons;
- (unsigned int)numberOfLabels;
- (void)reloadDisplayValues;
- (void)reloadLayoutInformation;
- (void)simpleCellPresetButton:(id)arg1 clicked:(int)arg2;
- (Class)viewClass;
- (id)viewForButtonAtIndex:(unsigned int)arg1;

@end
