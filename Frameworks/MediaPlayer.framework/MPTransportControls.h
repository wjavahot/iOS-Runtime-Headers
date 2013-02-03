/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVController, MPAVItem, NSMutableIndexSet, NSString, MPButton;

@interface MPTransportControls : UIView {
    unsigned int _playing : 1;
    BOOL _allowsWirelessPlayback;
    MPButton *_alternatesButton;
    MPButton *_bookmarkButton;
    MPButton *_chaptersButton;
    unsigned long long _desiredParts;
    MPButton *_devicePickerButton;
    unsigned long long _disabledParts;
    MPButton *_emailButton;
    NSMutableIndexSet *_heldParts;
    MPAVItem *_item;
    MPButton *_nextButton;
    MPButton *_playButton;
    MPAVController *_player;
    MPButton *_previousButton;
    BOOL _registeredForPlayerNotifications;
    MPButton *_rewind30SecondsButton;
    MPButton *_scaleButton;
    id _target;
    MPButton *_toggleFullscreenButton;
    unsigned long long _visibleParts;
    id _volumeSlider;
}

@property BOOL allowsWirelessPlayback;
@property unsigned long long desiredParts;
@property unsigned long long disabledParts;
@property(retain) MPAVItem * item;
@property(readonly) NSString * pauseButtonImage;
@property(readonly) NSString * playButtonImage;
@property(readonly) NSString * playPauseButtonImage;
@property(retain) MPAVController * player;
@property BOOL registeredForPlayerNotifications;
@property id target;
@property unsigned long long visibleParts;

+ (Class)buttonClass;
+ (unsigned long long)defaultVisibleParts;

- (void)_alternateTypesChangedNotification:(id)arg1;
- (void)_applyDesiredPartsWithAnimation:(BOOL)arg1;
- (unsigned long long)_applyPossibleVisiblePartsToParts:(unsigned long long)arg1;
- (void)_availableRoutesChangedNotification:(id)arg1;
- (void)_handleHoldForPart:(unsigned long long)arg1;
- (void)_handleReleaseForPart:(unsigned long long)arg1;
- (void)_handleTapForPart:(unsigned long long)arg1;
- (void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1;
- (void)_itemChangedNotification:(id)arg1;
- (void)_playbackStateChangedNotification:(id)arg1;
- (void)_reloadViewWithAnimation:(BOOL)arg1;
- (void)_timeMarkersAvailableNotification:(id)arg1;
- (id)_updateAdditions:(id)arg1 removals:(id)arg2 forPart:(unsigned long long)arg3;
- (void)_updateButtonImageForPart:(unsigned long long)arg1;
- (void)_updateEnabledStates:(BOOL)arg1;
- (void)_validityChangedNotification:(id)arg1;
- (BOOL)allowsWirelessPlayback;
- (BOOL)allowsWirelessPlaybackForCurrentItem;
- (BOOL)alwaysHidesSystemVolumeHUD;
- (void)buttonDown:(id)arg1;
- (id)buttonForPart:(unsigned long long)arg1;
- (void)buttonHeld:(id)arg1;
- (void)buttonHoldReleased:(id)arg1;
- (id)buttonImageForPart:(unsigned long long)arg1;
- (void)buttonUp:(id)arg1;
- (void)dealloc;
- (unsigned long long)desiredParts;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)disabledButtonImageForPart:(unsigned long long)arg1;
- (unsigned long long)disabledParts;
- (id)highlightedButtonImageForPart:(unsigned long long)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)item;
- (id)newButtonForPart:(unsigned long long)arg1;
- (id)newVolumeSlider;
- (id)pauseButtonImage;
- (id)playButtonImage;
- (id)playPauseButtonImage;
- (id)player;
- (void)registerForPlayerNotifications;
- (BOOL)registeredForPlayerNotifications;
- (void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(BOOL)arg3;
- (void)setAllowsWirelessPlayback:(BOOL)arg1;
- (void)setAlpha:(float)arg1;
- (void)setDesiredParts:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)setDesiredParts:(unsigned long long)arg1;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setItem:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setRegisteredForPlayerNotifications:(BOOL)arg1;
- (void)setTarget:(id)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)setVisibleParts:(unsigned long long)arg1;
- (BOOL)showsVolumeSliderWhenNoVolumeControlAvailable;
- (id)target;
- (void)unregisterForPlayerNotifications;
- (unsigned long long)visibleParts;

@end
