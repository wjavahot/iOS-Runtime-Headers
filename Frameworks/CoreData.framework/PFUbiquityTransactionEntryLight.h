/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class PFUbiquityGlobalObjectID, PFUbiquityKnowledgeVector, NSString, NSDate, NSNumber, PFUbiquityLocation;

@interface PFUbiquityTransactionEntryLight : NSObject {
    NSString *_actingPeerID;
    PFUbiquityGlobalObjectID *_globalID;
    PFUbiquityKnowledgeVector *_kv;
    NSString *_storeName;
    NSDate *_transactionDate;
    PFUbiquityLocation *_transactionLogLocation;
    NSNumber *_transactionNumber;
    int _transactionType;
}

@property(retain) NSString * actingPeerID;
@property(retain) PFUbiquityGlobalObjectID * globalID;
@property(retain) PFUbiquityKnowledgeVector * knowledgeVector;
@property(retain) NSString * storeName;
@property(retain) NSDate * transactionDate;
@property(retain) PFUbiquityLocation * transactionLogLocation;
@property(retain) NSNumber * transactionNumber;
@property int transactionType;

- (id)actingPeerID;
- (void)dealloc;
- (id)description;
- (id)globalID;
- (id)init;
- (id)initWithTransactionEntry:(id)arg1 andGlobalIDCache:(id)arg2;
- (id)knowledgeVector;
- (void)setActingPeerID:(id)arg1;
- (void)setGlobalID:(id)arg1;
- (void)setKnowledgeVector:(id)arg1;
- (void)setStoreName:(id)arg1;
- (void)setTransactionDate:(id)arg1;
- (void)setTransactionLogLocation:(id)arg1;
- (void)setTransactionNumber:(id)arg1;
- (void)setTransactionType:(int)arg1;
- (id)storeName;
- (id)transactionDate;
- (id)transactionLogLocation;
- (id)transactionNumber;
- (int)transactionType;

@end
