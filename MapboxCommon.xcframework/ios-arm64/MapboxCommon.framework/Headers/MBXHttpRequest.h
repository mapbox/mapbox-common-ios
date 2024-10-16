// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXHttpMethod.h>
#import <MapboxCommon/MBXNetworkRestriction.h>

@class MBXSdkInformation;

/** HttpRequest holds basic information for construction of an HTTP request */
NS_SWIFT_NAME(HttpRequest)
__attribute__((visibility ("default")))
@interface MBXHttpRequest : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithUrl:(nonnull NSString *)url
                            headers:(nonnull NSDictionary<NSString *, NSString *> *)headers
                     sdkInformation:(nonnull MBXSdkInformation *)sdkInformation
                               body:(nullable NSData *)body;

- (nonnull instancetype)initWithMethod:(MBXHttpMethod)method
                                   url:(nonnull NSString *)url
                               headers:(nonnull NSDictionary<NSString *, NSString *> *)headers
                               timeout:(uint64_t)timeout
                    networkRestriction:(MBXNetworkRestriction)networkRestriction
                        sdkInformation:(nonnull MBXSdkInformation *)sdkInformation
                                  body:(nullable NSData *)body
                                 flags:(uint32_t)flags;

/**
 * HTTP defines a set of request methods to indicate the desired action to be performed for a given resource.
 * Specify desired method using this parameter.
 */
@property (nonatomic, readwrite) MBXHttpMethod method;

/** URL the request should be sent to */
@property (nonatomic, readonly, nonnull, copy) NSString *url;

/**
 * HTTP headers to include.
 * If you provide `User-Agent` header using this `headers` field, then resulting `User-Agent` will also contain
 * information about application, platform, device, and Common SDK's version.
 * If you provide duplicate headers then `request` call will be immediately failed.
 */
@property (nonatomic, readwrite, nonnull, copy) NSDictionary<NSString *, NSString *> *headers;

/**
 * Timeout defines how long, in seconds, the request is allowed to take in total (including connecting to the host).
 * Default is 0, meaning no timeout.
 */
@property (nonatomic, readonly) uint64_t timeout;

/**
 * Restrict the request to the specified network types. If none of the specified network types is available, the
 * download fails with a connection error.
 *
 * Default is allowed to all network types
 */
@property (nonatomic, readonly) MBXNetworkRestriction networkRestriction;

/** SDK Information to be appended to the User-Agent string. */
@property (nonatomic, readonly, nonnull) MBXSdkInformation *sdkInformation;

/**
 * HTTP Body data transmitted in an HTTP transaction message immediately following the headers if there is any.
 * Body data is used by POST HTTP methods.
 */
@property (nonatomic, readonly, nullable) NSData *body;

/**
 * Various flags that control HttpRequest processing.
 *
 * See documentation for HttpRequestFlags.
 */
@property (nonatomic, readonly) uint32_t flags;


@end
