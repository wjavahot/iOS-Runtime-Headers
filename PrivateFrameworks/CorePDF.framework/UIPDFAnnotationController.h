/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class <NSObject><UIPDFAnnotationControllerDelegate>, CALayer, NSString, UIColor, UIPDFAnnotation, UIPDFMarkupAnnotation, UIPDFPageView;

@interface UIPDFAnnotationController : NSObject <UIGestureRecognizerDelegate> {
    BOOL _allowEditing;
    struct CGSize { 
        float width; 
        float height; 
    } _cachedMarginNoteSize;
    UIPDFMarkupAnnotation *_currentAnnotation;
    UIColor *_currentColor;
    <NSObject><UIPDFAnnotationControllerDelegate> *_delegate;
    CALayer *_drawingSurface;
    struct { 
        int location; 
        int length; 
    } _initialRange;
    int _lock;
    BOOL _moving;
    UIPDFPageView *_pageView;
    struct CGPoint { 
        float x; 
        float y; 
    } _startPoint;
    BOOL _tracking;
    BOOL makeUnderlineAnnotation;
}

@property BOOL allowEditing;
@property(retain) UIPDFAnnotation * currentAnnotation;
@property UIColor * currentColor;
@property(copy,readonly) NSString * debugDescription;
@property <NSObject><UIPDFAnnotationControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property CALayer * drawingSurface;
@property(readonly) unsigned int hash;
@property BOOL makeUnderlineAnnotation;
@property(readonly) UIPDFPageView * pageView;
@property(readonly) Class superclass;
@property(readonly) BOOL tracking;

+ (id)newAnnotation:(struct CGPDFDictionary { }*)arg1 type:(const char *)arg2;
+ (struct CGImage { }*)newMaskImage:(struct CGPDFPage { }*)arg1 size:(struct CGSize { float x1; float x2; })arg2;
+ (BOOL)pageHasAnnotations:(id)arg1;

- (void)_addAnnotationViewFor:(id)arg1;
- (void)_addLinkAnnotationViewFor:(id)arg1;
- (void)_addRecognizers:(id)arg1;
- (void)_initialRange:(struct CGPoint { float x1; float x2; })arg1;
- (id)_linkAnnotationViewAt:(struct CGPoint { float x1; float x2; })arg1;
- (void)addAnnotation:(id)arg1;
- (void)addDrawingSurface:(id)arg1 view:(id)arg2;
- (void)addLinkAnnotationViews;
- (BOOL)allowEditing;
- (id)annotatePageSelection;
- (id)annotationAt:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)annotationBriefPressRecognized:(id)arg1;
- (BOOL)annotationLongPressRecognized:(id)arg1;
- (BOOL)annotationSingleTapRecognized:(id)arg1;
- (void)annotationTapRecognized:(id)arg1;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toSurfaceLayer:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toSurfaceLayer:(id)arg2;
- (void)copyAttributesOf:(id)arg1 to:(id)arg2;
- (id)currentAnnotation;
- (id)currentColor;
- (void)dealloc;
- (id)delegate;
- (void)didEndTrackingAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)doubleTapRecognized:(id)arg1;
- (void)drawAnnotations:(struct CGContext { }*)arg1;
- (id)drawingSurface;
- (void)endTrackingAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)hostViewDidScroll;
- (id)init;
- (id)initWithPageView:(id)arg1;
- (BOOL)intersects:(struct CGPDFSelection { }*)arg1 with:(struct CGPDFSelection { }*)arg2;
- (BOOL)isLinkAnnotationAt:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)isSelection:(struct CGPDFSelection { }*)arg1 equalTo:(struct CGPDFSelection { }*)arg2;
- (void)layoutAnnotationViews:(id)arg1;
- (id)linkAnnotationAt:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)linkAnnotationShouldBegin:(id)arg1;
- (void)linkPressRecognized:(id)arg1;
- (void)lock;
- (BOOL)madeInstantAnnotation;
- (BOOL)makeUnderlineAnnotation;
- (id)marginNoteImage:(id)arg1;
- (struct CGSize { float x1; float x2; })marginNoteImageSize;
- (void)mergeSelectionOfAnnotation:(id)arg1;
- (struct CGImage { }*)newHighlightMaskImageFor:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)pageView;
- (void)setAllowEditing:(BOOL)arg1;
- (void)setCurrentAnnotation:(id)arg1;
- (void)setCurrentColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDrawingSurface:(id)arg1;
- (void)setMakeUnderlineAnnotation:(BOOL)arg1;
- (void)setNeedsDisplay;
- (void)setSurfacePosition:(id)arg1;
- (void)setView:(id)arg1;
- (void)startTracking:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)trackMoved:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)tracking;
- (void)tracking:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGImage { }*)underlineImageFor:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)unlock;
- (BOOL)willDoSomethingWithTap:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)willHandleTouchGestureAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)willTrackAtPoint:(struct CGPoint { float x1; float x2; })arg1;

@end
