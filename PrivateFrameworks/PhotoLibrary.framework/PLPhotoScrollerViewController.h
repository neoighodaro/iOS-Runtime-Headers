/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSArray, UINavigationItem;

@interface PLPhotoScrollerViewController : UIViewController {
    unsigned int _canShowCopyCallout : 1;
    unsigned int _didDisplay : 1;
    unsigned int _modalSheetIsPresent : 1;
    unsigned int _dontChangeStatusBar : 1;
    id _albumsController;
    id _delegate;
    NSUInteger _itemIndex;
    NSArray *_items;
    UINavigationItem *_navItem;
    NSInteger _previousInterfaceOrientation;
    id _uiController;
}

@property <PLPhotoScrollerViewControllerDelegate> *delegate;
@property BOOL canShowCopyCallout;
@property NSUInteger visibleItemIndex;

- (void)_forceRotationToPortaitIfNecessary;
- (id)_initWithAlbum:(id)arg1 lockStatusBar:(BOOL)arg2 currentImageIndex:(NSInteger)arg3;
- (void)_updateNavigationItemTitle;
- (BOOL)_visibleItemAllowsRotation;
- (void)albumsController:(id)arg1 didMoveToPhotoAtIndex:(NSUInteger)arg2;
- (BOOL)albumsControllerShouldShowActionItem:(id)arg1;
- (BOOL)albumsControllerShouldShowVideoOverlay:(id)arg1;
- (BOOL)albumsControllerShowActionSheet:(id)arg1 inView:(id)arg2;
- (BOOL)canShowCopyCallout;
- (void)dealloc;
- (id)delegate;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (BOOL)dontChangeStatusBar;
- (id)initWithItems:(id)arg1;
- (id)itemAtIndex:(NSUInteger)arg1;
- (void)loadView;
- (id)navigationItem;
- (id)rotatingFooterView;
- (void)setCanShowCopyCallout:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDontChangeStatusBar:(BOOL)arg1;
- (void)setVisibleItemIndex:(NSUInteger)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (NSUInteger)visibleItemIndex;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;

@end
