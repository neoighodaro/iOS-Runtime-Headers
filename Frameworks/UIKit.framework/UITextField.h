/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITextFieldBackgroundView, UIView, UIColor, UIImage, UITextFieldAtomBackgroundView, UITextInputTraits, UILabel, NSString, UITextSelectionView, UIImageView, UITextFieldBorderView, UITextInteractionAssistant, UITextFieldLabel;

@interface UITextField : UIControl <UITextInputTraits, NSCoding> {
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct { 
        unsigned int secureTextChanged : 1; 
        unsigned int guard : 1; 
        unsigned int delegateRespondsToHandleKeyDown : 1; 
        unsigned int verticallyCenterText : 1; 
        unsigned int isAnimating : 4; 
        unsigned int inactiveHasDimAppearance : 1; 
        unsigned int becomesFirstResponderOnClearButtonTap : 1; 
        unsigned int clearsOnBeginEditing : 1; 
        unsigned int adjustsFontSizeToFitWidth : 1; 
        unsigned int fieldEditorAttached : 1; 
        unsigned int inBecomeFirstResponder : 1; 
        unsigned int becomingFirstResponder : 1; 
        unsigned int undoDisabled : 1; 
        unsigned int contentsRTL : 1; 
        unsigned int explicitAlignment : 1; 
    UITextFieldAtomBackgroundView *_atomBackgroundView;
    UIImage *_background;
    UITextFieldBorderView *_backgroundView;
    NSInteger _borderStyle;
    UIColor *_caretColor;
    UIView *_clearButton;
    NSInteger _clearButtonMode;
    } _clearButtonOffset;
    id _delegate;
    UIImage *_disabledBackground;
    UITextFieldBorderView *_disabledBackgroundView;
    float _fullFontSize;
    UIImageView *_iconView;
    UITextInteractionAssistant *_interactionAssistant;
    UILabel *_label;
    float _labelOffset;
    UIView *_leftView;
    NSInteger _leftViewMode;
    } _leftViewOffset;
    float _minimumFontSize;
    double _mouseDownTime;
    UITextInputTraits *_nonAtomTraits;
    float _paddingBottom;
    float _paddingLeft;
    float _paddingRight;
    float _paddingTop;
    UITextFieldLabel *_placeholderLabel;
    float _progress;
    UIView *_rightView;
    NSInteger _rightViewMode;
    } _rightViewOffset;
    NSInteger _scrollXOffset;
    NSInteger _scrollYOffset;
    } _selectionRange;
    UITextSelectionView *_selectionView;
    NSString *_style;
    UITextFieldBackgroundView *_systemBackgroundView;
    NSString *_text;
    UIColor *_textColor;
    } _textFieldFlags;
    NSString *_textFont;
    UITextFieldLabel *_textLabel;
    UITextInputTraits *_traits;
}

@property(retain) UIImage *background;
@property <UITextFieldDelegate> *delegate;
@property(retain) UIImage *disabledBackground;
@property(retain) UIFont *font;
@property(retain) UIView *leftView;
@property(copy) NSString *placeholder;
@property(retain) UIView *rightView;
@property(copy) NSString *text;
@property(retain) UIColor *textColor;
@property BOOL adjustsFontSizeToFitWidth;
@property NSInteger autocapitalizationType;
@property NSInteger autocorrectionType;
@property NSInteger borderStyle;
@property NSInteger clearButtonMode;
@property BOOL clearsOnBeginEditing;
@property(getter=isEditing,readonly) BOOL editing;
@property BOOL enablesReturnKeyAutomatically;
@property NSInteger keyboardAppearance;
@property NSInteger keyboardType;
@property NSInteger leftViewMode;
@property float minimumFontSize;
@property NSInteger returnKeyType;
@property NSInteger rightViewMode;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property NSInteger textAlignment;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_atomBackgroundViewFrame;
- (void)_clearBackgroundViews;
- (void)_clearButtonClicked:(id)arg1;
- (void)_clearStyle;
- (id)_copyFont:(id)arg1 newSize:(float)arg2 maxSize:(float)arg3;
- (void)_drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forLabel:(id)arg2;
- (void)_endedEditing;
- (id)_fieldEditor;
- (BOOL)_fieldEditorAttached;
- (id)_firstResponder;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForLabel:(id)arg1 inTextRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct CGSize { float x1; float x2; })_leftViewOffset;
- (float)_marginTopForText:(id)arg1;
- (id)_placeholderView;
- (void)_populateArchivedSubviews:(id)arg1;
- (struct CGSize { float x1; float x2; })_rightViewOffset;
- (id)_scriptingInfo;
- (struct CGPoint { float x1; float x2; })_scrollOffset;
- (BOOL)_sendInitialMouseEvents;
- (void)_setImplicitAlignment;
- (void)_setLeftViewOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)_setLtoRTextDirection:(id)arg1;
- (void)_setNeedsStyleRecalc;
- (void)_setRightViewOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)_setRtoLTextDirection:(id)arg1;
- (void)_setSystemBackgroundViewActive:(BOOL)arg1;
- (BOOL)_shouldEndEditing;
- (BOOL)_showsAtomBackground;
- (BOOL)_showsClearButton:(BOOL)arg1;
- (BOOL)_showsLeftView;
- (BOOL)_showsRightView;
- (void)_sizeChanged:(BOOL)arg1;
- (id)_style;
- (Class)_systemBackgroundViewClass;
- (id)_text;
- (id)_textLabelView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_textRectExcludingButtonsForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_textRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forEditing:(BOOL)arg2;
- (struct CGSize { float x1; float x2; })_textSize;
- (void)_updateAtomBackground;
- (void)_updateAutosizeStyleIfNeeded;
- (void)_updateBackgroundViews;
- (void)_updateButtons;
- (void)_updateLabel;
- (void)_updateTextColor;
- (void)_updateTextLabel;
- (BOOL)adjustsFontSizeToFitWidth;
- (NSInteger)atomStyle;
- (void)attachFieldEditor:(id)arg1;
- (id)background;
- (BOOL)becomeFirstResponder;
- (void)beginSelectionChange;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })borderRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSInteger)borderStyle;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canResignFirstResponder;
- (void)cancelAutoscroll;
- (BOOL)caretBlinks;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRect;
- (NSUInteger)characterOffsetAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (NSInteger)clearButtonMode;
- (struct CGSize { float x1; float x2; })clearButtonOffset;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })clearButtonRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })clearButtonRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)clearSelection;
- (void)clearText;
- (BOOL)clearsOnBeginEditing;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })closestCaretRectForPoint:(struct CGPoint { float x1; float x2; })arg1 inSelection:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)collapseSelection;
- (struct CGPoint { float x1; float x2; })constrainedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)content;
- (void)copy:(id)arg1;
- (id)createPlaceholderLabelWithFont:(id)arg1 andTextAlignment:(NSInteger)arg2;
- (id)createTextLabelWithTextColor:(id)arg1;
- (id)customOverlayContainer;
- (void)cut:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)disabledBackground;
- (id)documentFragmentForPasteboardItemAtIndex:(NSInteger)arg1;
- (void)drawBorder:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawPlaceholderInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)drawsAsAtom;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })editRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })editingRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)endSelectionChange;
- (BOOL)fieldEditor:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (BOOL)fieldEditor:(id)arg1 shouldReplaceWithText:(id)arg2;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })fieldEditor:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 toCharacterRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (void)fieldEditorDidBecomeFirstResponder:(id)arg1;
- (void)fieldEditorDidChange:(id)arg1;
- (void)fieldEditorDidChangeSelection:(id)arg1;
- (void)fieldEditorDidResignFirstResponder:(id)arg1;
- (BOOL)fieldEditorShouldEndEditing:(id)arg1;
- (id)font;
- (void)forwardInvocation:(id)arg1;
- (BOOL)hasMarkedText;
- (BOOL)hasSelection;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })iconRect;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)insertText:(id)arg1;
- (id)interactionAssistant;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)isEditable;
- (BOOL)isEditing;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isFirstResponder;
- (BOOL)isUndoEnabled;
- (NSInteger)keyboardInput:(id)arg1 positionForAutocorrection:(id)arg2;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInputChanged:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (void)layoutSubviews;
- (void)layoutTilesNow;
- (id)leftView;
- (NSInteger)leftViewMode;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })leftViewRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (float)minimumFontSize;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)moveSelectionToStartOrEndOfCurrentWord;
- (float)paddingBottom;
- (float)paddingLeft;
- (float)paddingRight;
- (float)paddingTop;
- (void)paste:(id)arg1;
- (id)placeholder;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })placeholderRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)pointAtEndOfLine:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)pointAtStartOfLine:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)resignFirstResponder;
- (id)rightView;
- (NSInteger)rightViewMode;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rightViewRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)searchText;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)selectAll;
- (void)selectAllFromFieldEditor:(id)arg1;
- (id)selectedText;
- (void)selectionChanged;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionClipRect;
- (NSInteger)selectionGranularity;
- (BOOL)selectionGranularityIncreasing;
- (NSUInteger)selectionOffsetInMarkedText;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })selectionRange;
- (id)selectionRects;
- (NSInteger)selectionState;
- (id)selectionView;
- (BOOL)selectionVisible;
- (void)setAdjustsFontSizeToFitWidth:(BOOL)arg1;
- (void)setAnimating:(BOOL)arg1;
- (void)setAtomStyle:(NSInteger)arg1;
- (void)setAutoresizesTextToFit:(BOOL)arg1;
- (void)setBackground:(id)arg1;
- (void)setBecomesFirstResponderOnClearButtonTap:(BOOL)arg1;
- (void)setBorderStyle:(NSInteger)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCaretBlinks:(BOOL)arg1;
- (void)setClearButtonMode:(NSInteger)arg1;
- (void)setClearButtonOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setClearButtonStyle:(NSInteger)arg1;
- (void)setClearsOnBeginEditing:(BOOL)arg1;
- (void)setContentVerticalAlignment:(NSInteger)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabledBackground:(id)arg1;
- (void)setDrawsAsAtom:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFont:(id)arg1 fullFontSize:(float)arg2;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setIcon:(id)arg1;
- (void)setInactiveHasDimAppearance:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelOffset:(float)arg1;
- (void)setLeftView:(id)arg1;
- (void)setLeftViewMode:(NSInteger)arg1;
- (void)setMinimumFontSize:(float)arg1;
- (void)setPaddingBottom:(float)arg1;
- (void)setPaddingLeft:(float)arg1;
- (void)setPaddingRight:(float)arg1;
- (void)setPaddingTop:(float)arg1 paddingLeft:(float)arg2;
- (void)setPaddingTop:(float)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setProgress:(float)arg1;
- (BOOL)setRangedSelectionExtentPoint:(struct CGPoint { float x1; float x2; })arg1 baseIsStart:(BOOL)arg2;
- (void)setRightView:(id)arg1;
- (void)setRightViewMode:(NSInteger)arg1;
- (void)setSecureTextEntry:(BOOL)arg1;
- (void)setSelectionGranularity:(NSInteger)arg1;
- (void)setSelectionGranularityIncreasing:(BOOL)arg1;
- (void)setSelectionRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)setSelectionToNextGranularity:(struct CGPoint { float x1; float x2; })arg1;
- (void)setSelectionVisible:(BOOL)arg1;
- (void)setSelectionWithFirstPoint:(struct CGPoint { float x1; float x2; })arg1 secondPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(NSInteger)arg1;
- (void)setTextAutorresizesToFit:(BOOL)arg1;
- (void)setTextCentersHorizontally:(BOOL)arg1;
- (void)setTextCentersVertically:(BOOL)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextFont:(id)arg1;
- (void)setUndoEnabled:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)startAutoscroll:(struct CGPoint { float x1; float x2; })arg1;
- (id)supportedPasteboardTypes;
- (id)supportedPasteboardTypesForCurrentSelection;
- (id)text;
- (NSInteger)textAlignment;
- (id)textColor;
- (id)textInputTraits;
- (id)textLabel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)undoManager;
- (BOOL)webView:(id)arg1 shouldInsertText:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(NSInteger)arg4;
- (id)webView;
- (void)willAttachFieldEditor:(id)arg1;
- (void)willDetachFieldEditor:(id)arg1;
- (id)wordAtPoint:(struct CGPoint { float x1; float x2; })arg1;

@end
