/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableDictionary;

@interface DAAccountManager : NSObject {
    BOOL _accountSaveInProgress;
    NSMutableDictionary *_accounts;
    NSMutableDictionary *_accountsToAdd;
    NSMutableDictionary *_accountsToRemove;
    NSInteger _pendingAccountSetupCount;
}

+ (id)sharedInstance;
+ (void)vendDaemonManagers:(Class)arg1;

- (id)_accountSettingsAccountTypes;
- (void)_reloadAccounts;
- (void)_removeStoresForAccountWithID:(id)arg1;
- (void)_respondToAccountsChangedNotification;
- (BOOL)_saveAllAccountSettings:(BOOL)arg1;
- (void)_startAgentMonitoring;
- (void)_stopAgentMonitoring;
- (id)accountWithID:(id)arg1;
- (id)accountWithPersistentUUID:(id)arg1;
- (id)accounts;
- (id)accountsOfClass:(Class)arg1;
- (BOOL)addAccount:(id)arg1;
- (void)addPendingAccountSetup;
- (void)checkValidityForAccount:(id)arg1 consumer:(id)arg2;
- (void)cleanupLaunchdSemaphore;
- (void)dealloc;
- (void)disableDaemon;
- (void)enableDaemon;
- (BOOL)hasActiveAccounts;
- (BOOL)hasPendingAccountSetup;
- (id)init;
- (id)pendingAccounts;
- (BOOL)removeAccount:(id)arg1;
- (void)removePendingAccountSetup;
- (BOOL)saveAllAccountSettings;

@end
