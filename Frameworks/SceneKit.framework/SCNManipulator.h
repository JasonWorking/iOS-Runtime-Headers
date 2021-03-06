/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNManipulator : NSObject {
    SCNAuthoringEnvironment *_authoringEnvironment;
    SCNNode *_target;
}

@property (readonly) SCNAuthoringEnvironment *authoringEnvironment;
@property (nonatomic) SCNNode *target;

- (void)_setAuthoringEnvironment:(id)arg1;
- (id)authoringEnvironment;
- (void)draw;
- (BOOL)mouseDown:(struct { id x1; unsigned char x2; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x3; void*x4; out int x5; in void*x6; void*x7; float x8; float x9; })arg1;
- (BOOL)mouseDragged:(struct { id x1; unsigned char x2; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x3; void*x4; out int x5; in void*x6; void*x7; float x8; float x9; })arg1;
- (BOOL)mouseMoved:(struct { id x1; unsigned char x2; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x3; void*x4; out int x5; in void*x6; void*x7; float x8; float x9; })arg1;
- (BOOL)mouseUp:(struct { id x1; unsigned char x2; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x3; void*x4; out int x5; in void*x6; void*x7; float x8; float x9; })arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
