/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreTelephony.framework/CoreTelephony
 */

@class NSMutableDictionary, NSData, NSString;

@interface CTMessagePart : NSObject {
    NSString *_contentId;
    NSString *_contentLocation;
    NSString *_contentType;
    NSMutableDictionary *_contentTypeParams;
    NSData *_data;
}

@property(copy) NSString *contentId;
@property(copy) NSString *contentLocation;
@property(copy) NSString *contentType;
@property(copy) NSData *data;

- (void)addContentTypeParameterWithName:(id)arg1 value:(id)arg2;
- (id)allContentTypeParameterNames;
- (id)contentId;
- (id)contentLocation;
- (id)contentType;
- (id)contentTypeParameterWithName:(id)arg1;
- (id)data;
- (void)dealloc;
- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (void)setContentId:(id)arg1;
- (void)setContentLocation:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setData:(id)arg1;

@end
