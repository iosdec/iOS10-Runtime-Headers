/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCRadioGetTracksOperation : NSOperation {
    ISDialogOperation * _dialogOperation;
    MPUserNotification * _explicitUserNotification;
    RadioGetTracksRequest * _getTracksRequest;
    bool  _hasSetWillContinuePlayback;
    NSLock * _lock;
    RadioStationMatchContext * _nowPlayingMatchContext;
    unsigned long long  _numberOfTracks;
    RadioPlaybackContext * _playbackContext;
    SSVPlaybackLease * _playbackLease;
    long long  _reasonType;
    RadioRequestContext * _requestContext;
    id /* block */  _responseBlock;
    bool  _shouldIncludeStationInResponse;
    RadioStation * _station;
    RadioStationMatchContext * _stationMatchContext;
    bool  _willContinuePlayback;
}

@property (nonatomic, retain) RadioStationMatchContext *nowPlayingMatchContext;
@property unsigned long long numberOfTracks;
@property (copy) RadioPlaybackContext *playbackContext;
@property (retain) SSVPlaybackLease *playbackLease;
@property (readonly) long long reasonType;
@property (retain) RadioRequestContext *requestContext;
@property (copy) id /* block */ responseBlock;
@property bool shouldIncludeStationInResponse;
@property (retain) RadioStation *station;
@property (retain) RadioStationMatchContext *stationMatchContext;
@property (nonatomic) bool willContinuePlayback;

- (void).cxx_destruct;
- (id)_heartbeatTokenDataAllowingDelay:(bool)arg1 error:(id*)arg2;
- (id)_newGetTracksRequestAllowingHeartbeatDelay:(bool)arg1 additionalRequestParameters:(id)arg2 returningError:(id*)arg3;
- (id)_runFullGetTracksProcessAllowingNoAvailableVersionDialog:(bool)arg1 additionalRequestParameters:(id)arg2 returningError:(id*)arg3;
- (id)_runRequestAllowingHeartbeatDelay:(bool)arg1 additionalRequestParameters:(id)arg2 returningError:(id*)arg3;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (id)initWithReasonType:(long long)arg1;
- (void)main;
- (id)nowPlayingMatchContext;
- (unsigned long long)numberOfTracks;
- (id)playbackContext;
- (id)playbackLease;
- (long long)reasonType;
- (id)requestContext;
- (id /* block */)responseBlock;
- (void)setNowPlayingMatchContext:(id)arg1;
- (void)setNumberOfTracks:(unsigned long long)arg1;
- (void)setPlaybackContext:(id)arg1;
- (void)setPlaybackLease:(id)arg1;
- (void)setRequestContext:(id)arg1;
- (void)setResponseBlock:(id /* block */)arg1;
- (void)setShouldIncludeStationInResponse:(bool)arg1;
- (void)setStation:(id)arg1;
- (void)setStationMatchContext:(id)arg1;
- (void)setWillContinuePlayback:(bool)arg1;
- (bool)shouldIncludeStationInResponse;
- (id)station;
- (id)stationMatchContext;
- (bool)willContinuePlayback;

@end
