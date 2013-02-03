/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString;

@interface ISDialogTextField : NSObject {
    NSInteger _keyboardType;
    BOOL _secure;
    NSString *_title;
    NSString *_value;
}

@property(retain) NSString *title;
@property(retain) NSString *value;
@property NSInteger keyboardType;
@property(getter=isSecure) BOOL secure;

+ (id)textFieldWithTitle:(id)arg1;

- (void)dealloc;
- (BOOL)isSecure;
- (NSInteger)keyboardType;
- (void)setKeyboardType:(NSInteger)arg1;
- (void)setSecure:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setValue:(id)arg1;
- (id)title;
- (id)value;

@end
