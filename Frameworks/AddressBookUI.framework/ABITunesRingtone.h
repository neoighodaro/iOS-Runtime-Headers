/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString, NSDictionary;

@interface ABITunesRingtone : NSObject {
    NSString *_identifier;
    NSString *_name;
    NSString *_path;
    NSDictionary *_playbackProperties;
}

@property(retain) NSString *identifier;
@property(retain) NSString *name;
@property(retain) NSString *path;
@property(retain) NSDictionary *playbackProperties;

- (void)dealloc;
- (id)identifier;
- (BOOL)loadFromPropertyList:(id)arg1;
- (id)name;
- (id)path;
- (id)playbackProperties;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setPlaybackProperties:(id)arg1;

@end
