/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRConnection : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _closed;
    unsigned int _connectionCount;
    NSMapTable *_packetEventClassToTargetActions;
    NSObject<OS_dispatch_queue> *_sendQueue;
    TRService *_service;
    int _uniqueID;
}

@property (nonatomic, readonly) TRService *service;

- (void).cxx_destruct;
- (void)_connectionDidClose;
- (void)_connectionDidReceivePacketEvent:(id)arg1;
- (void)_incrementConnectionCount;
- (id)_initWithUniqueID:(int)arg1 service:(id)arg2;
- (id)_onQueue_targetActionsForPacketEvent:(id)arg1;
- (id)_relevantPacketEventTypes;
- (void)_sendRelevantPacketEventTypes;
- (int)_uniqueID;
- (void)addTarget:(id)arg1 action:(SEL)arg2 queue:(id)arg3 forPacketEventClasses:(id)arg4;
- (void)close;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 queue:(id)arg3 forPacketEventClasses:(id)arg4;
- (void)sendPacketEvent:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)service;

@end