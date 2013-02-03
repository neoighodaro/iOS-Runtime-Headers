/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSError, AVFileValidator, UIColor, NSURL, MPMoviePlayerVideoViewController, UIWindow;

@interface MPMoviePlayerControllerInternal : NSObject {
    struct { 
        unsigned int active : 1; 
        unsigned int visible : 1; 
        unsigned int mediaType : 1; 
        unsigned int isStreaming : 1; 
        unsigned int statusBarWasHidden : 1; 
        unsigned int shouldRestartPlaybackAfterAudioRouteChange : 1; 
        unsigned int playbackFailed : 1; 
        unsigned int isFinishing : 1; 
        unsigned int hideLoadingIndicatorForLocalFiles : 1; 
        unsigned int fullscreen : 1; 
        unsigned int playAfterCreatingPlayer : 1; 
        unsigned int canShowControlsOverlay : 1; 
        unsigned int tearDownPlayerOnEnd : 1; 
        unsigned int didSendPreloadNotification : 1; 
        unsigned int unused : 18; 
    UIColor *_backgroundColor;
    NSURL *_contentURL;
    AVFileValidator *_fileValidator;
    NSUInteger _generatingDeviceOrientationNotificationsCount;
    double _initialPlaybackTime;
    NSInteger _movieControlMode;
    NSUInteger _oldSimpleRemoteRoutingPriority;
    NSError *_playbackError;
    } _playerBitfield;
    UIWindow *_previousKeyWindow;
    NSUInteger _previousStatusBarMode;
    NSUInteger _previousStatusBarOrientation;
    NSInteger _scalingMode;
    MPMoviePlayerVideoViewController *_videoViewController;
    UIWindow *_window;
}

@end
