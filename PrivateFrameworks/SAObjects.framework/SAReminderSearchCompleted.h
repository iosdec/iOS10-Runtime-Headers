/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SAReminderSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSArray * results;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)searchCompleted;

- (id)encodedClassName;
- (id)results;
- (void)setResults:(id)arg1;
- (id)groupIdentifier;

@end