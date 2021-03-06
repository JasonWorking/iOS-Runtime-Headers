/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge {
    NSURLAuthenticationChallenge *_challenge;
}

- (void)cancelAuthentication;
- (void)dealloc;
- (int)failureCount;
- (BOOL)hasPassword;
- (id)initWithAuthenticationChallenge:(id)arg1;
- (id)password;
- (id)sender;
- (void)useCredential:(id)arg1;
- (id)user;

@end
