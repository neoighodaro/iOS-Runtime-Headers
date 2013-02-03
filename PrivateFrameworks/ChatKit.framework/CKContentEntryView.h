/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableArray, UIView, CKContentEntryBridge, CKTextContentView;

@interface CKContentEntryView : UIScrollView <CKEntryField, UITextContentViewDelegate, CKContentEntryBridgeClient> {
    unsigned int _showsSubject : 1;
    unsigned int _viewsLoaded : 1;
    CKTextContentView *_activeView;
    CKContentEntryBridge *_bridge;
    NSMutableArray *_contentViews;
    id _entryFieldDelegate;
    BOOL _needsScrollToVisible;
    UIView *_subjectLine;
    CKTextContentView *_subjectView;
}

@property(readonly) NSArray *contentViews;
@property BOOL showsSubject;

- (void)_addContentView:(id)arg1;
- (void)_adjustAllContent;
- (void)_loadEntryViews;
- (void)_reloadEntryViewsIfLoaded;
- (void)_removeContentView:(id)arg1;
- (void)_scrollViewAnimationEnded;
- (void)_setupGestureRecognizers;
- (id)attachments;
- (void)attachmentsDidChange;
- (BOOL)canPasteObject:(id)arg1;
- (void)clearMessage;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentEntryFrame:(BOOL)arg1;
- (id)contentViews;
- (NSInteger)cursorPosition;
- (void)dealloc;
- (void)disableEditing;
- (id)documentFragmentForPasteboardItemAtIndex:(NSInteger)arg1 inTextContentView:(id)arg2;
- (id)entryFieldDelegate;
- (BOOL)hasContent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)insertMessagePart:(id)arg1;
- (BOOL)isActive;
- (NSInteger)lastCursorPosition;
- (void)loadSubviews;
- (void)makeActive;
- (id)messageComposition;
- (id)messageParts;
- (void)moveCursorToEnd;
- (void)reflowContent;
- (void)removeFromSuperview;
- (void)resetKeyboardDelegate:(id)arg1;
- (void)restoreCursorPosition;
- (void)saveCursorPosition;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (void)setContentHidden:(BOOL)arg1 subjectHidden:(BOOL)arg2;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setCursorPosition:(NSInteger)arg1;
- (void)setEntryFieldDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setIgnoreAnimations:(BOOL)arg1;
- (void)setMessageComposition:(id)arg1;
- (void)setMessageParts:(id)arg1;
- (void)setShowsSubject:(BOOL)arg1;
- (void)setSubject:(id)arg1;
- (void)showSubjectLinesAndDefaultText:(BOOL)arg1;
- (BOOL)showsSubject;
- (id)subject;
- (id)supportedPasteboardTypesInTextContentView:(id)arg1;
- (void)tapGesture:(id)arg1;
- (void)textContentView:(id)arg1 didChangeSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)textContentView:(id)arg1 shouldChangeSizeForContentSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)textContentView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 replacementText:(id)arg3;
- (void)textContentViewDidBeginEditing:(id)arg1;
- (void)textContentViewDidChange:(id)arg1;
- (BOOL)textContentViewShouldBeginEditing:(id)arg1;
- (BOOL)textContentViewShouldEndEditing:(id)arg1;
- (void)updateCandidateDisplay;

@end
