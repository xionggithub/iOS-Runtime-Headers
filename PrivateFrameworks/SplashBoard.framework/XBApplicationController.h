/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@class FBApplicationLibrary, NSString;

@interface XBApplicationController : NSObject <FBApplicationLibraryPreInstallClient> {
    FBApplicationLibrary *_applicationLibrary;
}

@property(retain) FBApplicationLibrary * applicationLibrary;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)sharedInstance;

- (void)_captureOrUpdateLaunchImagesForApplications:(id)arg1 firstImageIsReady:(id)arg2;
- (void)_removeAllCachedLaunchImages;
- (void)_removeCachedLaunchImagesForApplications:(id)arg1 forgetApp:(bool)arg2;
- (void)applicationLibrary:(id)arg1 _willNotify_didAddApplications:(id)arg2 completion:(id)arg3;
- (void)applicationLibrary:(id)arg1 _willNotify_didReplaceApplications:(id)arg2 withApplications:(id)arg3 completion:(id)arg4;
- (void)applicationLibrary:(id)arg1 didRemoveApplications:(id)arg2 completion:(id)arg3;
- (id)applicationLibrary;
- (void)dealloc;
- (id)init;
- (void)setApplicationLibrary:(id)arg1;

@end