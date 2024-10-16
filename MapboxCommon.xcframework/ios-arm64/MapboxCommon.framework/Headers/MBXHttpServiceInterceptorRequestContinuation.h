// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBXHttpRequestOrResponse;

/**
 * Continuation to be invoked once the interceptor is done processing a request. If invoked with a HttpRequest, the
 * HTTP service will proceed to make a request via the network. Invoking the continuation with a HttpResponse bypasses
 * the network and causes the request to complete immediately with the specified response.
 */
NS_SWIFT_NAME(HttpServiceInterceptorRequestContinuation)
typedef void (^MBXHttpServiceInterceptorRequestContinuation)(MBXHttpRequestOrResponse * _Nonnull result); // NOLINT(modernize-use-using)
