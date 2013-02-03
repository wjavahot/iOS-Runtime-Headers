/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Altitude.framework/Altitude
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSObject<MapDirectionsDelegate>, EAGLContext, <AltMapDelegate>, AltRenderer, NSString;

@interface AltMapView : UIView {
    float _animationSpinTime;
    EAGLContext *_context;
    BOOL _couldEnter3DMode;
    <AltMapDelegate> *_delegate;
    NSObject<MapDirectionsDelegate> *_directionsDelegate;
    id _displayLink;
    BOOL _downloading;
    BOOL _drawing;
    AltRenderer *_renderer;
    BOOL _showingFlyoverAtTargetPosition;
    BOOL _wasPitched;
}

@property BOOL alwaysDraws;
@property float animationSpinTime;
@property(readonly) struct CameraManager { int (**x1)(); boolx2; boolx3; struct Position3d { double x_4_1_1; double x_4_1_2; double x_4_1_3; } x4; struct Vector2i { int x_5_1_1; int x_5_1_2; } x5; struct Vector2i { int x_6_1_1; int x_6_1_2; } x6; boolx7; boolx8; boolx9; struct Position3d { double x_10_1_1; double x_10_1_2; double x_10_1_3; } x10; struct Vector2i { int x_11_1_1; int x_11_1_2; } x11; struct Vector2i { int x_12_1_1; int x_12_1_2; } x12; double x13; boolx14; boolx15; boolx16; boolx17; struct Position3d { double x_18_1_1; double x_18_1_2; double x_18_1_3; } x18; struct Vector2i { int x_19_1_1; int x_19_1_2; } x19; struct Vector2i { int x_20_1_1; int x_20_1_2; } x20; double x21; double x22; boolx23; boolx24; boolx25; boolx26; struct Position3d { double x_27_1_1; double x_27_1_2; double x_27_1_3; } x27; struct Vector2i { int x_28_1_1; int x_28_1_2; } x28; struct Vector2i { int x_29_1_1; int x_29_1_2; } x29; double x30; double x31; }* cameraManager;
@property struct _ACoordinate { double x1; double x2; } cameraPosition;
@property <AltMapDelegate> * delegate;
@property(retain) NSObject<MapDirectionsDelegate> * directionsDelegate;
@property BOOL downloading;
@property BOOL drawing;
@property float heading;
@property(copy) NSString * manifest;
@property(getter=isPitched,readonly) BOOL pitched;
@property(retain) AltRenderer * renderer;
@property float tilt;
@property float zoom;

+ (Class)layerClass;

- (struct CameraManager { int (**x1)(); boolx2; boolx3; struct Position3d { double x_4_1_1; double x_4_1_2; double x_4_1_3; } x4; struct Vector2i { int x_5_1_1; int x_5_1_2; } x5; struct Vector2i { int x_6_1_1; int x_6_1_2; } x6; boolx7; boolx8; boolx9; struct Position3d { double x_10_1_1; double x_10_1_2; double x_10_1_3; } x10; struct Vector2i { int x_11_1_1; int x_11_1_2; } x11; struct Vector2i { int x_12_1_1; int x_12_1_2; } x12; double x13; boolx14; boolx15; boolx16; boolx17; struct Position3d { double x_18_1_1; double x_18_1_2; double x_18_1_3; } x18; struct Vector2i { int x_19_1_1; int x_19_1_2; } x19; struct Vector2i { int x_20_1_1; int x_20_1_2; } x20; double x21; double x22; boolx23; boolx24; boolx25; boolx26; struct Position3d { double x_27_1_1; double x_27_1_2; double x_27_1_3; } x27; struct Vector2i { int x_28_1_1; int x_28_1_2; } x28; struct Vector2i { int x_29_1_1; int x_29_1_2; } x29; double x30; double x31; }*)cameraManager;
- (struct GlobeView { int (**x1)(); }*)getGlobeView;
- (struct Viewer { int (**x1)(); }*)getViewer;
- (void)_reachabilityChanged:(id)arg1;
- (id)addAnchorAtCoordinate:(struct _ACoordinate { double x1; double x2; })arg1 withHighPrecision:(BOOL)arg2;
- (BOOL)alwaysDraws;
- (BOOL)anchorsChanged;
- (float)animationSpinTime;
- (struct CGPoint { float x1; float x2; })cameraModelLocationAtCoordinate:(struct _ACoordinate { double x1; double x2; })arg1;
- (struct _ACoordinate { double x1; double x2; })cameraPosition;
- (void)clearAllMemory;
- (struct _ACoordinate { double x1; double x2; })coordinateAtLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)dealloc;
- (id)delegate;
- (void)didEnterBackground;
- (id)directionsDelegate;
- (BOOL)downloading;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawView:(id)arg1;
- (BOOL)drawing;
- (struct _AGeocentric { double x1; double x2; double x3; })geocentricForAnchor:(id)arg1 atCoordinate:(struct _ACoordinate { double x1; double x2; })arg2 withHighPrecision:(BOOL)arg3;
- (double)getFovY;
- (void)getGeocentricCameraPosition:(struct _AGeocentric { double x1; double x2; double x3; }*)arg1 andGeocentricTargetPostion:(struct _AGeocentric { double x1; double x2; double x3; }*)arg2;
- (BOOL)getGeocentricCoordinate:(struct _AGeocentric { double x1; double x2; double x3; }*)arg1 atLatLong:(struct CGPoint { float x1; float x2; })arg2;
- (float)getLodScale;
- (void)getNear:(double*)arg1 far:(double*)arg2;
- (void)getPosition:(struct _ACoordinate { double x1; double x2; }*)arg1 withZoom:(float*)arg2 andRotation:(float*)arg3 andTilt:(float*)arg4;
- (double)getTanHalfFovY;
- (double)getTargetDtmOffset;
- (unsigned int)getTotalDownLoaded;
- (void)getViewExtentsLowerLeft:(struct CGPoint { float x1; float x2; }*)arg1 upperRight:(struct CGPoint { float x1; float x2; }*)arg2;
- (BOOL)getVisibleTileKeys:(struct { /* ? */ }**)arg1 count:(unsigned int*)arg2;
- (BOOL)globeMoved;
- (float)heading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrameAndContext:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 :(id)arg2;
- (void)initialize;
- (void)initializeScene;
- (BOOL)isPitched;
- (void)layoutSubviews;
- (struct CGPoint { float x1; float x2; })locationAtCoordinate:(struct _ACoordinate { double x1; double x2; })arg1 useDtmHeight:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })locationAtCoordinate:(struct _ACoordinate { double x1; double x2; })arg1;
- (id)manifest;
- (void)moveTo:(struct _ACoordinate { double x1; double x2; })arg1 atZoom:(float)arg2 withRotation:(float)arg3 andTilt:(float)arg4 completion:(id)arg5;
- (void)moveTo:(struct _ACoordinate { double x1; double x2; })arg1;
- (BOOL)needsRepaint;
- (void)panWithPixelOffset:(struct CGPoint { float x1; float x2; })arg1 relativeToScreenPoint:(struct CGPoint { float x1; float x2; })arg2 animated:(BOOL)arg3 duration:(double)arg4 completionHandler:(id)arg5;
- (void)pruneCachedMemory;
- (void)reload;
- (void)removeAnchor:(id)arg1;
- (void)render;
- (id)renderer;
- (void)rotateTo:(double)arg1 completionHandler:(id)arg2;
- (void)setAlwaysDraws:(BOOL)arg1;
- (void)setAnimationSpinTime:(float)arg1;
- (void)setBackgroundViewLoading:(BOOL)arg1;
- (void)setCameraPosition:(struct _ACoordinate { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDirectionsDelegate:(id)arg1;
- (void)setDownloading:(BOOL)arg1;
- (void)setDrawing:(BOOL)arg1;
- (void)setHeading:(float)arg1;
- (void)setLaunchCompletion:(id)arg1;
- (void)setLodMode:(int)arg1;
- (void)setLodScale:(float)arg1;
- (void)setManifest:(id)arg1;
- (void)setPauseLoading:(BOOL)arg1;
- (void)setRenderer:(id)arg1;
- (void)setRendererCallback:(id)arg1;
- (void)setSceneDidFinishLoadCompletion:(id)arg1;
- (void)setShowTileBounds:(BOOL)arg1;
- (void)setTilt:(float)arg1;
- (void)setTo:(struct _ACoordinate { double x1; double x2; })arg1 atZoom:(float)arg2 withRotation:(float)arg3 andTilt:(float)arg4;
- (void)setUseMipmaps:(BOOL)arg1;
- (void)setZoom:(float)arg1;
- (void)showSearchResultAnimationAtCoordinate:(struct _ACoordinate { double x1; double x2; })arg1 withZoom:(double)arg2;
- (void)startPlaceCardAnimationAtCoordinate:(struct _ACoordinate { double x1; double x2; })arg1 andDistance:(double)arg2;
- (void)stopAnimations;
- (void)stopPlaceCardAnimationAtCoordinate;
- (void)stopSearchResultAnimation;
- (float)tilt;
- (void)tiltTo:(double)arg1 exaggerate:(BOOL)arg2 completionHandler:(id)arg3;
- (void)update;
- (float)zoom;
- (void)zoomTo:(double)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 completionHandler:(id)arg3;

@end
