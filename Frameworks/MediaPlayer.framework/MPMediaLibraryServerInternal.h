/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableArray;

@interface MPMediaLibraryServerInternal : MPServerObject <MPMediaLibrary> {
    NSMutableArray *_clientPorts;
    BOOL _filteringDisabled;
}

- (void)_availablePlaylistsDidChange:(id)arg1;
- (void)_clientPortInvalidated:(id)arg1;
- (void)_clientPortInvalidatedNotification:(id)arg1;
- (void)_registerClientPort:(NSUInteger)arg1;
- (id)collectionsForQuery:(id)arg1;
- (id)countOfCollectionsForQuery:(id)arg1;
- (id)countOfItemsForQuery:(id)arg1;
- (void)dealloc;
- (id)fetchArtworkForSize:(id)arg1 item:(id)arg2;
- (id)fetchProperty:(id)arg1 item:(id)arg2;
- (id)fetchProperty:(id)arg1 playlist:(id)arg2;
- (id)hasMedia;
- (id)hasSongs;
- (id)itemExistsWithIdentifier:(id)arg1;
- (id)itemsForQuery:(id)arg1;
- (id)lastModifiedDate;
- (void)performItemQuery:(id)arg1;
- (void)performPlaylistQuery:(id)arg1 groupingProperty:(id)arg2;
- (id)prefetchCommonProperties:(id)arg1 item:(id)arg2;
- (void)prepareForDecodingWithCoder:(id)arg1;
- (id)serverIsAlive;
- (void)setFilteringDisabled:(id)arg1;

@end
