// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(HttpHeaders)
__attribute__((visibility ("default")))
@interface MBXHttpHeaders : NSObject

    /** The Age HTTP header */
    @property (nonatomic, class, readonly) NSString * Age;
    /** The Cache-Control HTTP header. */
    @property (nonatomic, class, readonly) NSString * CacheControl;
    /** The Content-Encoding representation header. */
    @property (nonatomic, class, readonly) NSString * ContentEncoding;
    /** The Content-Length header. */
    @property (nonatomic, class, readonly) NSString * ContentLength;
    /** The Content-Type representation header. */
    @property (nonatomic, class, readonly) NSString * ContentType;
    /** The Date response HTTP header. */
    @property (nonatomic, class, readonly) NSString * Date;
    /** The Digest response HTTP header. */
    @property (nonatomic, class, readonly) NSString * Digest;
    /** The ETag (or entity tag) HTTP response header. */
    @property (nonatomic, class, readonly) NSString * ETag;
    /** The If-None-Match HTTP request header. */
    @property (nonatomic, class, readonly) NSString * IfNoneMatch;
    /** The Last-Modified response HTTP header. */
    @property (nonatomic, class, readonly) NSString * LastModified;
    /** The User-Agent request header. */
    @property (nonatomic, class, readonly) NSString * UserAgent;
    /** The Retry-After response header. */
    @property (nonatomic, class, readonly) NSString * RetryAfter;
    /** Custom Accept-Encoding request HTTP header. */
    @property (nonatomic, class, readonly) NSString * XAcceptEncoding;
    /** Custom Content-Encoding representation header. */
    @property (nonatomic, class, readonly) NSString * XContentEncoding;
    /** X-Accept-Delta request header. */
    @property (nonatomic, class, readonly) NSString * XAcceptDelta;
    /** X-Canonical-ETag response header. */
    @property (nonatomic, class, readonly) NSString * XCanonicalETag;
    /** X-Delta-Base response header. */
    @property (nonatomic, class, readonly) NSString * XDeltaBase;
    /** X-Rate-Limit-Reset response header. */
    @property (nonatomic, class, readonly) NSString * XRateLimitReset;
    /** Custom token restriction header. */
    @property (nonatomic, class, readonly) NSString * XAppInfo;
    /** Custom header which lists short names and versions of all known registered SDKs */
    @property (nonatomic, class, readonly) NSString * XMapboxSDKs;
    /** Custom temporarily header to pass custom user agent fragment. */
    @property (nonatomic, class, readonly) NSString * XTmpCustomUserAgentFragment;

@end
