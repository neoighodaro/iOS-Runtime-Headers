/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSMutableArray, NSMutableSet;

@interface ISPurchaseQueue : NSObject <ISSingleton> {
    id _canPurchaseBatchInfo;
    NSMutableSet *_futurePurchases;
    NSMutableArray *_pendingPurchases;
    NSMutableSet *_purchasedItems;
}

@property(readonly) NSInteger numberOfPendingPurchases;

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (id)_createPlaceholderDownloadForPurchase:(id)arg1;
- (void)_daemonExited:(id)arg1;
- (void)_mainThreadDaemonExited:(id)arg1;
- (void)_purchaseFailed:(id)arg1;
- (void)_purchaseFinished:(id)arg1;
- (void)_sendFailureForItemIdentifier:(id)arg1;
- (void)_sendFinishForItemIdentifier:(id)arg1;
- (void)_sendItemSetChanged:(id)arg1;
- (void)_sendRemovedForItemIdentifier:(id)arg1;
- (void)addFuturePurchase:(id)arg1;
- (void)addItemToPurchasedSet:(unsigned long long)arg1;
- (void)beginCanPurchaseBatch;
- (BOOL)canPurchaseItems:(id)arg1 returningError:(id*)arg2;
- (void)cancelFuturePurchase:(id)arg1;
- (void)dealloc;
- (void)endCanPurchaseBatch;
- (BOOL)enqueuePurchases:(id)arg1;
- (id)init;
- (BOOL)itemIsPurchased:(id)arg1;
- (NSInteger)numberOfPendingPurchases;
- (void)removeItemFromPurchasedSet:(unsigned long long)arg1;

@end
