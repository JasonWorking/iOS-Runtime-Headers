/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary;

@interface UISharedImageStatisticsTable : NSObject  {
    NSMutableDictionary *_statistics;
}


- (id)init;
- (void)dealloc;
- (void)noteImageWithNameWasRequested:(id)arg1;
- (void)noteImageWithNameWasFlushed:(id)arg1;
- (void)clearStatistics;
- (id)statisticsForImageWithName:(id)arg1;
- (id)allImageNames;

@end