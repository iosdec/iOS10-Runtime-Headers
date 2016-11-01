/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ButtonResolver.framework/ButtonResolver
 */

@interface BRInterfaceAOP : BRInterface {
    struct __IOHIDEventSystemClient { } * _client;
    NSMutableIndexSet * _freeSlots;
    bool  _isReady;
    HAButtonHapticsLoader * _loader;
    unsigned long long  _maxAssetSlots;
    id /* block */  _notificationBlock;
    NSString * _notificationName;
    struct __IOHIDServiceClient { } * _service;
    NSMutableArray * _slotArray;
    NSMutableDictionary * _stateDict;
}

@property (nonatomic) struct __IOHIDServiceClient { }*service;

+ (int)_convertClickState:(unsigned long long)arg1;
+ (int)_convertForceFeel:(unsigned long long)arg1;
+ (id)interface;

- (void)_findDevices;
- (void)_receiveLoaderAvailableNotification:(id)arg1;
- (bool)_serviceSetProperty:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (bool)_setDefaultAOPConfigs;
- (bool)_setGlobalAOPConfigsFromBRFConfigs:(id)arg1;
- (bool)_setStateAOPConfigsFromStateData:(id)arg1;
- (id)dataForSlot:(id)arg1 fromArray:(id)arg2;
- (void)dealloc;
- (id)description;
- (bool)disableStates:(id)arg1 clearAsset:(bool)arg2 error:(id*)arg3;
- (bool)enableStates:(id)arg1 error:(id*)arg2;
- (id)init;
- (bool)isReady;
- (unsigned long long)maxAssetSlots;
- (void)mergeStateChanges:(id)arg1 into:(id)arg2;
- (id)propertyList;
- (void)scheduleReadyNotificationWithBlock:(id /* block */)arg1;
- (struct __IOHIDServiceClient { }*)service;
- (bool)setConfigs:(id)arg1 withAssets:(id)arg2 forStates:(id)arg3 error:(id*)arg4;
- (bool)setGlobalConfigs:(id)arg1 error:(id*)arg2;
- (void)setService:(struct __IOHIDServiceClient { }*)arg1;
- (unsigned long long)unusedAssetSlots;
- (bool)updateReadyState;

@end