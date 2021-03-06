/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARCacheHitFeedback : PARSkipSearchFeedback {
    NSString * _uuid;
}

@property (nonatomic, retain) NSString *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTriggerEvent:(unsigned long long)arg1 input:(id)arg2 uuid:(id)arg3;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
