/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDatabaseValueCacheTransactionStorage : NSObject {
    NSMutableDictionary * _cache;
    long long  _cacheScope;
    bool  _didRemoveAllObjects;
}

@property (nonatomic, retain) NSMutableDictionary *cache;
@property (nonatomic) long long cacheScope;
@property (nonatomic) bool didRemoveAllObjects;

- (void).cxx_destruct;
- (id)cache;
- (long long)cacheScope;
- (bool)didRemoveAllObjects;
- (id)init;
- (void)setCache:(id)arg1;
- (void)setCacheScope:(long long)arg1;
- (void)setDidRemoveAllObjects:(bool)arg1;

@end
