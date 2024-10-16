// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBXHttpRequest;

/**
 * Callback for the HTTP request cancelled event.
 *
 * @param id Handle given by the request() method.
 * @param request Original HttpRequest passed to the request() method.
 */
NS_SWIFT_NAME(HttpServiceCancellationCallback)
typedef void (^MBXHttpServiceCancellationCallback)(uint64_t id_, MBXHttpRequest * _Nonnull request); // NOLINT(modernize-use-using)
