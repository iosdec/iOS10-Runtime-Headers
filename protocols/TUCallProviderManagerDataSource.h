/* Generated by RuntimeBrowser.
 */

@protocol TUCallProviderManagerDataSource <NSObject>

@required

- (void)blockUntilInitialStateReceived;
- (<TUCallProviderManagerDataSourceDelegate> *)delegate;
- (void)invalidate;
- (NSDictionary *)providersByIdentifier;
- (void)setDelegate:(id <TUCallProviderManagerDataSourceDelegate>)arg1;

@end