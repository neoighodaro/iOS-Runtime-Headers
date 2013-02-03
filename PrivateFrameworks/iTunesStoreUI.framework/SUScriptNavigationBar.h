/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScriptNavigationBarButton, UINavigationBar, NSLock;

@interface SUScriptNavigationBar : NSObject {
    SUScriptNavigationBarButton *_leftButton;
    NSLock *_lock;
    UINavigationBar *_navigationBar;
    SUScriptNavigationBarButton *_rightButton;
}

@property(getter=_leftButton,retain) SUScriptNavigationBarButton *leftButton; /* unknown property attribute: Sset_leftButton: */
@property(getter=_rightButton,retain) SUScriptNavigationBarButton *rightButton; /* unknown property attribute: Sset_rightButton: */
@property(retain) UINavigationBar *navigationBar;

+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (void)_applyLeftButton:(id)arg1 animated:(BOOL)arg2;
- (void)_applyRightButton:(id)arg1 animated:(BOOL)arg2;
- (id)_leftButton;
- (id)_rightButton;
- (void)_synchronizeNavigationBar;
- (id)buttonWithTitle:(id)arg1 style:(id)arg2 target:(id)arg3 action:(id)arg4;
- (void)dealloc;
- (id)init;
- (id)navigationBar;
- (void)setLeftButton:(id)arg1 animated:(BOOL)arg2;
- (void)setNavigationBar:(id)arg1;
- (void)setRightButton:(id)arg1 animated:(BOOL)arg2;
- (void)set_leftButton:(id)arg1;
- (void)set_rightButton:(id)arg1;

@end
