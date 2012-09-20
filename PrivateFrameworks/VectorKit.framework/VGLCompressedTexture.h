/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSData, NSMutableArray;

@interface VGLCompressedTexture : VGLTexture  {
    NSData *_data;
    NSMutableArray *_imageData;
    unsigned int _surfaces;
    unsigned int _mipmapLevels;
    struct { 
        unsigned int hasAlpha : 1; 
        unsigned int isCubeMap : 1; 
        unsigned int isMipmapped : 1; 
        unsigned int isVerticalFlipped : 1; 
    } _flags;
    unsigned int _internalFormat;
}


- (void)dealloc;
- (id)initWithData:(id)arg1;
- (BOOL)loadTexture;
- (BOOL)decodeTexture;

@end