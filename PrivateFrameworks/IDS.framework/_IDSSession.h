/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class NSString, NSSet, CUTWeakReference, NSObject<OS_dispatch_queue>, IDSBaseSocketPairConnection;

@interface _IDSSession : NSObject <IDSDaemonListenerProtocol, IDSBaseSocketPairConnectionDelegate> {
    id _delegateContext;
    NSString *_uniqueID;
    NSString *_accountID;
    NSSet *_destinations;
    IDSBaseSocketPairConnection *_unreliableSocketPairConnection;
    CUTWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _state;
    long long _transportType;
    int _socket;
    bool_isAudioEnabled;
    long long _inviteTimeout;
    unsigned int _sessionEndedReason;
}

@property(readonly) int socket;
@property(readonly) unsigned int state;
@property long long inviteTimeout;
@property(readonly) unsigned int sessionEndedReason;


- (void)_setupUnreliableSocketPairConnection;
- (void)_setupSocketPairToDaemon;
- (void)_cleanupSocketPairConnections;
- (void)_broadcastNewSessionToDaemon;
- (id)_initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4 delegateContext:(id)arg5;
- (void)_callDelegateWithBlock:(id)arg1;
- (unsigned int)sessionEndedReason;
- (long long)inviteTimeout;
- (void)setInviteTimeout:(long long)arg1;
- (bool)sendData:(id)arg1 error:(id*)arg2;
- (bool)getAudioEnabled;
- (void)setAudioEnabled:(bool)arg1;
- (void)sendSessionMessage:(id)arg1;
- (void)endSessionWithData:(id)arg1;
- (void)cancelInvitation;
- (void)declineInvitationWithData:(id)arg1;
- (void)acceptInvitationWithData:(id)arg1;
- (void)cancelInvitationWithData:(id)arg1;
- (void)sendInvitationWithData:(id)arg1;
- (void)sendInvitationWithOptions:(id)arg1;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4 delegateContext:(id)arg5;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 delegateContext:(id)arg4;
- (void)session:(id)arg1 audioEnabled:(bool)arg2;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)sessionStarted:(id)arg1;
- (void)sessionEndReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionMessageReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionCancelReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionDeclineReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionAcceptReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)declineInvitation;
- (void)acceptInvitation;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (unsigned int)state;
- (void)dealloc;
- (int)socket;
- (void)endSession;

@end