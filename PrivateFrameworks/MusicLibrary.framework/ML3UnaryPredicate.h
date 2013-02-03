/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3Predicate;

@interface ML3UnaryPredicate : ML3Predicate {
    ML3Predicate *_predicate;
}

@property(retain) ML3Predicate *predicate;

+ (id)predicateWithPredicate:(id)arg1;

- (id)SQLJoinClausesForClass:(Class)arg1;
- (void)bindToSqlite3Statement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout NSInteger*)arg2;
- (void)dealloc;
- (id)initWithPredicate:(id)arg1;
- (id)predicate;
- (void)setPredicate:(id)arg1;

@end
