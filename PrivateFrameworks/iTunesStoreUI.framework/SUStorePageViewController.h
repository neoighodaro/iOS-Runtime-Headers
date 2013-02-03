/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSDictionary, NSString, UISegmentedControl, ISAuthenticationContext, SUPageSectionGroup, SUViewController, NSURL;

@interface SUStorePageViewController : SUViewController <ISURLOperationDelegate> {
    SUViewController *_activeChildViewController;
    NSInteger _activeSectionIndex;
    ISAuthenticationContext *_authContext;
    NSDictionary *_customHeaders;
    BOOL _loadingForSectionChange;
    BOOL _needsAuthentication;
    NSInteger _pageType;
    SUViewController *_pendingChildViewController;
    NSDictionary *_queryStringDictionary;
    struct __CFRunLoopTimer { } *_refreshTimer;
    BOOL _reloadOnAppear;
    UISegmentedControl *_sectionSwitchControl;
    SUPageSectionGroup *_sectionsGroup;
    BOOL _shouldFetchAutomatically;
    NSURL *_url;
    NSString *_urlBagKey;
}

@property(retain) ISAuthenticationContext *authenticationContext;
@property(retain) NSDictionary *customHeaders;
@property(retain) NSDictionary *queryStringDictionary;
@property(retain) NSURL *url;
@property(retain) NSString *urlBagKey;
@property BOOL needsAuthentication;
@property BOOL shouldFetchAutomatically;

- (void)_delayedFetchPage;
- (void)_fetchPage:(BOOL)arg1;
- (void)_finishSuccessfulLoad;
- (void)_fireRefreshTimer;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForActiveViewController;
- (void)_moveToRootSectionIfNecessary;
- (void)_reloadForOutput:(id)arg1 ofType:(NSInteger)arg2 fromURL:(id)arg3;
- (void)_resetRefreshTimerWithTimeInterval:(double)arg1;
- (void)_sectionControlAction:(id)arg1;
- (void)_setActiveChildViewController:(id)arg1;
- (void)_setPendingChildViewController:(id)arg1;
- (id)authenticationContext;
- (id)copyArchivableContext;
- (id)createFetchOperation;
- (id)createPlaceholderViewController;
- (id)createViewControllerForPage:(id)arg1 ofType:(NSInteger)arg2 returningError:(id*)arg3;
- (id)customHeaders;
- (void)dealloc;
- (id)displayedURL;
- (void)handleFailureWithError:(id)arg1;
- (id)init;
- (id)initWithSection:(id)arg1;
- (void)invalidate;
- (BOOL)loadMoreWithURL:(id)arg1;
- (void)loadView;
- (BOOL)needsAuthentication;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)purgeMemoryForReason:(NSInteger)arg1;
- (BOOL)pushStorePageWithURL:(id)arg1 needsAuthentication:(BOOL)arg2 withContext:(id)arg3 animated:(BOOL)arg4;
- (id)queryStringDictionary;
- (void)reload;
- (void)reloadForNetworkTypeChange;
- (BOOL)reloadForSectionsWithGroup:(id)arg1;
- (BOOL)reloadWithURL:(id)arg1;
- (void)resetNavigationItem:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (void)setCustomHeaders:(id)arg1;
- (id)setDisplayedSectionGroup:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setNeedsAuthentication:(BOOL)arg1;
- (void)setQueryStringDictionary:(id)arg1;
- (void)setShouldFetchAutomatically:(BOOL)arg1;
- (void)setUrl:(id)arg1;
- (void)setUrlBagKey:(id)arg1;
- (BOOL)shouldExcludeFromNavigationHistory;
- (BOOL)shouldFetchAutomatically;
- (void)showPlaceholderViewController;
- (id)url;
- (id)urlBagKey;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
