/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray;

@interface SUAggregateDataSource : SUTableDataSource {
    NSMutableArray *_headerViews;
    NSMutableArray *_sources;
}

@property(readonly) NSArray *sources;

- (NSInteger)_localIndexForSectionIndex:(NSInteger)arg1;
- (void)addDataSource:(id)arg1 withHeaderView:(id)arg2;
- (BOOL)canDeleteIndexPath:(id)arg1;
- (BOOL)canDoubleTapIndexPath:(id)arg1;
- (BOOL)canSelectIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (float)cellHeightForIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (id)dataSourceForIndexPath:(id)arg1;
- (void)dealloc;
- (BOOL)deleteIndexPath:(id)arg1;
- (id)headerViewForSection:(NSInteger)arg1;
- (id)indexPathForRowIndex:(NSUInteger)arg1 inSectionIndex:(NSUInteger)arg2;
- (NSInteger)numberOfItemsInSection:(NSInteger)arg1;
- (NSInteger)numberOfSections;
- (void)reloadCellContexts;
- (void)reloadData;
- (void)setCellReuseSource:(id)arg1;
- (id)sources;

@end
