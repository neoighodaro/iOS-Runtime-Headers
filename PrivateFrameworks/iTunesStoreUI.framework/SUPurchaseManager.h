/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUPurchaseManagerDelegate>, SUAuthenticationObserver, NSMutableArray, NSMutableSet;

@interface SUPurchaseManager : NSObject <SUAuthenticationDelegate, SUContinuationDelegate> {
    SUAuthenticationObserver *_authenticationObserver;
    <SUPurchaseManagerDelegate> *_delegate;
    NSMutableSet *_inflightContinuations;
    NSMutableArray *_pendingContinuations;
    NSMutableArray *_pendingPurchases;
    BOOL _shouldSuspendWhenFinished;
    BOOL _showingErrorDialogs;
    BOOL _waitingForAuthentication;
}

@property <SUPurchaseManagerDelegate> *delegate;

+ (void)setSharedManager:(id)arg1;
+ (id)sharedManager;

- (id)_authenticationObserver;
- (void)_dialogDidFinish:(id)arg1;
- (void)_enqueueContinuations:(id)arg1;
- (void)_enqueuePurchases:(id)arg1;
- (BOOL)_needsAuthenticationForPurchases:(id)arg1;
- (void)_performNextAction;
- (void)_showDialogsForErrors:(id)arg1;
- (void)_startContinuations:(id)arg1;
- (void)_startPurchases:(id)arg1;
- (BOOL)addPurchaseBatch:(id)arg1;
- (void)authenticationDidFail:(id)arg1;
- (void)authenticationDidFinish:(id)arg1;
- (void)authenticationDidTimeout:(id)arg1;
- (void)continuation:(id)arg1 failedWithError:(id)arg2;
- (void)continuationFinished:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)purchaseScriptObject:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
