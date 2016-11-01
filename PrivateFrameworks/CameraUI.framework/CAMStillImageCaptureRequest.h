/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMStillImageCaptureRequest : CAMCaptureRequest <CAMBurstIdentifierProvider, CAMBurstRequest, CAMEffectFilterTypeProvider, CAMIrisRequest, CAMPossibleOriginalRequest, CAMTimelapseRequest, NSCopying, NSMutableCopying> {
    NSString * _burstIdentifier;
    <CAMStillImageCaptureRequestDelegate> * _delegate;
    struct CGSize { 
        double width; 
        double height; 
    }  _desiredPreviewSize;
    long long  _effectFilterType;
    long long  _flashMode;
    long long  _hdrMode;
    NSString * _irisIdentifier;
    long long  _irisMode;
    NSURL * _localVideoDestinationURL;
    unsigned long long  _maximumBurstLength;
    NSString * _originalIrisIdentifier;
    NSURL * _originalLocalVideoDestinationURL;
    NSString * _originalPersistenceUUID;
    NSString * _originalVideoPersistenceUUID;
    NSString * _timelapseIdentifier;
    bool  _usesStillImageStabilization;
    NSString * _videoPersistenceUUID;
    bool  _wantsAudioForCapture;
    bool  _wantsAutoDuoImageFusion;
    bool  _wantsHighResolutionStills;
    bool  _wantsPortraitEffect;
    bool  _wantsSquareCrop;
}

@property (nonatomic, readonly, copy) NSString *burstIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CAMStillImageCaptureRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } desiredPreviewSize;
@property (nonatomic, readonly) long long effectFilterType;
@property (nonatomic, readonly) long long flashMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long hdrMode;
@property (nonatomic, readonly, copy) NSString *irisIdentifier;
@property (nonatomic, readonly) long long irisMode;
@property (nonatomic, readonly, copy) NSURL *localVideoDestinationURL;
@property (nonatomic, readonly) unsigned long long maximumBurstLength;
@property (nonatomic, readonly, copy) NSString *originalIrisIdentifier;
@property (nonatomic, readonly, copy) NSURL *originalLocalVideoDestinationURL;
@property (nonatomic, readonly, copy) NSString *originalPersistenceUUID;
@property (nonatomic, readonly, copy) NSString *originalVideoPersistenceUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *timelapseIdentifier;
@property (nonatomic, readonly) bool usesStillImageStabilization;
@property (nonatomic, readonly, copy) NSString *videoPersistenceUUID;
@property (nonatomic, readonly) bool wantsAudioForCapture;
@property (nonatomic, readonly) bool wantsAutoDuoImageFusion;
@property (nonatomic, readonly) bool wantsHighResolutionStills;
@property (nonatomic, readonly) bool wantsPortraitEffect;
@property (nonatomic, readonly) bool wantsSquareCrop;

- (void).cxx_destruct;
- (id)burstIdentifier;
- (id)captureRequest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (struct CGSize { double x1; double x2; })desiredPreviewSize;
- (long long)effectFilterType;
- (long long)flashMode;
- (long long)hdrMode;
- (id)init;
- (id)initWithRequest:(id)arg1 distinctPersistence:(bool)arg2;
- (id)irisIdentifier;
- (id)irisIdentifierForOriginal:(bool)arg1;
- (id)irisLocalVideoDestinationURLForOriginal:(bool)arg1;
- (long long)irisMode;
- (id)irisStillImagePersistenceUUIDForOriginal:(bool)arg1;
- (id)irisVideoPersistenceUUIDForOriginal:(bool)arg1;
- (bool)isOriginalLocalVideoDestinationURL:(id)arg1;
- (id)localVideoDestinationURL;
- (unsigned long long)maximumBurstLength;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)originalIrisIdentifier;
- (id)originalLocalVideoDestinationURL;
- (id)originalPersistenceUUID;
- (id)originalVideoPersistenceUUID;
- (bool)shouldPersistToLivePhotoDirectory;
- (id)timelapseIdentifier;
- (bool)usesStillImageStabilization;
- (id)videoPersistenceUUID;
- (bool)wantsAudioForCapture;
- (bool)wantsAutoDuoImageFusion;
- (bool)wantsHighResolutionStills;
- (bool)wantsPortraitEffect;
- (bool)wantsSquareCrop;

@end