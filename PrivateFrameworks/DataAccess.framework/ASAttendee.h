/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableDictionary, NSString;

@interface ASAttendee : ASItem <ASParsingAcceptingTopLevelLeaves> {
    NSString *_email;
    NSInteger _localId;
    NSString *_name;
    NSMutableDictionary *_placeHolder;
    NSInteger _role;
    NSInteger _status;
}

@property(retain) NSString *email;
@property(retain) NSString *name;
@property NSInteger localId;
@property NSInteger role;
@property NSInteger status;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)frontingBasicTypes;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;

- (void)appendActiveSyncDataForTask:(id)arg1 toData:(id)arg2;
- (void)applyPlaceHolder;
- (id)asParseRules;
- (void)clearPlaceHolder;
- (id)copyOfSelfWithoutLocalID;
- (void)dealloc;
- (id)email;
- (void)encodeWithCoder:(id)arg1;
- (id)fullEmailString;
- (id)icsUserAddress;
- (id)initWithCalAttendee:(void*)arg1 parentEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (NSInteger)localId;
- (id)name;
- (NSInteger)role;
- (void)saveToCalendarWithParentASEvent:(id)arg1 existingRecord:(void*)arg2 treatNullsAsDeletes:(BOOL)arg3;
- (void)setEmail:(id)arg1;
- (void)setLocalId:(NSInteger)arg1;
- (void)setName:(id)arg1;
- (void)setObject:(id)arg1 forCCPT:(NSInteger)arg2;
- (void)setRole:(NSInteger)arg1;
- (void)setStatus:(NSInteger)arg1;
- (NSInteger)status;

@end
