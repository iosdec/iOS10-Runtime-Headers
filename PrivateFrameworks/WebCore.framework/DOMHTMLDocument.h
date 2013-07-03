/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMHTMLCollection, NSString, DOMElement;

@interface DOMHTMLDocument : DOMDocument  {
}

@property(readonly) DOMHTMLCollection * embeds;
@property(readonly) DOMHTMLCollection * plugins;
@property(readonly) DOMHTMLCollection * scripts;
@property(readonly) int width;
@property(readonly) int height;
@property(copy) NSString * dir;
@property(copy) NSString * designMode;
@property(readonly) NSString * compatMode;
@property(readonly) DOMElement * activeElement;
@property(copy) NSString * bgColor;
@property(copy) NSString * fgColor;
@property(copy) NSString * alinkColor;
@property(copy) NSString * linkColor;
@property(copy) NSString * vlinkColor;

+ (id)mf_listElements;

- (int)height;
- (int)width;
- (BOOL)hasFocus;
- (void)releaseEvents;
- (void)captureEvents;
- (void)writeln:(id)arg1;
- (void)write:(id)arg1;
- (void)setVlinkColor:(id)arg1;
- (id)vlinkColor;
- (void)setLinkColor:(id)arg1;
- (id)linkColor;
- (void)setAlinkColor:(id)arg1;
- (id)alinkColor;
- (void)setFgColor:(id)arg1;
- (id)fgColor;
- (id)activeElement;
- (void)setDir:(id)arg1;
- (id)dir;
- (id)scripts;
- (id)embeds;
- (void)setBgColor:(id)arg1;
- (id)bgColor;
- (id)_createDocumentFragmentWithText:(id)arg1;
- (id)_createDocumentFragmentWithMarkupString:(id)arg1 baseURLString:(id)arg2;
- (id)createDocumentFragmentWithText:(id)arg1;
- (id)createDocumentFragmentWithMarkupString:(id)arg1 baseURL:(id)arg2;
- (id)compatMode;
- (id)plugins;
- (void)close;
- (void)open;
- (void)setDesignMode:(id)arg1;
- (id)designMode;
- (void)clear;
- (id)mf_createMessageQuoteElement;

@end