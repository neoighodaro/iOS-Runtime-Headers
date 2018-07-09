/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXPlayButtonViewController : UIViewController <SXVideoControlItem> {
    SXMaterialVideoPlayButton * _playButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hideable;
@property (nonatomic, readonly) SXMaterialVideoPlayButton *playButton;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAutoAppearance;

- (void).cxx_destruct;
- (void)hide:(bool)arg1 withAnimationCoordinator:(id)arg2;
- (bool)hideable;
- (id)initWithPlayButton:(id)arg1;
- (bool)isVisible;
- (void)loadView;
- (id)playButton;
- (bool)supportsAutoAppearance;

@end