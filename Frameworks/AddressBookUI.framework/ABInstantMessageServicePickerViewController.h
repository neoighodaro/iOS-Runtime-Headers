/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSIndexPath, NSArray, NSString;

@interface ABInstantMessageServicePickerViewController : UITableViewController <ABSimpleTextInputViewControllerDelegate> {
    NSString *_customService;
    NSArray *_defaultServices;
    id _delegate;
    NSIndexPath *_selectedIndexPath;
    NSString *_selectedService;
}

@property(copy) NSString *selectedService;
@property id delegate;

- (BOOL)_allowsAutorotation;
- (BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (id)selectedService;
- (void)setDelegate:(id)arg1;
- (void)setSelectedService:(id)arg1;
- (void)simpleTextInputViewController:(id)arg1 didCompleteWithValue:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;

@end
