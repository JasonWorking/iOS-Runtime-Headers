/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAsset : PHObject <_PLImageLoadingAsset> {
    int _assetSource;
    int _avalanchePickType;
    NSString *_burstIdentifier;
    NSString *_cloudIdentifier;
    BOOL _cloudIsDeletable;
    int _cloudPlaceholderKind;
    BOOL _complete;
    NSDate *_creationDate;
    NSString *_directory;
    double _duration;
    int _exifOrientation;
    NSArray *_faceRegions;
    BOOL _favorite;
    NSString *_filename;
    BOOL _hasAdjustments;
    BOOL _hidden;
    NSData *_locationData;
    unsigned int _mediaSubtypes;
    int _mediaType;
    NSDate *_modificationDate;
    unsigned int _persistenceState;
    unsigned int _pixelHeight;
    unsigned int _pixelWidth;
    unsigned int _thumbnailIndex;
    NSDate *_trashedDate;
    NSString *_uniformTypeIdentifier;
}

@property (nonatomic, readonly) NSURL *ALAssetURL;
@property (nonatomic, readonly) int assetSource;
@property (nonatomic, readonly) int avalanchePickType;
@property (nonatomic, readonly) NSString *burstIdentifier;
@property (nonatomic, readonly) unsigned int burstSelectionTypes;
@property (nonatomic, readonly, copy) NSString *cloudIdentifier;
@property (nonatomic, readonly) BOOL cloudIsDeletable;
@property (nonatomic, readonly) int cloudPlaceholderKind;
@property (nonatomic, readonly) BOOL complete;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *directory;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) int exifOrientation;
@property (nonatomic, readonly) NSArray *faceRegions;
@property (getter=isFavorite, nonatomic, readonly) BOOL favorite;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) BOOL hasAdjustments;
@property (readonly) unsigned int hash;
@property (getter=isHidden, nonatomic, readonly) BOOL hidden;
@property (nonatomic, readonly) int imageOrientation;
@property (nonatomic, readonly) BOOL isHDVideo;
@property (nonatomic, readonly) BOOL isJPEG;
@property (nonatomic, readonly) BOOL isPartOfBurst;
@property (nonatomic, readonly) BOOL isRAW;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) NSData *locationData;
@property (nonatomic, readonly) unsigned int mediaSubtypes;
@property (nonatomic, readonly) int mediaType;
@property (nonatomic, readonly) NSString *metadataDebugDescription;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) unsigned int persistenceState;
@property (nonatomic, readonly) unsigned int pixelHeight;
@property (nonatomic, readonly) unsigned int pixelWidth;
@property (nonatomic, readonly) BOOL representsBurst;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int thumbnailIndex;
@property (nonatomic, readonly) NSDate *trashedDate;
@property (nonatomic, readonly) NSString *uniformTypeIdentifier;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)_transformMediaSubtypeComparisonPredicate:(id)arg1;
+ (id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)fetchAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithALAssetURLs:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithBurstIdentifier:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithCloudIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithMediaType:(int)arg1 options:(id)arg2;
+ (id)fetchAssetsWithOptions:(id)arg1;
+ (id)fetchKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsBursts;
+ (BOOL)managedObjectSupportsCloudSharedType;
+ (BOOL)managedObjectSupportsHiddenState;
+ (BOOL)managedObjectSupportsPhotoStreamType;
+ (BOOL)managedObjectSupportsTrashedState;
+ (BOOL)managedObjectSupportsVisibilityState;
+ (BOOL)managedObjectSupportsWallpaperType;
+ (BOOL)managedObjectSupportsiTunesSyncType;
+ (id)pl_managedAssetsForAssets:(id)arg1;
+ (unsigned int)pl_phAssetMediaSubtypeForPLAssetSubtype:(short)arg1;
+ (id)propertiesToFetchWithHint:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)ALAssetURL;
- (id)PTPProperties;
- (id)__dictionaryWithContentsOfData:(id)arg1;
- (id)_createPropertyObjectOfClass:(Class)arg1 properties:(id)arg2 isExtraObject:(BOOL)arg3;
- (id)_fileURLForMetadataWithExtension:(id)arg1;
- (void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)_requestRenderedVideoForVideoURL:(id)arg1 adjustmentData:(id)arg2 canHandleAdjustmentData:(BOOL)arg3 resultHandler:(id /* block */)arg4;
- (id)adjustmentsDebugMetadata;
- (double)aspectRatio;
- (int)assetSource;
- (id)assetsLibraryURL;
- (int)avalanchePickType;
- (id)burstIdentifier;
- (unsigned int)burstSelectionTypes;
- (BOOL)canPerformEditOperation:(int)arg1;
- (void)cancelContentEditingInputRequest:(unsigned int)arg1;
- (Class)changeRequestClass;
- (id)cloudIdentifier;
- (BOOL)cloudIsDeletable;
- (int)cloudPlaceholderKind;
- (int)cloudSharedAssetPlaceholderKind;
- (BOOL)complete;
- (id)creationDate;
- (id)debugFilename;
- (id)description;
- (id)detailedDebugDescriptionInLibrary:(id)arg1;
- (id)directory;
- (id)duplicateProperties;
- (double)duration;
- (unsigned int)effectiveThumbnailIndex;
- (id)embeddedThumbnailProperties;
- (int)exifOrientation;
- (id)faceRegions;
- (void)fetchKeywordsWithCompletionHandler:(id /* block */)arg1;
- (void)fetchPropertySetsIfNeeded;
- (id)fileURLForAdjustedFullsizeImage;
- (id)fileURLForAdjustmentsDirectory;
- (id)fileURLForDiagnosticFile;
- (id)fileURLForFullsizeImage;
- (id)fileURLForFullsizeRenderImage;
- (id)fileURLForFullsizeRenderVideo;
- (id)fileURLForLargePreview;
- (id)fileURLForMediumPreview;
- (id)fileURLForMutationsDirectory;
- (id)fileURLForPenultimateFullsizeRenderImage;
- (id)fileURLForPrebakedLandscapeScrubberThumbnails;
- (id)fileURLForPrebakedPortraitScrubberThumbnails;
- (id)fileURLForSubstandardFullsizeRenderImage;
- (id)fileURLForUnadjustedFullsizeImage;
- (id)fileURLForVideoPreviewFile;
- (id)fileURLForXMPFile;
- (id)filename;
- (BOOL)hasAdjustments;
- (BOOL)hasLegacyAdjustments;
- (int)imageOrientation;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned int)arg2 photoLibrary:(id)arg3;
- (id)internalProperties;
- (BOOL)isAudio;
- (BOOL)isCloudPhotoLibraryAsset;
- (BOOL)isCloudPlaceholder;
- (BOOL)isCloudSharedAsset;
- (BOOL)isFavorite;
- (BOOL)isHDVideo;
- (BOOL)isHidden;
- (BOOL)isInFlight;
- (BOOL)isIncludedInCloudFeeds;
- (BOOL)isIncludedInMoments;
- (BOOL)isJPEG;
- (BOOL)isLocatedAtCoordinates:(struct { double x1; double x2; })arg1;
- (BOOL)isMediaSubtype:(unsigned int)arg1;
- (BOOL)isMogul;
- (BOOL)isPartOfBurst;
- (BOOL)isPhoto;
- (BOOL)isPhotoStreamPhoto;
- (BOOL)isRAW;
- (BOOL)isStreamedVideo;
- (BOOL)isTimelapsePlaceholder;
- (BOOL)isVideo;
- (short)kind;
- (short)kindSubtype;
- (id)location;
- (id)locationData;
- (id)mainFileURL;
- (id)managedAssetForPhotoLibrary:(id)arg1;
- (unsigned int)mediaSubtypes;
- (int)mediaType;
- (id)metadataDebugDescription;
- (id)modificationDate;
- (id)momentProperties;
- (int)orientation;
- (int)originalImageOrientation;
- (id)originalMetadataProperties;
- (id)pathForAdjustmentDataFile;
- (id)pathForAdjustmentDirectory;
- (id)pathForAdjustmentFile;
- (id)pathForMutationsDirectory;
- (id)pathForOriginalFile;
- (id)pathForPenultimateFullsizeRenderImageFile;
- (id)pathForSubstandardFullsizeRenderImageFile;
- (unsigned int)persistenceState;
- (unsigned int)pixelHeight;
- (unsigned int)pixelWidth;
- (id)pl_managedAsset;
- (id)pl_photoLibrary;
- (BOOL)representsBurst;
- (unsigned int)requestContentEditingInputWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)reservedFileURLForLargeDisplayableImageFileForceLarge:(BOOL)arg1 forceUpgradeFromSubstandardIfNecessary:(BOOL)arg2 outImageType:(int*)arg3;
- (id)reservedPathForLargeDisplayableImageFileForceLarge:(BOOL)arg1 forceUpgradeFromSubstandardIfNecessary:(BOOL)arg2 outImageType:(int*)arg3;
- (short)savedAssetType;
- (id)thumbnailIdentifier;
- (unsigned int)thumbnailIndex;
- (id)trashedDate;
- (id)uniformTypeIdentifier;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

+ (int)_pu_mediaTypeForAssets:(id)arg1;
+ (id)pu_typeStringForAssets:(id)arg1;
+ (id)pu_typeStringForAssetsWithIdentifiers:(id)arg1;

@end
