/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIImage, NSData, CKMediaObject;

@interface CKMediaObjectMessagePart : CKMessagePart {
    NSData *_composeData;
    UIImage *_composeImage;
    NSData *_dataForHighlight;
    CKMediaObject *_mediaObject;
    NSData *_previewData;
}

@property(readonly) UIImage *composeImage;
@property(readonly) CKMediaObject *mediaObject;

- (NSInteger)_orientation;
- (id)composeData;
- (id)composeImage;
- (void)copyToPasteboard;
- (void)dealloc;
- (id)detachedCopy;
- (id)highlightData;
- (id)initWithMediaObject:(id)arg1;
- (BOOL)isDisplayable;
- (id)mediaObject;
- (id)previewData;
- (void)setComposeData:(id)arg1;
- (void)setPreviewData:(id)arg1;
- (NSInteger)type;

@end
