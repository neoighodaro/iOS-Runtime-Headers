/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPDViewportInfo, NSString;

@interface GEOPDAutocompleteParametersFullEntriesOnly : PBCodable <NSCopying> {
    struct { 
        unsigned int maxResults : 1; 
    } _has;
    int _maxResults;
    NSString *_query;
    GEOPDViewportInfo *_viewportInfo;
}

@property BOOL hasMaxResults;
@property(readonly) BOOL hasQuery;
@property(readonly) BOOL hasViewportInfo;
@property int maxResults;
@property(retain) NSString * query;
@property(retain) GEOPDViewportInfo * viewportInfo;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMaxResults;
- (BOOL)hasQuery;
- (BOOL)hasViewportInfo;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)maxResults;
- (void)mergeFrom:(id)arg1;
- (id)query;
- (BOOL)readFrom:(id)arg1;
- (void)setHasMaxResults:(BOOL)arg1;
- (void)setMaxResults:(int)arg1;
- (void)setQuery:(id)arg1;
- (void)setViewportInfo:(id)arg1;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end