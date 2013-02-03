/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class CLLocation, NSArray;

@interface SULocationSectionsOperation : ISOperation {
    CLLocation *_location;
    NSArray *_sections;
    NSInteger _updateDistance;
}

@property(retain) CLLocation *location;
@property(retain) NSArray *sections;
@property NSInteger updateDistance;

- (id)_copyBaseOperation;
- (void)dealloc;
- (id)location;
- (void)run;
- (id)sections;
- (void)setLocation:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setUpdateDistance:(NSInteger)arg1;
- (NSInteger)updateDistance;

@end
