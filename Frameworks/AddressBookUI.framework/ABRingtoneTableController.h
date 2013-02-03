/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSMutableArray, NSString, AVController, ABRingtoneManager;

@interface ABRingtoneTableController : NSObject {
    AVController *_avController;
    BOOL _customAVController;
    NSMutableArray *_customRingtoneIdentifiers;
    id _delegate;
    NSString *_noneString;
    void *_person;
    NSMutableArray *_purchasedRingtoneIdentifiers;
    ABRingtoneManager *_ringtoneManager;
    NSInteger _selectedRingtoneIndex;
    BOOL _showsDefault;
    BOOL _showsNone;
    BOOL _startedInteruption;
    NSMutableArray *_systemRingtoneIdentifiers;
}

- (void)addRingtonesInDirectory:(id)arg1 toArray:(id)arg2 fileExtension:(id)arg3;
- (id)avController;
- (NSInteger)compareRingtoneWithIdentifier:(id)arg1 toRingtoneWithIdentifier:(id)arg2;
- (id)copyCurrentPhoneRingtoneIdentifier;
- (id)copyCurrentPhoneRingtoneName;
- (void)dealloc;
- (void)finishedWithPicker;
- (id)identifierOfRingtoneAtIndex:(NSInteger)arg1 isCustomRingtone:(BOOL*)arg2;
- (NSInteger)indexOfRingtoneInGroup:(NSInteger)arg1 atRow:(NSInteger)arg2;
- (NSInteger)indexOfRingtoneWithIdentifier:(id)arg1;
- (NSInteger)indexOfSelectedRingtone;
- (id)init;
- (id)initWithAVController:(id)arg1;
- (NSInteger)numberOfGroupsInPreferencesTable:(id)arg1;
- (void*)person;
- (void)playRingtoneWithIdentifier:(id)arg1;
- (id)preferencesTable:(id)arg1 cellForRow:(NSInteger)arg2 inGroup:(NSInteger)arg3;
- (BOOL)preferencesTable:(id)arg1 isRadioGroup:(NSInteger)arg2;
- (NSInteger)preferencesTable:(id)arg1 numberOfRowsInGroup:(NSInteger)arg2;
- (id)preferencesTable:(id)arg1 titleForGroup:(NSInteger)arg2;
- (void)processNewRingtoneSelected:(id)arg1;
- (void)reloadRingtones;
- (id)ringtoneManager;
- (NSInteger)rowIndexForRingtoneAtIndex:(NSInteger)arg1 inTable:(id)arg2;
- (id)selectedRingtoneIdentifier;
- (void)setAVController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNoneString:(id)arg1;
- (void)setPerson:(void*)arg1;
- (void)setSelectedRingtoneIdentifier:(id)arg1;
- (void)setShowsDefault:(BOOL)arg1;
- (void)setShowsNone:(BOOL)arg1;
- (void)stopPlaying;
- (void)stopPlayingWithFadeOut:(BOOL)arg1;
- (NSInteger)tableGroupTypeAtIndex:(NSInteger)arg1;
- (void)tableRowSelected:(id)arg1;
- (void)togglePlayWithRingtoneWithIdentifier:(id)arg1;

@end
