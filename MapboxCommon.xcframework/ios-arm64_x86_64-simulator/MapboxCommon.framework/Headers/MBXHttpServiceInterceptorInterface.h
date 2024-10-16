// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXHttpServiceInterceptorRequestContinuation.h>
#import <MapboxCommon/MBXHttpServiceInterceptorResponseContinuation.h>

@class MBXHttpRequest;
@class MBXHttpResponse;

/** Interface for intercepting and modifying HttpService function calls. */
NS_SWIFT_NAME(HttpServiceInterceptorInterface)
@protocol MBXHttpServiceInterceptorInterface
/**
 * The function to intercept HTTP requests with.
 * @param request The original HttpRequest object to be modified.
 * @param continuation Callback to be invoked once the interceptor has finished processing the request. Can also
 * be invoked with a HttpResponse, in which case the request completes immediately.
 */
- (void)onRequestForRequest:(nonnull MBXHttpRequest *)request
               continuation:(nonnull MBXHttpServiceInterceptorRequestContinuation)continuation;
/**
 * The function to intercept HTTP responses with.
 *
 * @param response The original HttpResponse object to be modified. Note: certain requests have their response body
 *                 written to disk. In that case, the field HttpResponseData.body will be empty.
 * @param continuation Callback to be invoked once the interceptor has finished processing the response.
 */
- (void)onResponseForResponse:(nonnull MBXHttpResponse *)response
                 continuation:(nonnull MBXHttpServiceInterceptorResponseContinuation)continuation;
@end
