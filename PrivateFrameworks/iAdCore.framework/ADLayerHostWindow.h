/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@interface ADLayerHostWindow : UIWindow  {
}

+ (id)layerHostWindowForView:(id)arg1;

- (id)init;
- (BOOL)_isWindowServerHostingManaged;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })_centerForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setupConfiguration;
- (struct CGPoint { float x1; float x2; })_centerForCenter:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_screenTransform:(float)arg1;

@end