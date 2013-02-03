/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSMutableDictionary, NSDictionary;

@interface SSMemoryEntity : NSObject <NSCopying> {
    long long _databaseID;
    NSMutableDictionary *_externalPropertyValues;
    NSMutableDictionary *_propertyValues;
}

@property long long databaseID;
@property(readonly) NSDictionary * externalPropertyValues;
@property(readonly) NSDictionary * propertyValues;

+ (id)anyInDatabase:(id)arg1 predicate:(id)arg2;
+ (Class)databaseEntityClass;
+ (id)defaultProperties;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)databaseID;
- (void)dealloc;
- (id)description;
- (id)externalPropertyValues;
- (unsigned int)hash;
- (id)init;
- (id)initWithDatabaseEntity:(id)arg1 properties:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)propertyValues;
- (void)reloadFromDatabaseEntity:(id)arg1 properties:(id)arg2;
- (void)setDatabaseID:(long long)arg1;
- (void)setExternalValuesWithDictionary:(id)arg1;
- (void)setValue:(id)arg1 forExternalProperty:(id)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (void)setValues:(id*)arg1 forExternalProperties:(const id*)arg2 count:(int)arg3;
- (void)setValues:(id*)arg1 forProperties:(const id*)arg2 count:(int)arg3;
- (void)setValuesWithDictionary:(id)arg1;
- (id)valueForExternalProperty:(id)arg1;
- (id)valueForProperty:(id)arg1;

@end
