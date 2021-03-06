/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@interface MusicMiniPlayerCoordinator : RUMiniPlayerCoordinator

+ (id)sharedCoordinator;

- (id)_init;
- (Class)_miniPlayerPlaybackControlsViewClass;
- (void)_setRepeatType:(unsigned int)arg1;
- (void)_startGeniusPlaylistFromItem:(id)arg1;
- (id)initWithPlaybackCoordinator:(id)arg1;
- (void)miniPlayerActionsViewController:(id)arg1 didSelectAction:(int)arg2;
- (BOOL)playbackControls:(id)arg1 changedRepeatType:(unsigned int)arg2;
- (BOOL)playbackControls:(id)arg1 changedShuffleType:(unsigned int)arg2;
- (unsigned int)repeatTypeForPlaybackControls:(id)arg1;
- (unsigned int)shuffleTypeForPlaybackControls:(id)arg1;
- (BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;

@end
