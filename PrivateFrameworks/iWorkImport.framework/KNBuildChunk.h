/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class KNBuild, KNSlide, NSArray, NSSet, NSString, TSPLazyReference;

@interface KNBuildChunk : TSPContainedObject <KNInspectableAnimation> {
    boolmAutomatic;
    boolmNeedsAutomaticFromBuildAttributes;
    boolmNeedsDelayFromBuildAttributes;
    boolmNeedsDurationFromBuildAttributes;
    boolmNeedsReferentFromBuildAttributes;
    TSPLazyReference *mBuildReference;
    unsigned long long mCachedActiveIndexOnSlide;
    KNBuild *mCachedBuild;
    unsigned long long mCachedIndexOnSlide;
    double mDelay;
    double mDuration;
    unsigned long long mIndexInBuild;
    unsigned long long mReferent;
}

@property(getter=isActive,readonly) bool active;
@property(readonly) unsigned long long activeIndexOnSlide;
@property(getter=isAutomatic) bool automatic;
@property(getter=isAutomaticWithPreviousChunk,readonly) bool automaticWithPreviousChunk;
@property(getter=isAutomaticWithPreviousChunkOnSameDrawable,readonly) bool automaticWithPreviousChunkOnSameDrawable;
@property(readonly) NSArray * availableEventTriggers;
@property(readonly) KNBuild * build;
@property(readonly) bool canEditAnimations;
@property double delay;
@property(readonly) unsigned long long deliveryGroupIndex;
@property double duration;
@property(readonly) unsigned long long eventTrigger;
@property(readonly) bool hasComplement;
@property(readonly) unsigned long long indexInBuild;
@property(readonly) unsigned long long indexOnSlide;
@property(readonly) NSSet * inspectableAttributes;
@property(readonly) bool isFirstInBuild;
@property(readonly) bool isFirstInDeliveryGroup;
@property(readonly) bool isFirstOnSlide;
@property unsigned long long referent;
@property(readonly) KNSlide * slide;
@property(readonly) bool supportsWithStart;
@property(readonly) NSString * title;

- (unsigned long long)activeIndexOnSlide;
- (id)availableEventTriggers;
- (id)build;
- (bool)canBuildWithChunk:(id)arg1;
- (bool)canEditAnimations;
- (void)dealloc;
- (double)delay;
- (unsigned long long)deliveryGroupIndex;
- (id)description;
- (void)didLoadBuild:(id)arg1;
- (double)duration;
- (unsigned long long)eventTrigger;
- (bool)hasComplement;
- (unsigned long long)indexInBuild;
- (unsigned long long)indexOnSlide;
- (id)initWithArchive:(const struct BuildChunkArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; double x4; double x5; unsigned int x6; boolx7; boolx8; int x9; unsigned int x10[1]; }*)arg1 unarchiver:(id)arg2 owner:(id)arg3;
- (id)initWithIndex:(unsigned long long)arg1 inBuild:(id)arg2 copyingAttributesFromChunk:(id)arg3;
- (id)initWithIndex:(unsigned long long)arg1 inBuild:(id)arg2 referent:(unsigned long long)arg3 copyingRemainingAttributesFromChunk:(id)arg4;
- (id)initWithIndex:(unsigned long long)arg1 inBuild:(id)arg2;
- (id)inspectableAttributes;
- (bool)isActive;
- (bool)isAutomatic;
- (bool)isAutomaticWithPreviousChunk;
- (bool)isAutomaticWithPreviousChunkOnSameDrawable;
- (bool)isComplementOfBuildChunk:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFirstInBuild;
- (bool)isFirstInDeliveryGroup;
- (bool)isFirstOnSlide;
- (id)nextChunkOnSlide;
- (bool)p_canBuildWithChunk:(id)arg1 checkOtherChunksBuildingWithThisChunk:(bool)arg2;
- (id)p_chunksBuildingWithThisChunk;
- (bool)p_chunksBuildingWithThisChunkCanBuildWithChunk:(id)arg1;
- (void)p_invalidateSlideCaches;
- (id)p_previousChunkOnSlide;
- (void)p_setDelayFromBuildAttributes:(id)arg1 withReferent:(unsigned long long)arg2 automatic:(bool)arg3;
- (void)p_setDurationFromBuildAttributes:(id)arg1;
- (id)p_stringForReferent:(unsigned long long)arg1;
- (unsigned long long)referent;
- (void)saveToArchive:(struct BuildChunkArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; double x4; double x5; unsigned int x6; boolx7; boolx8; int x9; unsigned int x10[1]; }*)arg1 archiver:(id)arg2;
- (void)setAutomatic:(bool)arg1;
- (void)setDelay:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setReferent:(unsigned long long)arg1;
- (id)slide;
- (bool)supportsWithStart;
- (id)title;

@end