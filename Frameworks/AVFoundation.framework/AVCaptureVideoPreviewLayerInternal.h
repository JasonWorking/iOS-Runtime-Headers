/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, CALayer, NSMutableArray, AVCaptureSession;

@interface AVCaptureVideoPreviewLayerInternal : NSObject  {
    AVCaptureSession *session;
    NSMutableArray *connections;
    CALayer *sublayer;
    struct CGSize { 
        float width; 
        float height; 
    } previewSize;
    float previewRotationDegrees;
    NSString *gravity;
    BOOL disableActions;
    int orientation;
    BOOL automaticallyAdjustsMirroring;
    BOOL mirrored;
    BOOL isPresentationLayer;
    BOOL visible;
    BOOL isPaused;
    BOOL chromaNoiseReductionEnabled;
}



@end