/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@class NSArray, NSString, VSRecognitionAction, <VSRecognitionSessionDelegate>;

@interface VSRecognitionSession : NSObject {
    struct { 
        unsigned int delegateWillBegin : 1; 
        unsigned int delegateBegin : 1; 
        unsigned int delegateOpenURL : 1; 
        unsigned int delegateComplete : 1; 
        unsigned int debugDumpEnabled : 1; 
        unsigned int preferredEngine : 2; 
        unsigned int performHandlerActions : 1; 
        unsigned int allowSensitiveActions : 1; 
        unsigned int bluetoothAllowed : 1; 
        unsigned int resetNextAction : 1; 
        unsigned int actionBegan : 1; 
        unsigned int actionBeginning : 1; 
        unsigned int actionBeginDeferred : 1; 
        unsigned int invalid : 1; 
        unsigned int observeKeywordChange : 1; 
    NSString *_audioInputPath;
    VSRecognitionAction *_currentAction;
    NSString *_debugDumpPath;
    <VSRecognitionSessionDelegate> *_delegate;
    id _handlingThread;
    void *_keepAlive;
    NSUInteger _keywordPhase;
    double _levelInterval;
    NSString *_modelIdentifier;
    } _sessionFlags;
    NSArray *_topLevelKeywords;
}

- (void)_actionCompleted:(id)arg1 nextAction:(id)arg2 error:(id)arg3;
- (BOOL)_actionStarted:(id)arg1;
- (struct __CFDictionary { }*)_createKeywordIndex;
- (id)_createPhaseSortedKeywordsFromArray:(id)arg1;
- (id)_currentRecognizeAction;
- (void)_init;
- (void)_keywordIndexChanged;
- (id)_keywordsForModelIdentifier:(id)arg1;
- (void)_notifyDelegateActionStarted;
- (id)_notifyDelegateOpenURL:(id)arg1;
- (id)_recognitionResultHandlingThread;
- (void)_setAction:(id)arg1;
- (id)_topLevelKeywords;
- (id)beginNextAction;
- (id)cancel;
- (id)cancelMaintainingKeepAlive:(BOOL)arg1;
- (void)dealloc;
- (id)debugDumpPath;
- (id)displayResultString;
- (id)displayStatusString;
- (BOOL)hasDeferredAction;
- (id)init;
- (id)initWithModelIdentifier:(id)arg1;
- (float)inputLevel;
- (BOOL)isActivelyRecognizing;
- (BOOL)isBusy;
- (BOOL)isFinished;
- (BOOL)isRecognizing;
- (BOOL)isValid;
- (id)keywordAtIndex:(NSInteger)arg1;
- (NSInteger)keywordCount;
- (BOOL)nextActionWillRecognize;
- (BOOL)nextActionWillTerminateSession;
- (void)recognitionResultHandlingThread:(id)arg1 didHandleResults:(id)arg2 nextAction:(id)arg3;
- (id)reset;
- (BOOL)sensitiveActionsEnabled;
- (BOOL)setBluetoothInputAllowed:(BOOL)arg1;
- (BOOL)setDebugDumpEnabled:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInputLevelUpdateInterval:(double)arg1;
- (void)setKeywordPhase:(NSUInteger)arg1;
- (BOOL)setNextRecognitionAudioInputPath:(id)arg1;
- (BOOL)setNextRecognitionRequiresReset:(BOOL)arg1;
- (void)setPerformRecognitionHandlerActions:(BOOL)arg1;
- (BOOL)setPreferredEngine:(NSInteger)arg1;
- (void)setSensitiveActionsEnabled:(BOOL)arg1;
- (id)spokenFeedbackString;

@end
