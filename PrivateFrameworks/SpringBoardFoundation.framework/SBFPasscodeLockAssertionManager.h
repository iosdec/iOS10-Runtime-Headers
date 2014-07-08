/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class SBFPasscodeLockAssertionTracker;

@interface SBFPasscodeLockAssertionManager : NSObject  {
    SBFPasscodeLockAssertionTracker *_preventLockTracker;
    SBFPasscodeLockAssertionTracker *_lockScreenCameraTracker;
    SBFPasscodeLockAssertionTracker *_siriTracker;
    SBFPasscodeLockAssertionTracker *_transientTracker;
}


- (bool)hasActiveAssertions;
- (void)removeAssertion:(id)arg1;
- (void)addAssertion:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;

@end