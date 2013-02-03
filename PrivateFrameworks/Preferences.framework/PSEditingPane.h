/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSSpecifier;

@interface PSEditingPane : UIView {
    unsigned int _requiresKeyboard : 1;
    id _delegate;
    PSSpecifier *_specifier;
}

+ (id)defaultBackgroundColor;
+ (struct CGSize { float x1; float x2; })defaultSize;

- (void)addNewValue;
- (BOOL)changed;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRect;
- (void)dealloc;
- (void)doneEditing;
- (BOOL)drawLabel;
- (void)drawLabelInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawPinstripesInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)editMode;
- (BOOL)handlesDoneButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)preferenceSpecifier;
- (id)preferenceValue;
- (BOOL)requiresKeyboard;
- (void)setDelegate:(id)arg1;
- (void)setPreferenceSpecifier:(id)arg1;
- (void)setPreferenceValue:(id)arg1;
- (id)specifierLabel;
- (void)viewDidBecomeVisible;
- (BOOL)wantsNewButton;

@end
