/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLCompileOptions : NSObject <NSCopying> {
    BOOL _debuggingEnabled;
    BOOL _fastMathEnabled;
    NSDictionary *_preprocessorMacros;
}

@property (nonatomic) BOOL debuggingEnabled;
@property (nonatomic) BOOL fastMathEnabled;
@property (nonatomic, copy) NSDictionary *preprocessorMacros;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)debuggingEnabled;
- (id)description;
- (BOOL)fastMathEnabled;
- (id)init;
- (id)preprocessorMacros;
- (void)setDebuggingEnabled:(BOOL)arg1;
- (void)setFastMathEnabled:(BOOL)arg1;
- (void)setPreprocessorMacros:(id)arg1;

@end