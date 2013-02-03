/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary, UIDelayedAction, UIKeyboardInputManager, CandWord, <UIKeyboardInput>, UITextInputTraits, NSArray, NSString, NSObject<UIKeyboardRecording><UIApplicationEventRecording>, UIKeyboardLanguageIndicator, <UIKeyboardCandidateList>, UIAutocorrectInlinePrompt, UIKeyboardLayout, NSTimer;

@interface UIKeyboardImpl : UIView {
    struct CGPoint { 
        float x; 
        float y; 
    BOOL m_anotherTouchWaiting;
    NSUInteger m_autoDeleteCount;
    double m_autoDeleteInterval;
    double m_autoDeleteLastDelete;
    BOOL m_autoDeleteOK;
    unsigned short m_autoDeleteShiftCharacter;
    NSTimer *m_autoDeleteTimer;
    BOOL m_autocapitalizationPreference;
    UIAutocorrectInlinePrompt *m_autocorrectPrompt;
    UIDelayedAction *m_autocorrectPromptAction;
    BOOL m_autocorrectPromptTimerFired;
    CandWord *m_autocorrection;
    BOOL m_autocorrectionPreference;
    BOOL m_autoshift;
    <UIKeyboardCandidateList> *m_candidateList;
    NSArray *m_candidates;
    BOOL m_caretBlinks;
    BOOL m_caretShowingNow;
    BOOL m_caretVisible;
    NSInteger m_changeCount;
    BOOL m_changeNotificationDisabled;
    double m_changeTime;
    BOOL m_changed;
    NSInteger m_currentDirection;
    UITextInputTraits *m_defaultTraits;
    <UIKeyboardInput> *m_delegate;
    BOOL m_delegateIsSMSTextView;
    BOOL m_doubleSpacePeriodPreference;
    BOOL m_inDealloc;
    BOOL m_initializationDone;
    UIKeyboardInputManager *m_inputManager;
    NSString *m_inputModeLastChosen;
    } m_inputPoint;
    NSMutableDictionary *m_keyedLayouts;
    UIKeyboardLanguageIndicator *m_languageIndicator;
    UIKeyboardLayout *m_layout;
    BOOL m_longPress;
    UIDelayedAction *m_longPressAction;
    struct __CFRunLoopObserver { } *m_observer;
    NSInteger m_orientation;
    BOOL m_performDecomposingDelete;
    BOOL m_performanceLoggingEnabled;
    BOOL m_preferencesNeedSynchronization;
    NSString *m_previousInputString;
    NSObject<UIKeyboardRecording><UIApplicationEventRecording> *m_recorder;
    NSInteger m_returnKeyState;
    BOOL m_selecting;
    BOOL m_shift;
    BOOL m_shiftHeldDownNeedsUpdated;
    BOOL m_shiftLocked;
    BOOL m_shiftLockedEnabled;
    BOOL m_shiftNeedsUpdate;
    BOOL m_shiftPreventAutoshift;
    BOOL m_shouldChargeKeys;
    BOOL m_shouldSkipCandidateSelection;
    UIDelayedAction *m_synchronizePreferencesAction;
    BOOL m_syntheticInput;
    UITextInputTraits *m_traits;
    BOOL m_updatingPreferences;
    BOOL m_userChangedSelection;
}

@property(retain) <UIKeyboardRecording><UIApplicationEventRecording> *recorder;
@property BOOL shouldSkipCandidateSelection;

+ (id)activeInstance;
+ (void)applicationWillSuspend:(id)arg1;
+ (struct CGSize { float x1; float x2; })defaultSize;
+ (struct CGSize { float x1; float x2; })defaultSizeForInterfaceOrientation:(NSInteger)arg1;
+ (struct CGSize { float x1; float x2; })defaultSizeForOrientation:(NSInteger)arg1;
+ (NSInteger)orientationForSize:(struct CGSize { float x1; float x2; })arg1;
+ (void)releaseSharedInstance;
+ (id)sharedInstance;

- (id)UILanguagePreference;
- (void)acceptAutocorrection;
- (void)acceptCandidate:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)acceptCurrentCandidate;
- (void)acceptCurrentCandidateIfSelected;
- (BOOL)acceptInputString:(id)arg1;
- (void)acceptWord:(id)arg1 firstDelete:(NSUInteger)arg2 addString:(id)arg3;
- (void)addInputObject:(id)arg1;
- (void)addInputString:(id)arg1 fromVariantKey:(BOOL)arg2;
- (void)addInputString:(id)arg1;
- (void)animateAutocorrection;
- (void)applicationResumedEventsOnly:(id)arg1;
- (void)applicationSuspendedEventsOnly:(id)arg1;
- (void)autoDeleteTimerFired:(id)arg1;
- (BOOL)autocapitalizationPreference;
- (id)autocorrectPrompt;
- (void)autocorrectionAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (BOOL)autocorrectionPreference;
- (BOOL)autocorrectionPreferenceForTraits;
- (id)automaticallySelectedOverlay;
- (void)callChanged;
- (void)callChangedSelection;
- (BOOL)callLayoutIsShiftKeyBeingHeld;
- (BOOL)callLayoutIsShiftKeyPlaneChooser;
- (void)callLayoutLongPressAction;
- (void)callLayoutSetShift:(BOOL)arg1;
- (BOOL)callLayoutShiftKeyRequiresImmediateUpdate;
- (void)callLayoutUpdateLocalizedKeys;
- (void)callLayoutUpdateReturnKey;
- (BOOL)callLayoutUsesAutoShift;
- (NSInteger)callPositionForAutocorrection:(id)arg1;
- (BOOL)callShouldDelete;
- (BOOL)callShouldInsertText:(id)arg1;
- (BOOL)canHandleKeyHitTest;
- (BOOL)canWriteKeyboardsExpandedPreferences;
- (id)candidateList;
- (void)candidateListAcceptCandidate:(id)arg1;
- (void)candidateListSelectionDidChange:(id)arg1;
- (BOOL)caretBlinks;
- (BOOL)caretVisible;
- (NSInteger)changeCount;
- (BOOL)changeNotificationDisabled;
- (struct __CFDictionary { }*)chargedKeyProbabilities;
- (void)clearAnimations;
- (void)clearAutocorrectPromptTimer;
- (void)clearChangeTimeAndCount;
- (void)clearChangedDelegate;
- (void)clearInput;
- (void)clearInputManager;
- (void)clearKeyAreas;
- (void)clearLayouts;
- (void)clearLongPressTimer;
- (void)clearSelection;
- (void)clearShiftState;
- (void)clearSynchronizePreferencesTimer;
- (void)clearTimers;
- (void)clearTransientState;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRectToAutocorrectRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 delegateView:(id)arg2 container:(id)arg3;
- (void)dealloc;
- (void)defaultsDidChange:(id)arg1;
- (void)defaultsDidChange;
- (void)delayedInit;
- (id)delegate;
- (BOOL)delegateIsSMSTextView;
- (BOOL)delegateSuggestionsForCurrentInput;
- (void)deleteFromInput;
- (BOOL)displaysCandidates;
- (BOOL)doubleSpacePeriodPreference;
- (void)enable;
- (void)fadeAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)fadeAutocorrectPrompt;
- (void)forceShiftUpdate;
- (void)forceShiftUpdateIfKeyboardStateChanged;
- (void)generateCandidates:(BOOL)arg1;
- (void)geometryChangeDone:(BOOL)arg1;
- (void)handleDelete;
- (void)handleDeleteAsRepeat:(BOOL)arg1;
- (void)handleDeleteWithNonZeroInputCount;
- (void)handleDeleteWithZeroInputCount;
- (void)handleHardwareKeyDownFromSimulator:(struct __GSEvent { }*)arg1;
- (void)handleObserverCallback;
- (void)handleStringInput:(id)arg1 fromVariantKey:(BOOL)arg2;
- (BOOL)hasEditableMarkedText;
- (BOOL)hasMarkedText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)inputModeFirstPreference;
- (id)inputModeLastChosen;
- (id)inputModeLastChosenPreference;
- (id)inputModeLastUsedPreference;
- (id)inputModePreference;
- (id)inputOverlayContainer;
- (void)installRecorder;
- (BOOL)isAllowedInputMode:(id)arg1;
- (BOOL)isAutoFillMode;
- (BOOL)isAutoShifted;
- (BOOL)isDesiredInputMode:(id)arg1;
- (BOOL)isLongPress;
- (BOOL)isShiftLocked;
- (BOOL)isShifted;
- (void)keyActivated;
- (void)keyDeactivated;
- (NSInteger)keyHitTest:(struct CGPoint { float x1; float x2; })arg1 touchStage:(NSInteger)arg2 atTime:(double)arg3 withPathInfo:(struct { unsigned char x1; unsigned char x2; unsigned char x3; float x4; float x5; struct CGPoint { float x_6_1_1; float x_6_1_2; } x6; void *x7; }*)arg4 forceShift:(BOOL)arg5;
- (BOOL)keySlidIntoSwipe;
- (id)keyboardDefaultForKey:(id)arg1;
- (BOOL)keyboardRecordingEnabled;
- (BOOL)keyboardsExpandedPreference;
- (id)localePreference;
- (void)longPressAction;
- (BOOL)needsToDeferUpdateTextCandidateView;
- (void)notifyShiftState;
- (NSInteger)orientation;
- (BOOL)performanceLoggingPreference;
- (NSUInteger)phraseBoundary;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)postEmptyDelegateNotificationIfNeeded;
- (void)prepareForGeometryChange;
- (void)prepareForSelectionChange;
- (void)recomputeActiveInputModes;
- (id)recorder;
- (void)registerKeyArea:(struct CGPoint { float x1; float x2; })arg1 withRadii:(struct CGPoint { float x1; float x2; })arg2 forKeyCode:(unsigned short)arg3 forLowerKey:(id)arg4 forUpperKey:(id)arg5;
- (void)removeAutocorrectPrompt;
- (void)removeFromSuperview;
- (BOOL)returnKeyEnabled;
- (NSInteger)returnKeyType;
- (id)searchStringForMarkedText;
- (void)setAnotherTouchWaiting:(BOOL)arg1;
- (void)setAutocorrection:(id)arg1;
- (void)setCandidates:(id)arg1;
- (void)setCaretBlinks:(BOOL)arg1;
- (void)setCaretVisible:(BOOL)arg1;
- (void)setChangeNotificationDisabled:(BOOL)arg1;
- (void)setChanged;
- (void)setDefaultTextInputTraits:(id)arg1;
- (void)setDelegate:(id)arg1 force:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setInitialDirection;
- (void)setInputMode:(id)arg1;
- (void)setInputModeFromPreferences;
- (void)setInputModeIfDifferentThanCurrent:(id)arg1;
- (void)setInputModeLastChosenPreference;
- (void)setInputModeLastUsedPreference;
- (void)setInputModePreference;
- (void)setInputModeToNextASCIICapableInPreferredList;
- (void)setInputModeToNextInPreferredList;
- (void)setInputObject:(id)arg1;
- (void)setInputPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setInputString:(id)arg1;
- (void)setKeyboardDefault:(id)arg1 forKey:(id)arg2;
- (void)setKeyboardsExpandedPreference;
- (void)setMarkedText;
- (void)setOrientationForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPhraseBoundary:(NSUInteger)arg1;
- (void)setPreviousInputString:(id)arg1;
- (void)setRecorder:(id)arg1;
- (void)setReturnKeyEnabled:(BOOL)arg1;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setShift:(BOOL)arg1 autoshift:(BOOL)arg2;
- (void)setShift:(BOOL)arg1;
- (void)setShiftLocked;
- (void)setShiftNeedsUpdate;
- (void)setShiftOffIfNeeded;
- (void)setShiftPreventAutoshift:(BOOL)arg1;
- (void)setShouldSkipCandidateSelection:(BOOL)arg1;
- (BOOL)shiftLockPreference;
- (BOOL)shiftLockedEnabled;
- (BOOL)shouldChargeKeys;
- (BOOL)shouldEnableShiftForDeletedCharacter:(unsigned short)arg1;
- (BOOL)shouldSkipCandidateSelection;
- (BOOL)shouldSwitchInputMode:(id)arg1;
- (void)showInputModeIndicator;
- (void)showNextCandidates;
- (void)startAutoDeleteTimer;
- (void)startCaretBlinkIfNeeded;
- (void)startKeyboardRecording;
- (void)stopAutoDelete;
- (void)stopKeyboardRecording;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })subtractKeyboardFrameFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (BOOL)suppliesCompletions;
- (void)synchronizePreferences;
- (void)synchronizePreferencesIfNeeded;
- (void)takeTextInputTraitsFrom:(id)arg1;
- (void)textChanged:(id)arg1;
- (id)textInputTraits;
- (void)timeElapsed:(NSUInteger)arg1 message:(id)arg2;
- (void)timeMark:(NSUInteger)arg1 message:(id)arg2;
- (void)timeMark:(NSUInteger)arg1;
- (void)toggleShift;
- (void)touchAutoDeleteTimerWithThreshold:(double)arg1;
- (void)touchAutocorrectPromptTimer;
- (void)touchLongPressTimer;
- (void)touchLongPressTimerWithDelay:(double)arg1;
- (void)touchSynchronizePreferencesTimer;
- (void)updateAutocorrectPrompt:(id)arg1;
- (void)updateAutocorrectPromptAction;
- (void)updateCandidateDisplay;
- (void)updateCandidateDisplayAsyncWithCandidates:(id)arg1 forInputManager:(id)arg2;
- (void)updateChangeTimeAndIncrementCount;
- (void)updateForChangedSelection;
- (void)updateInputManagerAutoShiftFlag;
- (void)updateLayout;
- (void)updateLayoutAndSetShift;
- (void)updateLayoutForInterfaceOrientation:(NSInteger)arg1;
- (void)updateObserverState;
- (void)updateReturnKey:(BOOL)arg1;
- (void)updateReturnKey;
- (void)updateShiftState;
- (void)updateTextCandidateView;

@end
