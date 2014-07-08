/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSArray, NSString, NSURL, PKBarcode;

@interface PKContent : NSObject <NSSecureCoding> {
    PKBarcode *_barcode;
    NSArray *_storeIdentifiers;
    NSURL *_appLaunchURL;
    NSString *_localizedDescription;
}

@property(retain) PKBarcode * barcode;
@property(copy) NSArray * storeIdentifiers;
@property(copy) NSURL * appLaunchURL;
@property(copy) NSString * localizedDescription;

+ (id)contentWithFileURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)setAppLaunchURL:(id)arg1;
- (void)setStoreIdentifiers:(id)arg1;
- (void)setBarcode:(id)arg1;
- (id)appLaunchURL;
- (id)barcode;
- (void)flushFormattedFieldValues;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (id)storeIdentifiers;
- (id)localizedDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)setLocalizedDescription:(id)arg1;

@end