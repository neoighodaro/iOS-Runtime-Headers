/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface AVAudioPlayer : NSObject {
     /* Encoded args for previous method: ^{AudioPlayerImpl=@@@@@{AudioStreamBasicDescription=dIIIIIIII}I*I^{AudioFormatListItem}I^{OpaqueAudioFileID}^{OpaqueAudioQueue}qqqfdi{AudioFilePacketTableInfo=qii}iiBBBBBBBddddB^{AudioQueueLevelMeterState}[3^{AudioQueueBuffer}]^{AudioQueueBuffer}iBBBBB^{AudioQueueBuffer}BBBBqiII{_opaque_pthread_mutex_t=l[40c]}}8@0:4 */
    void *_impl;
}

@property(readonly) NSData *data;
@property <AVAudioPlayerDelegate> *delegate;
@property(readonly) NSURL *url;
@property double currentTime;
@property(readonly) double duration;
@property(getter=isMeteringEnabled) BOOL meteringEnabled;
@property(readonly) NSUInteger numberOfChannels;
@property NSInteger numberOfLoops;
@property(getter=isPlaying,readonly) BOOL playing;
@property float volume;

- (float)averagePowerForChannel:(NSUInteger)arg1;
- (id)baseInit;
- (void)beginInterruption;
- (double)currentTime;
- (id)data;
- (void)dealloc;
- (void)decodeError;
- (id)delegate;
- (double)duration;
- (void)endInterruption;
- (void)finalize;
- (void)finishedPlaying;
- (struct AudioPlayerImpl { id x1; id x2; id x3; id x4; id x5; struct AudioStreamBasicDescription { double x_6_1_1; NSUInteger x_6_1_2; NSUInteger x_6_1_3; NSUInteger x_6_1_4; NSUInteger x_6_1_5; NSUInteger x_6_1_6; NSUInteger x_6_1_7; NSUInteger x_6_1_8; NSUInteger x_6_1_9; } x6; NSUInteger x7; char *x8; NSUInteger x9; struct AudioFormatListItem {} *x10; NSUInteger x11; struct OpaqueAudioFileID {} *x12; struct OpaqueAudioQueue {} *x13; long long x14; long long x15; long long x16; float x17; double x18; NSInteger x19; struct AudioFilePacketTableInfo { long long x_20_1_1; NSInteger x_20_1_2; NSInteger x_20_1_3; } x20; NSInteger x21; NSInteger x22; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; double x30; double x31; double x32; double x33; void*x34; struct AudioQueueLevelMeterState {} *x35; struct AudioQueueBuffer {} *x36[3]; struct AudioQueueBuffer {} *x37; NSInteger x38; void*x39; void*x40; void*x41; void*x42; void*x43; struct AudioQueueBuffer {} *x44; void*x45; void*x46; void*x47; void*x48; long long x49; NSInteger x50; NSUInteger x51; NSUInteger x52; struct _opaque_pthread_mutex_t { long x_53_1_1; BOOL x_53_1_2[40]; } x53; }*)impl;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (BOOL)isMeteringEnabled;
- (BOOL)isPlaying;
- (NSUInteger)numberOfChannels;
- (NSInteger)numberOfLoops;
- (void)pause;
- (float)peakPowerForChannel:(NSUInteger)arg1;
- (BOOL)play;
- (BOOL)prepareToPlay;
- (void)setCurrentTime:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMeteringEnabled:(BOOL)arg1;
- (void)setNumberOfLoops:(NSInteger)arg1;
- (void)setVolume:(float)arg1;
- (void)stop;
- (void)updateMeters;
- (id)url;
- (float)volume;

@end
