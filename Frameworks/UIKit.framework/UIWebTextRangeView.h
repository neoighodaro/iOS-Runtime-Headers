/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSArray, UIWebDragDotView, UIView<UITextSelectingContainer>, <UIWebTextRangeViewController>;

@interface UIWebTextRangeView : UIView {
    UIWebDragDotView *_bottomDot;
    <UIWebTextRangeViewController> *_controller;
    BOOL _magnifying;
    NSMutableArray *_rectViews;
    NSArray *_rects;
    UIWebDragDotView *_topDot;
    UIView<UITextSelectingContainer> *m_container;
}

@property(readonly) UIView<UITextSelectingContainer> *container;
@property <UIWebTextRangeViewController> *controller;
@property(copy) NSArray *rects;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRect;
- (id)container;
- (id)controller;
- (void)dealloc;
- (void)doneMagnifying;
- (struct CGPoint { float x1; float x2; })endCorner;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })endEdge;
- (void)geometryChanged;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (void)prepareForMagnification;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectAtIndex:(NSInteger)arg1;
- (id)rectViewAtIndex:(NSInteger)arg1;
- (id)rects;
- (void)removeFromSuperview;
- (void)setController:(id)arg1;
- (void)setRects:(id)arg1;
- (struct CGPoint { float x1; float x2; })startCorner;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })startEdge;
- (void)updateDragDots;
- (void)updateRectViews;

@end
