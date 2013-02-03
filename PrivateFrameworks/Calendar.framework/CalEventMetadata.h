/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Calendar.framework/Calendar
 */

@class NSArray, NSDictionary, NSURL, ICSDate;

@interface CalEventMetadata : NSObject <NSCoding> {
    NSArray *_attach;
    NSArray *_categories;
    NSInteger _classification;
    ICSDate *_created;
    ICSDate *_dtstamp;
    ICSDate *_last_modified;
    NSArray *_priority;
    NSUInteger _sequence;
    NSInteger _transp;
    NSURL *_url;
    NSDictionary *_x_props;
}

@property(retain) NSArray *attach;
@property(retain) NSArray *categories;
@property(retain) ICSDate *created;
@property(retain) ICSDate *dtstamp;
@property(retain) ICSDate *last_modified;
@property(retain) NSArray *priority;
@property(retain) NSURL *url;
@property(retain) NSDictionary *x_props;
@property NSInteger classification;
@property NSUInteger sequence;
@property NSInteger transp;

+ (id)metadataWithData:(id)arg1;
+ (id)metadataWithICSEvent:(id)arg1;

- (void)applyToEvent:(id)arg1;
- (id)attach;
- (id)categories;
- (NSInteger)classification;
- (id)created;
- (id)dataRepresentationWithExistingMetaData:(id)arg1;
- (void)dealloc;
- (id)dtstamp;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithICSEvent:(id)arg1;
- (id)last_modified;
- (id)priority;
- (NSUInteger)sequence;
- (void)setAttach:(id)arg1;
- (void)setCategories:(id)arg1;
- (void)setClassification:(NSInteger)arg1;
- (void)setCreated:(id)arg1;
- (void)setDtstamp:(id)arg1;
- (void)setLast_modified:(id)arg1;
- (void)setPriority:(id)arg1;
- (void)setSequence:(NSUInteger)arg1;
- (void)setTransp:(NSInteger)arg1;
- (void)setUrl:(id)arg1;
- (void)setX_props:(id)arg1;
- (NSInteger)transp;
- (id)url;
- (id)x_props;

@end
