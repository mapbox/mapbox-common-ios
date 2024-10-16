// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBXEventsServiceErrorCode)
{
    MBXEventsServiceErrorCodeNoToken,
    MBXEventsServiceErrorCodeNoUserAgent,
    MBXEventsServiceErrorCodeNotFound,
    MBXEventsServiceErrorCodeUnauthorized,
    MBXEventsServiceErrorCodeInvalidPayload,
    MBXEventsServiceErrorCodeLargePayload,
    MBXEventsServiceErrorCodeMultiStatus,
    MBXEventsServiceErrorCodeBadRequest,
    MBXEventsServiceErrorCodeTimeout,
    MBXEventsServiceErrorCodeInvalidEndpoint,
    MBXEventsServiceErrorCodeMalformedEvent,
    MBXEventsServiceErrorCodeHttpError,
    MBXEventsServiceErrorCodeEventsDisabled,
    MBXEventsServiceErrorCodeIOError
} NS_SWIFT_NAME(EventsServiceErrorCode);

NSString* MBXEventsServiceErrorCodeToString(MBXEventsServiceErrorCode events_service_error_code);
