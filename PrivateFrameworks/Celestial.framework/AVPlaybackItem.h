/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class AVItem, NSDictionary;

@interface AVPlaybackItem : NSObject {
    struct { 
        long long value; 
        NSInteger timescale; 
        NSUInteger flags; 
        long long epoch; 
    struct CGSize { 
        float width; 
        float height; 
    AVItem *_avItem;
    double _bookmarkTime;
    } _currentDuration;
    } _currentSize;
    BOOL _currentSizeIsValid;
    id _delegate;
    struct OpaqueFigPlaybackItem { } *_fpItem;
    NSDictionary *_inspectionNotificationInfo;
    BOOL _isInPlayQueue;
    BOOL _isPreparingForInspection;
    NSDictionary *_lyricsNotificationInfo;
    NSDictionary *_playToEndNotificationInfo;
    NSDictionary *_streamStateNotificationInfo;
}

@property(retain) NSDictionary *inspectionNotificationInfo;
@property(retain) NSDictionary *lyricsNotificationInfo;
@property(retain) NSDictionary *playToEndNotificationInfo;
@property(retain) NSDictionary *streamStateNotificationInfo;
@property BOOL isInPlayQueue;
@property BOOL isPreparingForInspection;

- (void)addFPListeners;
- (BOOL)addToPlayQueue:(struct OpaqueFigPlayer { }*)arg1 afterItem:(struct OpaqueFigPlaybackItem { }*)arg2;
- (void)applyAttributesFromAVItemToFPItem:(id)arg1;
- (void)applyBookmarkTime;
- (id)attributeForKey:(id)arg1;
- (id)avItem;
- (void)cacheCurrentDuration;
- (void)cacheCurrentSize;
- (id)chapterImageForImageID:(NSInteger)arg1;
- (id)convertFigTimeDictionaryToTimeIntervalInArrayOfDictionaries:(id)arg1 withKey:(id)arg2;
- (void)dealloc;
- (void)ensureFPItem;
- (id)evenlySpacedThumbnailTimesFromStartTime:(double)arg1 toEndTime:(double)arg2 maxCount:(NSInteger)arg3;
- (struct OpaqueFigPlaybackItem { }*)fpItem;
- (void)fpItemNotificationInfo:(id)arg1;
- (void)fpItemNotificationName:(id)arg1 userInfo:(id)arg2;
- (id)fpNotificationNames;
- (id)initWithDelegate:(id)arg1 item:(id)arg2;
- (id)inspectionNotificationInfo;
- (BOOL)isInPlayQueue;
- (BOOL)isPreparingForInspection;
- (id)itemAttribute:(id)arg1 forKey:(id)arg2;
- (id)lyricsNotificationInfo;
- (void)makeReadyForInspection;
- (id)nextThumbnailTimesStartingAt:(double)arg1 minimumInterval:(double)arg2 forwards:(BOOL)arg3 maxCount:(NSInteger)arg4;
- (id)playToEndNotificationInfo;
- (id)propertiesNeededForInspection;
- (void)removeFPListeners;
- (void)removeFromPlayQueue:(struct OpaqueFigPlayer { }*)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setBookmarkTime:(double)arg1;
- (void)setInspectionNotificationInfo:(id)arg1;
- (void)setIsInPlayQueue:(BOOL)arg1;
- (void)setIsPreparingForInspection:(BOOL)arg1;
- (void)setItemAttribute:(id)arg1 value:(id)arg2 forKey:(id)arg3 error:(id*)arg4;
- (void)setLyricsNotificationInfo:(id)arg1;
- (void)setPlayToEndNotificationInfo:(id)arg1;
- (void)setStreamStateNotificationInfo:(id)arg1;
- (void)stealControlOfAVItem;
- (id)streamStateNotificationInfo;

@end
