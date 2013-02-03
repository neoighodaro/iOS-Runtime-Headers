/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MessageLibrary, Message;

@interface DALibraryConsumerFactory : NSObject <MessageDataConsumerFactory> {
    MessageLibrary *_library;
    Message *_message;
}

@property(retain) MessageLibrary *library;
@property(retain) Message *message;

- (id)dataConsumerForPart:(id)arg1;
- (void)dealloc;
- (id)library;
- (id)message;
- (void)setLibrary:(id)arg1;
- (void)setMessage:(id)arg1;

@end
