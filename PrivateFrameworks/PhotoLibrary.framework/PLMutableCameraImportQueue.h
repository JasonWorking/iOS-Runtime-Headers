/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSMutableArray;

@interface PLMutableCameraImportQueue : NSObject  {
    NSMutableArray *_items;
}


- (id)description;
- (id)init;
- (void)dealloc;
- (id)currentItem;
- (void)dequeueImportItem;
- (void)enqueueImportItem:(id)arg1;

@end