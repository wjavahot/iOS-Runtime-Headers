/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSData, NSString, SFUCryptoKey;

@interface SFUCryptoKey : NSObject <TSPMutableCryptoInfo> {
    NSString *_passphrase;
    unsigned int mIterationCount;
    char *mKey;
    unsigned long mKeyLength;
    NSData *mSaltData;
}

@property(readonly) NSArray * blockInfos;
@property(readonly) SFUCryptoKey * cryptoKey;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) unsigned long decodedLength;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) NSString * passphrase;
@property(readonly) unsigned long preferredBlockSize;
@property(readonly) Class superclass;

- (void)addBlockInfo:(id)arg1;
- (id)blockInfos;
- (id)cryptoKey;
- (void)dealloc;
- (unsigned long)decodedLength;
- (void)incrementDecodedLengthBy:(unsigned long)arg1;
- (id)initAes128Key:(const char *)arg1 length:(unsigned int)arg2 iterationCount:(unsigned int)arg3;
- (id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned int)arg2;
- (id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned int)arg2 saltData:(id)arg3;
- (id)initAes128KeyFromPassphrase:(const char *)arg1 length:(unsigned int)arg2 iterationCount:(unsigned int)arg3;
- (id)initAes128KeyFromPassphrase:(const char *)arg1 length:(unsigned int)arg2 iterationCount:(unsigned int)arg3 saltData:(id)arg4;
- (id)initAes128KeyFromPassphrase:(id)arg1 withIterationCountAndSaltDataFromCryptoKey:(id)arg2;
- (unsigned int)iterationCount;
- (const char *)keyData;
- (unsigned long)keyLength;
- (int)keyType;
- (id)mutableCryptoInfoCopy;
- (id)passphrase;
- (unsigned long)preferredBlockSize;
- (void)reset;
- (id)saltData;

@end
