/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, UIRemoteView;

@interface UIRemoteSheetInfo : NSObject {
    void *_context;
    id _delegate;
    UIRemoteView *_remoteView;
    NSInteger _returnCode;
    SEL _selector;
    UIView *_sheetView;
}

@property void *context;
@property(retain) UIRemoteView *remoteView;
@property(retain) UIView *sheetView;
@property id delegate;
@property NSInteger returnCode;
@property SEL selector;

- (void*)context;
- (void)dealloc;
- (id)delegate;
- (id)remoteView;
- (NSInteger)returnCode;
- (SEL)selector;
- (void)setContext:(void*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRemoteView:(id)arg1;
- (void)setReturnCode:(NSInteger)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setSheetView:(id)arg1;
- (id)sheetView;

@end
