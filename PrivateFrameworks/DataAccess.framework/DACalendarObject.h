/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class DACalendarDatabase;

@interface DACalendarObject : NSObject {
    DACalendarDatabase *_database;
    void *_ref;
}

@property(readonly) DACalendarDatabase *database;
@property(readonly) void *ref;

+ (id)NSArrayFromCFArray:(struct __CFArray { }*)arg1 objectClass:(Class)arg2 database:(id)arg3;

- (id)database;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1 ref:(void*)arg2;
- (void*)ref;

@end
