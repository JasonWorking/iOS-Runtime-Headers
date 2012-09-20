/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDAttachmentStore : NSObject  {
}

+ (id)sharedInstance;

- (BOOL)deleteAttachmentWithGUID:(id)arg1;
- (BOOL)deleteAttachmentDataForTransfer:(id)arg1;
- (BOOL)deleteAttachmentsWithGUIDs:(id)arg1;
- (BOOL)removeAttachment:(id)arg1 fromMessageWithGUID:(id)arg2;
- (id)attachmentWithGUID:(id)arg1;
- (BOOL)storeAttachment:(id)arg1 associateWithMessageWithGUID:(id)arg2;
- (BOOL)updateAttachment:(id)arg1;

@end