/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray, NSIndexPath, SUItemList;

@interface SUItemListDataSource : SUTableDataSource {
    NSMutableArray *_cachedHeaderViews;
    SUItemList *_itemList;
    NSIndexPath *_loadMoreIndexPath;
    float _priceButtonWidth;
    NSInteger _style;
}

@property(retain) SUItemList *itemList;
@property(retain) NSIndexPath *loadMoreIndexPath;
@property NSInteger style;

- (void)_configureLoadMoreCell:(id)arg1 forIndexPath:(id)arg2;
- (id)_priceButtonForCell:(id)arg1 item:(id)arg2;
- (BOOL)_shouldShowPriceButtonForItem:(id)arg1;
- (BOOL)canDeleteIndexPath:(id)arg1;
- (BOOL)canSelectIndexPath:(id)arg1;
- (BOOL)canShowPriceButtonForItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1 reuseIdentifier:(id*)arg2;
- (Class)cellConfigurationClassForItem:(id)arg1;
- (id)cellConfigurationForIndex:(NSInteger)arg1 item:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (float)cellHeightForIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (id)createHeaderViewForSection:(NSInteger)arg1;
- (void)dealloc;
- (BOOL)deleteIndexPath:(id)arg1;
- (void)didBeginPreferringUserInteraction;
- (void)didEndPreferringUserInteraction;
- (id)headerViewForSection:(NSInteger)arg1;
- (id)itemList;
- (id)loadMoreIndexPath;
- (NSInteger)numberOfItemsInSection:(NSInteger)arg1;
- (NSInteger)numberOfSections;
- (void)reloadCellContexts;
- (void)reloadData;
- (void)setItemList:(id)arg1;
- (void)setLoadMoreIndexPath:(id)arg1;
- (void)setStyle:(NSInteger)arg1;
- (NSInteger)style;
- (id)titleForDeleteConfirmationForIndexPath:(id)arg1;

@end
