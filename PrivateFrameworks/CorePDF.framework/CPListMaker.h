/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class NSArray, CPTextLine, CPLayoutArea, CPList;

@interface CPListMaker : NSObject <CPDisposable> {
    CPLayoutArea *area;
    NSArray *spacers;
    unsigned int textLineCount;
    CPTextLine **textLines;
    CPList *list;
}

+ (void)makeListsInLayoutArea:(id)arg1;
+ (void)makeListsInChunk:(id)arg1;
+ (void)makeListsInPage:(id)arg1;

- (void)dealloc;
- (void)fetchTextLine:(id)arg1;
- (void)makeListItemFrom:(struct CPListInfo { unsigned int x1; unsigned int x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct __CFString {} *x4; int x5; unsigned int x6; unsigned int x7; int x8; boolx9; boolx10; boolx11; void *x12; }*)arg1 stopAt:(unsigned int)arg2;
- (BOOL)makeListFrom:(struct CPListInfo { unsigned int x1; unsigned int x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct __CFString {} *x4; int x5; unsigned int x6; unsigned int x7; int x8; boolx9; boolx10; boolx11; void *x12; }*)arg1;
- (void)fetchTextLinesInColumn:(id)arg1;
- (void)makeListsInColumn:(id)arg1;
- (id)initWithLayoutArea:(id)arg1;
- (void)makeLists;
- (void)finalize;
- (void)dispose;

@end