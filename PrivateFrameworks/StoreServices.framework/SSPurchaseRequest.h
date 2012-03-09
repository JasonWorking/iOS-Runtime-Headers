/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSMutableIndexSet, SSXPCConnection, <SSPurchaseRequestDelegate>;

@interface SSPurchaseRequest : SSRequest <SSCoding> {
    NSMutableIndexSet *_acknowledgedPurchases;
    BOOL _isBackgroundRequest;
    NSArray *_purchases;
    SSXPCConnection *_requestConnection;
    SSXPCConnection *_responseConnection;
    BOOL _shouldValidatePurchases;
    BOOL _needsAuthentication;
}

@property(readonly) NSArray * purchases;
@property <SSPurchaseRequestDelegate> * delegate;
@property(getter=isBackgroundRequest) BOOL backgroundRequest;
@property BOOL needsAuthentication;
@property BOOL shouldValidatePurchases;


- (id)init;
- (void)dealloc;
- (void)startWithPurchaseBlock:(id)arg1 completionBlock:(id)arg2;
- (void)setBackgroundRequest:(BOOL)arg1;
- (void)setShouldValidatePurchases:(BOOL)arg1;
- (id)initWithPurchases:(id)arg1;
- (id)purchases;
- (void)setNeedsAuthentication:(BOOL)arg1;
- (BOOL)needsAuthentication;
- (BOOL)shouldValidatePurchases;
- (BOOL)isBackgroundRequest;
- (id)_purchaseForUniqueIdentifier:(id)arg1;
- (void)_purchaseFinishedNotification:(id)arg1;
- (void)_purchaseFailedNotification:(id)arg1;
- (void)_sendError:(id)arg1 forPurchase:(id)arg2;
- (void)handleDaemonExit;
- (void)registerForDaemonNotifications;
- (void)unregisterForDaemonNotifications;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id*)arg2;
- (void*)copyXPCEncoding;
- (id)initWithXPCEncoding:(void*)arg1;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;

@end