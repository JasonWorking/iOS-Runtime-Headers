/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, NSData, NSDictionary, NSURL;

@interface SSURLConnectionResponse : NSObject <SSCoding> {
    NSDictionary *_allHeaderFields;
    NSData *_body;
    long long _expectedContentLength;
    NSString *_mimeType;
    int _statusCode;
    NSString *_suggestedFilename;
    NSString *_textEncodingName;
    NSURL *_url;
}

@property(readonly) NSData * bodyData;
@property(readonly) long long expectedContentLength;
@property(readonly) NSString * MIMEType;
@property(readonly) NSString * suggestedFilename;
@property(readonly) NSString * textEncodingName;
@property(readonly) NSURL * URL;


- (id)bodyData;
- (id)suggestedFilename;
- (long long)expectedContentLength;
- (id)textEncodingName;
- (void)dealloc;
- (id)allHeaderFields;
- (int)statusCode;
- (id)MIMEType;
- (id)URL;
- (id)initWithURLResponse:(id)arg1 bodyData:(id)arg2;
- (void*)copyXPCEncoding;
- (id)initWithXPCEncoding:(void*)arg1;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;

@end