/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray, LBSAddress, NSString, LBSPoint;

@interface LBSUserLocation : PBCodable {
    NSInteger _accuracy;
    LBSAddress *_address;
    NSInteger _confidence;
    NSMutableArray *_features;
    BOOL _hasAccuracy;
    BOOL _hasConfidence;
    BOOL _hasLocType;
    BOOL _hasObsolete;
    LBSPoint *_latLng;
    NSInteger _locType;
    NSString *_locationString;
    NSString *_misc;
    BOOL _obsolete;
    NSString *_source;
    long long _timestamp;
}

@property(retain) LBSAddress *address;
@property(retain) NSMutableArray *features;
@property(retain) LBSPoint *latLng;
@property(retain) NSString *locationString;
@property(retain) NSString *misc;
@property(retain) NSString *source;
@property NSInteger accuracy;
@property NSInteger confidence;
@property(readonly) NSInteger featuresCount;
@property(readonly) BOOL hasAccuracy;
@property(readonly) BOOL hasAddress;
@property(readonly) BOOL hasConfidence;
@property(readonly) BOOL hasLatLng;
@property(readonly) BOOL hasLocType;
@property(readonly) BOOL hasLocationString;
@property(readonly) BOOL hasMisc;
@property(readonly) BOOL hasObsolete;
@property(readonly) BOOL hasSource;
@property NSInteger locType;
@property BOOL obsolete;
@property long long timestamp;

- (NSInteger)accuracy;
- (void)addFeature:(id)arg1;
- (id)address;
- (NSInteger)confidence;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)featureAtIndex:(NSUInteger)arg1;
- (id)features;
- (NSInteger)featuresCount;
- (BOOL)hasAccuracy;
- (BOOL)hasAddress;
- (BOOL)hasConfidence;
- (BOOL)hasLatLng;
- (BOOL)hasLocType;
- (BOOL)hasLocationString;
- (BOOL)hasMisc;
- (BOOL)hasObsolete;
- (BOOL)hasSource;
- (id)init;
- (id)latLng;
- (NSInteger)locType;
- (id)locationString;
- (id)misc;
- (BOOL)obsolete;
- (BOOL)readFrom:(id)arg1;
- (void)setAccuracy:(NSInteger)arg1;
- (void)setAddress:(id)arg1;
- (void)setConfidence:(NSInteger)arg1;
- (void)setFeature:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setFeatures:(id)arg1;
- (void)setLatLng:(id)arg1;
- (void)setLocType:(NSInteger)arg1;
- (void)setLocationString:(id)arg1;
- (void)setMisc:(id)arg1;
- (void)setObsolete:(BOOL)arg1;
- (void)setSource:(id)arg1;
- (void)setTimestamp:(long long)arg1;
- (id)source;
- (long long)timestamp;
- (void)writeTo:(id)arg1;

@end
