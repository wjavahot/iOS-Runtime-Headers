/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UICoordinateSpace>, <UIFocusContainer>, FBSDisplay, NSArray, NSDictionary, NSMutableArray, NSString, UIScreen, UIScreenMode, UISoftwareDimmingWindow, UITraitCollection, UIView, UIWindow, UIWindow<UIFocusContainer>, _UIScreenFixedCoordinateSpace, _UIScreenTransparentHitTestWindow;

@interface UIScreen : NSObject <UICoordinateSpace, UIFocusContainer, UITraitEnvironment, _UITraitEnvironmentInternal> {
    UIWindow<UIFocusContainer> *__focusedWindow;
    NSArray *_availableDisplayModes;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _bounds;
    NSDictionary *_capabilities;
    UITraitCollection *_defaultTraitCollection;
    id _display;
    _UIScreenTransparentHitTestWindow *_extendedJailHitTestWindow;
    FBSDisplay *_fbsDisplay;
    _UIScreenFixedCoordinateSpace *_fixedCoordinateSpace;
    <UIFocusContainer> *_focusedItem;
    float _horizontalScale;
    int _interfaceOrientation;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _interfaceOrientedBounds;
    struct CGPoint { 
        float x; 
        float y; 
    } _jailOffset;
    int _jailOrientation;
    float _jailScale;
    struct CGSize { 
        float width; 
        float height; 
    } _jailSize;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _jailTouchInsets;
    BOOL _jailUsesHitTestWindow;
    int _lastNotifiedBacklightLevel;
    UITraitCollection *_lastNotifiedTraitCollection;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _mainSceneReferenceBounds;
    UITraitCollection *_overrideTraitCollection;
    NSMutableArray *_pausedWindows;
    float _pointsPerInch;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _referenceBounds;
    float _scale;
    UIWindow *_screenDisablingWindow;
    struct { 
        unsigned int bitsPerComponent : 4; 
        unsigned int initialized : 1; 
        unsigned int connected : 1; 
        unsigned int overscanCompensation : 2; 
        unsigned int screenUpdatesDisabled : 1; 
        unsigned int wantsWideContentMargins : 1; 
        unsigned int queriedDeviceContentMargins : 1; 
        unsigned int hasCalculatedPointsPerInch : 1; 
        unsigned int screenCreatedFBSDisplay : 1; 
    } _screenFlags;
    UISoftwareDimmingWindow *_softwareDimmingWindow;
    double _startedPausingWindows;
    float _touchScaleFactor;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _unjailedReferenceBounds;
    int _userInterfaceIdiom;
    BOOL _wantsSoftwareDimming;
}

@property(setter=_setFocusedWindow:) UIWindow<UIFocusContainer> * _focusedWindow;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _gkBounds;
@property(readonly) float _gkScale;
@property(setter=_setInterfaceOrientation:) int _interfaceOrientation;
@property(setter=_setLastNotifiedBacklightLevel:) int _lastNotifiedBacklightLevel;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _referenceBounds;
@property(setter=_setSoftwareDimmingWindow:,retain) UISoftwareDimmingWindow * _softwareDimmingWindow;
@property(getter=_unjailedReferenceBounds,readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _unjailedReferenceBounds;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } applicationFrame;
@property(copy,readonly) NSArray * availableModes;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property float brightness;
@property(readonly) <UICoordinateSpace> * coordinateSpace;
@property(retain) UIScreenMode * currentMode;
@property(copy,readonly) NSString * debugDescription;
@property(getter=_defaultTraitCollection,setter=_setDefaultTraitCollection:) UITraitCollection * defaultTraitCollection;
@property(copy,readonly) NSString * description;
@property(retain) FBSDisplay * fbsDisplay;
@property(readonly) <UICoordinateSpace> * fixedCoordinateSpace;
@property(readonly) <UIFocusContainer> * focusedItem;
@property(readonly) UIView * focusedView;
@property(readonly) unsigned int hash;
@property(getter=_jailOffset,setter=_setJailOffset:) struct CGPoint { float x1; float x2; } jailOffset;
@property(getter=_jailOrientation,setter=_setJailOrientation:) int jailOrientation;
@property(getter=_jailScale,setter=_setJailScale:) float jailScale;
@property(getter=_jailSize,setter=_setJailSize:) struct CGSize { float x1; float x2; } jailSize;
@property(getter=_jailTouchInsets,setter=_setJailTouchInsets:) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } jailTouchInsets;
@property(getter=_jailUsesHitTestWindow,setter=_setJailUsesHitTestWindow:) BOOL jailUsesHitTestWindow;
@property(getter=_lastNotifiedTraitCollection,setter=_setLastNotifiedTraitCollection:,retain) UITraitCollection * lastNotifiedTraitCollection;
@property(retain,readonly) UIScreen * mirroredScreen;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } nativeBounds;
@property(readonly) float nativeScale;
@property(getter=_overrideTraitCollection,setter=_setOverrideTraitCollection:) UITraitCollection * overrideTraitCollection;
@property int overscanCompensation;
@property(readonly) <UIFocusContainer> * preferredFocusedItem;
@property(retain,readonly) UIScreenMode * preferredMode;
@property(readonly) float scale;
@property(readonly) Class superclass;
@property(readonly) BOOL supportsFocus;
@property(readonly) UITraitCollection * traitCollection;
@property BOOL wantsSoftwareDimming;

+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2 andPost:(BOOL)arg3;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)arg1;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)arg1 forSceneDestruction:(id)arg2;
+ (id)__availableScenes;
+ (id)__connectedFBSDisplays;
+ (id)__createPlugInScreenForFBSDisplay:(id)arg1;
+ (id)__sceneTrackingQueue;
+ (void)_beginDisableScreenUpdatesForSnapshot;
+ (void)_beginDisableScreenUpdatesForSnapshotUsingSnapshotCover:(BOOL)arg1;
+ (id)_carScreen;
+ (void)_endDisableScreenUpdates;
+ (void)_enumerateScreensWithBlock:(id)arg1;
+ (void)_prepareScreensForAppResume;
+ (id)_screenWithDisplayID:(id)arg1;
+ (id)_screenWithDisplayName:(id)arg1;
+ (id)_screenWithIntegerDisplayID:(unsigned int)arg1;
+ (BOOL)_shouldDisableJail;
+ (void)_videoOutSettingsChanged;
+ (id)_watchScreen;
+ (id)_workspaceCapableScreens;
+ (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromView:(id)arg2;
+ (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toView:(id)arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromView:(id)arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toView:(id)arg2;
+ (void)initialize;
+ (id)mainScreen;
+ (id)sbs_launchImageInfoPlistKeyModifier:(int)arg1;
+ (id)sbs_screenTypes;
+ (id)sbs_snapshotImagePathComponent:(int)arg1;
+ (id)screens;
+ (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForScreenOriginRotation:(float)arg1;
+ (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformToRotateScreen:(float)arg1;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_applicationFrameForInterfaceOrientation:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_applicationFrameForInterfaceOrientation:(int)arg1 usingStatusbarHeight:(float)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_applicationFrameForInterfaceOrientation:(int)arg1 usingStatusbarHeight:(float)arg2 ignoreStatusBar:(BOOL)arg3;
- (BOOL)_areBoundsJailed;
- (BOOL)_areListsLimited;
- (BOOL)_areMusicListsLimited;
- (void)_beginObservingBacklightLevelNotifications;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_boundsForInterfaceOrientation:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_boundsInPixels;
- (id)_capabilities;
- (id)_capabilityForKey:(id)arg1;
- (void)_computeMetrics;
- (void)_connectScreen;
- (id)_defaultTraitCollection;
- (id)_defaultTraitCollectionForInterfaceOrientation:(int)arg1;
- (void)_disableScreenUpdates:(BOOL)arg1;
- (void)_disconnectScreen;
- (id)_display;
- (id)_displayID;
- (void)_enableScreenUpdates;
- (void)_endObservingBacklightLevelNotifications;
- (void)_ensureConnectedIfPossible;
- (void)_enumerateWindowsWithBlock:(id)arg1;
- (id)_focusedWindow;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_gkBounds;
- (float)_gkScale;
- (BOOL)_hasStatusBar;
- (BOOL)_hasWindows;
- (float)_horizontalPixelScale;
- (int)_imageOrientation;
- (unsigned int)_integerDisplayID;
- (int)_interfaceOrientation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_interfaceOrientedBounds;
- (BOOL)_isCarScreen;
- (BOOL)_isDisplayPointWithinExtendedJailBounds:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_isExternal;
- (BOOL)_isMainScreen;
- (BOOL)_isOverscanned;
- (BOOL)_isRightHandDrive;
- (BOOL)_isRotatable;
- (BOOL)_isUIElementLimited:(id)arg1;
- (BOOL)_isWorkspaceCapable;
- (struct CGPoint { float x1; float x2; })_jailOffset;
- (int)_jailOrientation;
- (float)_jailScale;
- (struct CGSize { float x1; float x2; })_jailSize;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_jailTouchInsets;
- (BOOL)_jailUsesHitTestWindow;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_jailedBoundsEdgeInsets;
- (int)_lastNotifiedBacklightLevel;
- (id)_lastNotifiedTraitCollection;
- (id)_lazySoftwareDimmingWindow;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_mainSceneReferenceBounds;
- (id)_mapkit_display;
- (id)_name;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_nativeDisplayBounds;
- (void)_notifyTraitsChangedAndPropagateToAllWindows;
- (id)_overrideTraitCollection;
- (BOOL)_overscanAdjustmentNeedsUpdate;
- (float)_pointsPerInch;
- (struct CGPoint { float x1; float x2; })_positionForWindowTransformLayerInJail:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })_positionForWindowTransformLayerInJail:(BOOL)arg1 offsetByScreenJail:(BOOL)arg2;
- (void)_postBrightnessDidChangeNotificationIfAppropriate;
- (void)_prepareForWindow;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_rawJailedBoundsEdgeInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_realDisplayBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_referenceBounds;
- (double)_refreshRate;
- (float)_rotation;
- (float)_scale;
- (unsigned int)_seed;
- (void)_setCapability:(id)arg1 forKey:(id)arg2;
- (void)_setDefaultTraitCollection:(id)arg1;
- (void)_setExternalDeviceShouldInputText:(BOOL)arg1;
- (void)_setFocusedItem:(id)arg1;
- (void)_setFocusedWindow:(id)arg1;
- (void)_setInterfaceOrientation:(int)arg1;
- (void)_setJailOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setJailOrientation:(int)arg1;
- (void)_setJailScale:(float)arg1;
- (void)_setJailSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_setJailTouchInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_setJailUsesHitTestWindow:(BOOL)arg1;
- (void)_setLastNotifiedBacklightLevel:(int)arg1;
- (void)_setLastNotifiedTraitCollection:(id)arg1;
- (void)_setMainSceneReferenceBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setMainSceneReferenceBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 computingMetricsIfNecessary:(BOOL)arg2;
- (void)_setOverrideTraitCollection:(id)arg1;
- (void)_setScale:(float)arg1;
- (void)_setSoftwareDimmingWindow:(id)arg1;
- (void)_setSpeed:(float)arg1 forWindow:(id)arg2;
- (void)_setUserInterfaceIdiom:(int)arg1;
- (id)_snapshotExcludingWindows:(id)arg1 withRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)_softwareDimmingWindow;
- (BOOL)_supportsBrightness;
- (float)_touchScaleFactor;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_unjailedReferenceBounds;
- (void)_updateAvailableDisplayModes;
- (void)_updateCapabilities;
- (void)_updateOverscanCompensationAllowingBackgroundUpdate:(BOOL)arg1;
- (void)_updateTraits;
- (void)_updateUserInterfaceIdiom;
- (int)_userInterfaceIdiom;
- (BOOL)_wantsWideContentMargins;
- (void)_willTransitionToTraitCollection:(id)arg1;
- (int)_workspaceCapableScreenType;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })applicationFrame;
- (id)availableModes;
- (int)bitsPerComponent;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (float)brightness;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toCoordinateSpace:(id)arg2;
- (id)coordinateSpace;
- (id)currentMode;
- (void)dealloc;
- (id)description;
- (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)fbsDisplay;
- (id)fixedCoordinateSpace;
- (id)focusedItem;
- (id)focusedView;
- (void)focusedViewDidChange;
- (void)focusedViewWillChange;
- (id)initWithDisplay:(id)arg1;
- (BOOL)isAncestorOfItem:(id)arg1;
- (id)mirroredScreen;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })nativeBounds;
- (float)nativeScale;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (int)overscanCompensation;
- (id)preferredFocusedItem;
- (id)preferredMode;
- (float)rawBrightnessForBacklightLevel:(float)arg1;
- (BOOL)sbs_isCarScreen;
- (BOOL)sbs_isMainScreen;
- (id)sbs_launchImageInfoPlistKeyModifier;
- (id)sbs_snapshotImagePathComponent;
- (float)scale;
- (int)screenType;
- (void)setBitsPerComponent:(int)arg1;
- (void)setBrightness:(float)arg1;
- (void)setCurrentMode:(id)arg1;
- (void)setFbsDisplay:(id)arg1;
- (void)setNeedsPreferredFocusedItemUpdate;
- (void)setOverscanCompensation:(int)arg1;
- (void)setWantsSoftwareDimming:(BOOL)arg1;
- (BOOL)shouldChangeFocusedItem:(id)arg1 heading:(unsigned int)arg2;
- (id)snapshot;
- (id)snapshotView;
- (id)snapshotViewAfterScreenUpdates:(BOOL)arg1;
- (BOOL)supportsFocus;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)wantsSoftwareDimming;

@end
