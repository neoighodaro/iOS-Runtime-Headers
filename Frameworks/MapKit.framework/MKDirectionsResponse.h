/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class GMMDirectionsResponse, NSMutableArray, MKRoute;

@interface MKDirectionsResponse : NSObject {
    NSInteger _mode;
    GMMDirectionsResponse *_response;
    MKRoute *_route;
    NSMutableArray *_routes;
}

@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) GMMDirectionsResponse *response;
@property(retain) MKRoute *route;
@property(retain) NSArray *routes;
@property(readonly) NSInteger mode;
@property(readonly) BOOL routeAvailable;

- (id)_initWithResponse:(id)arg1 startSearchResult:(id)arg2 endSearchResult:(id)arg3 mode:(NSInteger)arg4;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 startSearchResult:(id)arg2 endSearchResult:(id)arg3;
- (id)initWithMode:(NSInteger)arg1;
- (id)initWithResponse:(id)arg1 startSearchResult:(id)arg2 endSearchResult:(id)arg3;
- (NSInteger)mode;
- (id)response;
- (id)route;
- (BOOL)routeAvailable;
- (id)routes;
- (void)setRoute:(id)arg1;
- (void)setRoutes:(id)arg1;

@end
