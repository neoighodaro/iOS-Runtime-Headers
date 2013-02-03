/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface CalDAVServerVersion : NSObject <NSCopying> {
    double _version;
}

@property(readonly) NSString *calendarConstraintsPath;
@property(readonly) NSString *calendarConstraintsResource;
@property(readonly) NSString *type;
@property(readonly) BOOL supportsTimeRangeFilter;
@property(readonly) BOOL supportsTimeRangeFilterWithoutEndDate;
@property double version;

+ (id)prototypes;
+ (id)versionWithHeader:(id)arg1;
+ (id)versionWithPropertyValue:(id)arg1;

- (id)calendarConstraintsPath;
- (id)calendarConstraintsResource;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)headerVersionPattern;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)propertyValue;
- (void)setVersion:(double)arg1;
- (BOOL)supportsTimeRangeFilter;
- (BOOL)supportsTimeRangeFilterWithoutEndDate;
- (id)type;
- (double)version;

@end
