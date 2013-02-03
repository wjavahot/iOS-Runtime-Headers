/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetsSaver : NSObject {
}

+ (id)publicAssetsLibraryErrorFromPrivateDomain:(id)arg1 withPrivateCode:(int)arg2;
+ (id)publicAssetsLibraryErrorFromPrivateError:(id)arg1;
+ (id)sharedAssetsSaver;

- (void)_addCameraAssetToLibraryWithPath:(id)arg1 thumbnailImage:(id)arg2 metadata:(id)arg3 assetType:(int)arg4 kind:(int)arg5 completionHandler:(id)arg6;
- (id)_createWriteImageCompletionBlockWithImage:(id)arg1 target:(id)arg2 selector:(SEL)arg3 contextInfo:(void*)arg4;
- (id)_createWriteVideoCompletionBlockWithVideoPath:(id)arg1 target:(id)arg2 selector:(SEL)arg3 contextInfo:(void*)arg4;
- (void)_requestAccess;
- (void)_saveImage:(id)arg1 imageData:(id)arg2 properties:(id)arg3 completionBlock:(id)arg4;
- (void)_saveVideoAtPath:(id)arg1 properties:(id)arg2 completionBlock:(id)arg3;
- (void)copyAssetToCameraRoll:(id)arg1;
- (void)dealloc;
- (id)defaultExtensionForAssetType:(int)arg1;
- (void)deletePhotoStreamAssetsWithUUIDs:(id)arg1 streamID:(id)arg2;
- (void)deletePhotoStreamDataForStreamID:(id)arg1;
- (void)importFilesWithMasterPath:(id)arg1 sidecarFileInfo:(id)arg2 intoEventWithName:(id)arg3 importSessionIdentifier:(id)arg4 isPhotoStreamsPublishCandidate:(BOOL)arg5;
- (id)pathForNewAssetOfType:(int)arg1 extension:(id)arg2;
- (void)queueJobDictionary:(id)arg1 asset:(id)arg2 requestEnqueuedBlock:(id)arg3 completionBlock:(id)arg4 imageSurface:(struct __IOSurface { }*)arg5 previewImageSurface:(struct __IOSurface { }*)arg6;
- (void)queueJobDictionary:(id)arg1 completionBlock:(id)arg2;
- (void)reenqueueAssetUUIDsForPhotoStreamPublication:(id)arg1;
- (void)regenerateVideoThumbnailsForVideo:(id)arg1 withCreationDate:(id)arg2 progressStack:(id)arg3 completionBlock:(id)arg4;
- (void)requestAsynchronousImageFromAsset:(id)arg1 withFormat:(int)arg2 completionBlock:(id)arg3;
- (void)requestSynchronousImageFromAsset:(id)arg1 withFormat:(int)arg2 completionBlock:(id)arg3;
- (void)saveCameraImage:(id)arg1 metadata:(id)arg2 additionalProperties:(id)arg3 requestEnqueuedBlock:(id)arg4;
- (void)saveCameraVideoAtPath:(id)arg1 withMetadata:(id)arg2 thumbnailImage:(id)arg3 createPreviewWellImage:(BOOL)arg4 progressStack:(id)arg5 videoHandler:(id)arg6 requestEnqueuedBlock:(id)arg7 completionBlock:(id)arg8;
- (void)saveImage:(id)arg1 imageData:(id)arg2 properties:(id)arg3 completionTarget:(id)arg4 completionSelector:(SEL)arg5 contextInfo:(void*)arg6;
- (void)saveImage:(id)arg1 properties:(id)arg2 completionBlock:(id)arg3;
- (void)saveImageRef:(struct CGImage { }*)arg1 orientation:(int)arg2 imageData:(id)arg3 properties:(id)arg4 completionBlock:(id)arg5;
- (void)saveOneWayATCSyncedImage:(id)arg1 imageData:(id)arg2 eventUUID:(id)arg3 properties:(id)arg4 completionBlock:(id)arg5;
- (void)savePhotoStreamImage:(id)arg1 imageData:(id)arg2 properties:(id)arg3 completionBlock:(id)arg4;
- (void)savePhotoStreamVideoAtPath:(id)arg1 properties:(id)arg2 completionBlock:(id)arg3;
- (void)saveSyncedAssets:(id)arg1 completionBlock:(id)arg2;
- (void)saveVideoAtPath:(id)arg1 properties:(id)arg2 completionBlock:(id)arg3;
- (void)saveVideoAtPath:(id)arg1 properties:(id)arg2 completionTarget:(id)arg3 completionSelector:(SEL)arg4 contextInfo:(void*)arg5;

@end
