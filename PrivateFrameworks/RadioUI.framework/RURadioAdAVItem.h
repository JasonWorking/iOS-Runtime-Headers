/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RURadioAdAVItem : MPAVAdItem {
    RURadioAdTrack *_adTrack;
    RadioStation *_station;
    NSString *_stationHash;
    long long _stationID;
    NSString *_stationName;
}

@property (nonatomic, retain) RadioStation *station;
@property (nonatomic, readonly) NSString *stationHash;
@property (nonatomic, readonly) long long stationID;
@property (nonatomic, readonly) NSString *stationName;

- (void).cxx_destruct;
- (void)_applyLoudnessInfo;
- (id)adTrack;
- (id)album;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)initWithAdTrack:(id)arg1;
- (BOOL)isStreamable;
- (BOOL)isValidPlayerSubstituteForItem:(id)arg1;
- (void)loadAssetAndPlayerItem;
- (id)mainTitle;
- (id)mpuReporting_containerID;
- (unsigned int)mpuReporting_containerType;
- (id)mpuReporting_externalID;
- (unsigned int)mpuReporting_itemType;
- (id)mpuReporting_personalizedContainerID;
- (BOOL)mpuReporting_shouldReportPlayEventsToStore;
- (void)reevaluateType;
- (void)setStation:(id)arg1;
- (id)station;
- (id)stationHash;
- (long long)stationID;
- (id)stationName;
- (BOOL)supportsSkip;
- (id)title;
- (id)titlesForTime:(double)arg1;
- (unsigned int)type;

@end
