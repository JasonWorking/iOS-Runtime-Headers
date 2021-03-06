/* Generated by RuntimeBrowser.
 */

@protocol NSURLSessionSubclass <NSObject>

@required

- (NSURLSessionAVAssetDownloadTask *)_AVAssetDownloadTaskForURL:(NSURL *)arg1 destinationURL:(NSURL *)arg2 options:(NSDictionary *)arg3;
- (void)_onqueue_completeInvalidation:(BOOL)arg1;
- (void)_onqueue_flushWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_onqueue_getTasksWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, NSArray *, void*
- (void)_onqueue_resetStorageWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSURLSessionStreamTask *)_streamTaskForHost:(void *)arg1 port:(void *)arg2 tls:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, int, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSInputStream *, NSOutputStream *, void*
- (NSURLSessionDataTask *)dataTaskForRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSURLResponse *, NSError *, void*
- (NSURLSessionDownloadTask *)downloadTaskForRequest:(void *)arg1 downloadFilePath:(void *)arg2 resumeData:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 11: NSURLRequest *, NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSURLResponse *, NSError *, void*
- (NSURLSessionUploadTask *)uploadTaskForRequest:(void *)arg1 uploadFile:(void *)arg2 bodyData:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 11: NSURLRequest *, NSURL *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSURLResponse *, NSError *, void*

@end
