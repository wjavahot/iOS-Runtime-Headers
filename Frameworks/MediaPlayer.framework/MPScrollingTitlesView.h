/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIImageView, UILabel, NSString, CALayer;

@interface MPScrollingTitlesView : UIView {
    UILabel *_albumLabel;
    UILabel *_artistLabel;
    float _idealWidth;
    BOOL _marqueeEnabled;
    UIImageView *_marqueeView;
    CALayer *_maskLayer;
    int _style;
    UILabel *_titleLabel;
}

@property(copy) NSString * album;
@property(copy) NSString * artist;
@property int style;
@property(copy) NSString * title;

- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (id)_newArtistAlbumLabel;
- (id)_newTitleLabel;
- (void)_startMarquee;
- (void)_stopMarquee;
- (void)_updateMarqueeView;
- (id)album;
- (id)artist;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setStyle:(int)arg1;
- (void)setTitle:(id)arg1;
- (int)style;
- (id)title;

@end
