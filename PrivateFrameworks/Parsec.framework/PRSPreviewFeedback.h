/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@class NSString;

@interface PRSPreviewFeedback : PRSFeedback {
    NSString *_fbr;
    NSString *_local_result;
}

@property(retain) NSString * fbr;
@property(retain) NSString * local_result;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)fbr;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1 timestamp:(int)arg2;
- (id)local_result;
- (id)plist;
- (void)setFbr:(id)arg1;
- (void)setLocal_result:(id)arg1;
- (id)type;
- (void)validate;

@end
