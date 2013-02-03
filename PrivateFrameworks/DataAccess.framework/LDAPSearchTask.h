/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class DADContactsSearchQuery, NSMutableArray, NSTimer;

@interface LDAPSearchTask : LDAPTask {
    NSTimer *_checkResultsTimer;
    NSMutableArray *_foundContacts;
    struct ldap { } *_ld;
    NSInteger _msgId;
    DADContactsSearchQuery *_query;
}

@property(readonly) DADContactsSearchQuery *query;

- (void)_appendKey:(id)arg1 value:(id)arg2 toSearchResultElement:(id)arg3;
- (id)_copyContactSearchElementFromLDAPElement:(struct ldapmsg { }*)arg1;
- (id)_copySearchStringForQueryInput:(id)arg1;
- (void)_failImmediately;
- (id)_initializeServer;
- (BOOL)_promptForPassword;
- (id)_startQuery;
- (void)checkForResults:(id)arg1;
- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (id)initWithQuery:(id)arg1;
- (void)performTask;
- (id)query;

@end
