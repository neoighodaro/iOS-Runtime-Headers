/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage, UIColor;

@interface UISearchBarBackground : UIView {
    unsigned int _isTranslucent : 1;
    unsigned int _usesEmbeddedAppearance : 1;
    unsigned int _barStyle : 3;
    UIImage *_backgroundImage;
    UIColor *_tintColor;
}

@property(retain) UIImage *backgroundImage;
@property(retain) UIColor *tintColor;
@property NSInteger barStyle;
@property(getter=isTranslucent) BOOL translucent;
@property BOOL usesEmbeddedAppearance;

- (BOOL)_canDrawContent;
- (id)backgroundImage;
- (NSInteger)barStyle;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isTranslucent;
- (void)setBackgroundImage:(id)arg1;
- (void)setBarStyle:(NSInteger)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTranslucent:(BOOL)arg1;
- (void)setUsesEmbeddedAppearance:(BOOL)arg1;
- (id)tintColor;
- (BOOL)usesEmbeddedAppearance;

@end
