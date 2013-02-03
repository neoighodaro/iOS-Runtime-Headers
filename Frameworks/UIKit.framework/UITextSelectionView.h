/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, UITextRangeView, UIView<UITextSelectingContainer>, NSTimer;

@interface UITextSelectionView : UIView {
    BOOL m_caretBlinks;
    BOOL m_caretNeedsColorUpdate;
    BOOL m_caretShowingNow;
    NSTimer *m_caretTimer;
    UIView *m_caretView;
    UITextRangeView *m_rangeView;
    BOOL m_selectionChanging;
    BOOL m_showRangedSelection;
    NSInteger m_state;
    UIView<UITextSelectingContainer> *m_view;
    BOOL m_visible;
}

@property(readonly) UIView *caretView;
@property(readonly) UITextRangeView *rangeView;
@property(readonly) UIView<UITextSelectingContainer> *view;
@property BOOL caretBlinks;
@property(readonly) BOOL selectionCommandsShowing;
@property BOOL showRangedSelection;
@property(readonly) NSInteger state;
@property BOOL visible;

- (void)activate;
- (void)cancelDelayedSelectionCommandRequests;
- (void)caretBlinkTimerFired:(id)arg1;
- (BOOL)caretBlinks;
- (id)caretView;
- (void)clearCaret;
- (void)clearCaretBlinkTimer;
- (void)clearRange;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })clippedTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)convertedSelectionRects;
- (void)deactivate;
- (void)dealloc;
- (void)detach;
- (void)didRotate;
- (void)doneMagnifying;
- (void)hideCaret:(NSInteger)arg1;
- (void)hideSelectionCommands;
- (void)hideSelectionCommandsAfterDelay:(double)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithView:(id)arg1;
- (void)install;
- (void)prepareForMagnification;
- (id)rangeView;
- (void)removeFromSuperview;
- (void)scaleDidChange;
- (void)scaleWillChange;
- (id)scrollView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionBoundingBox;
- (BOOL)selectionCommandsShowing;
- (void)selectionDidScroll:(id)arg1;
- (void)selectionWillScroll:(id)arg1;
- (void)setCaretBlinks:(BOOL)arg1;
- (void)setShowRangedSelection:(BOOL)arg1;
- (void)setVisible:(BOOL)arg1;
- (void)showCaret:(NSInteger)arg1;
- (BOOL)showRangedSelection;
- (void)showSelectionCommands;
- (void)showSelectionCommandsAfterDelay:(double)arg1;
- (void)startCaretBlinkIfNeeded;
- (NSInteger)state;
- (void)textSelectionViewActivated:(id)arg1;
- (void)touchCaretBlinkTimer;
- (void)updateBaseIsStartWithContentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateSelection;
- (void)updateSelectionDots;
- (void)updateSelectionWithContentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateWithMagnifierTerminalPoint:(BOOL)arg1;
- (id)view;
- (BOOL)visible;
- (void)willRotate;

@end
