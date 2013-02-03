/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UILabel;

@interface SUSubtitledButton : UIButton {
    struct __CFDictionary { } *_subtitleContentLookup;
    UILabel *_subtitleView;
}

@property(retain,readonly) NSString *currentSubtitle;
@property(retain,readonly) UIColor *currentSubtitleColor;
@property(retain,readonly) UIColor *currentSubtitleShadowColor;
@property(retain,readonly) UILabel *subtitleLabel;

- (void)_setupSubtitleView;
- (id)_subtitleFont;
- (NSInteger)_subtitleLineBreakMode;
- (id)_subtitledContentForState:(NSUInteger)arg1;
- (id)currentSubtitle;
- (id)currentSubtitleColor;
- (id)currentSubtitleShadowColor;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setSubtitle:(id)arg1 forState:(NSUInteger)arg2;
- (void)setSubtitleColor:(id)arg1 forState:(NSUInteger)arg2;
- (void)setSubtitleShadowColor:(id)arg1 forState:(NSUInteger)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)subtitleColorForState:(NSUInteger)arg1;
- (id)subtitleForState:(NSUInteger)arg1;
- (id)subtitleLabel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })subtitleRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)subtitleShadowColorForState:(NSUInteger)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
