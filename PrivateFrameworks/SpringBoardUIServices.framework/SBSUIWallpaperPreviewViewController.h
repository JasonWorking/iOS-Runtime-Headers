/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBSUIWallpaperPreviewViewController : UIViewController <SBFLegibilitySettingsProvider, SBFWallpaperViewLegibilityObserver> {
    BOOL _allowScrolling;
    BOOL _colorSamplingEnabled;
    SBFLockScreenSimpleDateFormatter *_dateFormatter;
    NSTimer *_dateTimer;
    <SBFLegibilitySettingsProviderDelegate> *_delegate;
    BOOL _motionEnabled;
    NSString *_name;
    NSDictionary *_proceduralWallpaper;
    NSDictionary *_proceduralWallpaperOptions;
    int _variant;
    UIImage *_wallpaperImage;
}

@property (nonatomic) BOOL colorSamplingEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBFLegibilitySettingsProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) BOOL motionEnabled;
@property (readonly) Class superclass;
@property (readonly) UIImage *wallpaperImage;

- (id)_backdropWallpaperView;
- (id)_dateView;
- (float)_parallaxFactor;
- (id)_previewView;
- (id)_proceduralWallpaperViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 variant:(int)arg2;
- (void)_startDateTimer;
- (void)_stopDateTimer;
- (void)_updateDateView;
- (id)_wallpaperView;
- (id)_wallpaperViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_wallpaperViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 image:(id)arg2 supportsCropping:(BOOL)arg3 variant:(int)arg4;
- (id)_wallpaperViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 variant:(int)arg2 options:(id)arg3;
- (BOOL)colorSamplingEnabled;
- (void)dealloc;
- (id)delegate;
- (id)initWithColorSamplingEnabled:(BOOL)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 name:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithProceduralWallpaper:(id)arg1 options:(id)arg2;
- (id)initWithScrollableImage:(id)arg1;
- (id)initWithWallpaperVariant:(int)arg1;
- (id)legibilitySettings;
- (void)loadView;
- (BOOL)motionEnabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setColorSamplingEnabled:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMotionEnabled:(BOOL)arg1;
- (void)setWallpaperForLocations:(int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)wallpaperImage;
- (void)wallpaperView:(id)arg1 legibilitySettingsDidChange:(id)arg2;

@end
