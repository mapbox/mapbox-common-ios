// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Enum which describes possible error types which could happen during HTTP request/download calls. */
// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBXHttpRequestErrorType)
{
    /** Establishing connection related error. */
    MBXHttpRequestErrorTypeConnectionError,
    /** SSL related error. */
    MBXHttpRequestErrorTypeSSLError,
    /** Request was cancelled by the user. */
    MBXHttpRequestErrorTypeRequestCancelled,
    /** Timeout error. */
    MBXHttpRequestErrorTypeRequestTimedOut,
    /** Range request failed. */
    MBXHttpRequestErrorTypeRangeError,
    /** Other than above error. */
    MBXHttpRequestErrorTypeOtherError
} NS_SWIFT_NAME(HttpRequestErrorType);

NSString* MBXHttpRequestErrorTypeToString(MBXHttpRequestErrorType http_request_error_type);
