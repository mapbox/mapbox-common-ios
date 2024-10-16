// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBXHttpRequest;
@class MBXHttpResponse;
// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBXHttpRequestOrResponseType)
{
    MBXHttpRequestOrResponseTypeHttpRequest,
    MBXHttpRequestOrResponseTypeHttpResponse
} NS_SWIFT_NAME(HttpRequestOrResponseType);

/** Contains either an HttpRequest or an HttpResponse. */
NS_SWIFT_NAME(HttpRequestOrResponse)
__attribute__((visibility ("default")))
@interface MBXHttpRequestOrResponse : NSObject

// This class provides factory method which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides factory method which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

+ (nonnull instancetype)fromHttpRequest:(nonnull MBXHttpRequest *)value;
+ (nonnull instancetype)fromHttpResponse:(nonnull MBXHttpResponse *)value;

- (BOOL)isHttpRequest;
- (BOOL)isHttpResponse;

- (nonnull MBXHttpRequest *)getHttpRequest __attribute((ns_returns_retained));
- (nonnull MBXHttpResponse *)getHttpResponse __attribute((ns_returns_retained));

@property (nonatomic, readonly) MBXHttpRequestOrResponseType type;

@end
