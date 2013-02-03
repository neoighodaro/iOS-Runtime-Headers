/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIButton, NSString, <ABPersonTableActionDelegate>;

@interface ABPersonTableAction : NSObject {
    BOOL _allowDifferentiationSheet;
    UIButton *_button;
    <ABPersonTableActionDelegate> *_delegate;
    BOOL _deleteStyle;
    NSString *_differentiationSheetTitle;
    BOOL _displaysShortTitle;
    NSInteger _grouping;
    NSInteger _ordering;
    struct __CFArray { } *_properties;
    NSInteger _property;
    SEL _selector;
    NSString *_shortTitle;
    id _target;
    NSString *_title;
}

@property(readonly) UIButton *button;
@property <ABPersonTableActionDelegate> *delegate;
@property(copy) NSString *differentiationSheetTitle;
@property(readonly) UIButton *existingButton;
@property __CFArray *properties;
@property(readonly) NSString *shortTitle;
@property(readonly) UITableViewCell *tableViewCell;
@property(readonly) NSString *title;
@property BOOL allowDifferentiationSheet;
@property BOOL displaysShortTitle;
@property NSInteger grouping;
@property NSInteger ordering;
@property(readonly) NSInteger property;
@property(readonly) SEL selector;
@property(readonly) id target;

+ (BOOL)array:(id)arg1 containsActionWithTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 property:(NSInteger)arg5 ordering:(NSInteger)arg6 outIndex:(NSInteger*)arg7;

- (BOOL)allowDifferentiationSheet;
- (id)button;
- (void)buttonClicked:(id)arg1;
- (NSInteger)compareOrderingToAction:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)differentiationSheetTitle;
- (BOOL)displaysShortTitle;
- (id)existingButton;
- (NSInteger)grouping;
- (id)initWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 property:(NSInteger)arg5 deleteStyle:(BOOL)arg6;
- (id)initWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 property:(NSInteger)arg5;
- (id)initWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 deleteStyle:(BOOL)arg4;
- (id)initWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 property:(NSInteger)arg4 deleteStyle:(BOOL)arg5;
- (NSInteger)ordering;
- (void)performWithSender:(id)arg1 property:(NSInteger)arg2 identifier:(NSInteger)arg3;
- (void)prepareTableViewCell:(id)arg1;
- (struct __CFArray { }*)properties;
- (NSInteger)property;
- (SEL)selector;
- (void)setAllowDifferentiationSheet:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDifferentiationSheetTitle:(id)arg1;
- (void)setDisplaysShortTitle:(BOOL)arg1;
- (void)setGrouping:(NSInteger)arg1;
- (void)setOrdering:(NSInteger)arg1;
- (void)setProperties:(struct __CFArray { }*)arg1;
- (id)shortTitle;
- (id)tableViewCell;
- (id)target;
- (id)title;

@end
