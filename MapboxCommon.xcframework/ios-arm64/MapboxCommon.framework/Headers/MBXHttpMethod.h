// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** HTTP defines a set of request methods to indicate the desired action to be performed for a given resource. */
// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBXHttpMethod)
{
    /** The GET method requests a representation of the specified resource. Requests using GET should only retrieve data. */
    MBXHttpMethodGet,
    /** The HEAD method asks for a response identical to that of a GET request, but without the response body. */
    MBXHttpMethodHead,
    /** The POST method sends data (stored in the request body) to a server to create or update a given resource. */
    MBXHttpMethodPost
} NS_SWIFT_NAME(HttpMethod);

NSString* MBXHttpMethodToString(MBXHttpMethod http_method);
