// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXNetworkRestriction.h>

@class MBXSdkInformation;

NS_SWIFT_NAME(UploadOptions)
__attribute__((visibility ("default")))
@interface MBXUploadOptions : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithFilePath:(nonnull NSString *)filePath
                                     url:(nonnull NSString *)url
                                 headers:(nonnull NSDictionary<NSString *, NSString *> *)headers
                                metadata:(nonnull NSString *)metadata
                               mediaType:(nonnull NSString *)mediaType
                          sdkInformation:(nonnull MBXSdkInformation *)sdkInformation;

- (nonnull instancetype)initWithFilePath:(nonnull NSString *)filePath
                                     url:(nonnull NSString *)url
                                 headers:(nonnull NSDictionary<NSString *, NSString *> *)headers
                                metadata:(nonnull NSString *)metadata
                               mediaType:(nonnull NSString *)mediaType
                      networkRestriction:(MBXNetworkRestriction)networkRestriction
                          sdkInformation:(nonnull MBXSdkInformation *)sdkInformation
                                 timeout:(uint64_t)timeout;

/**
 * Absolute path of the file you wish to upload.
 *
 * Will only accept a filepath, no directories.
 */
@property (nonatomic, readonly, nonnull, copy) NSString *filePath;

/**
 * URL the request should be sent to.
 *
 * Remember to append "?access_token=<your-access-token>" for Mapbox endpoints.
 */
@property (nonatomic, readonly, nonnull, copy) NSString *url;

/**
 * HTTP headers to include.
 * If you provide `User-Agent` header using this `headers` field, it is highly recommended to use the appropriate key
 * from `HttpHeaders` set of constants. Duplicate headers (case insensitive) will result in an error.
 */
@property (nonatomic, readwrite, nonnull, copy) NSDictionary<NSString *, NSString *> *headers;

/**
 * Metadata for the file, used for back-end file handling on Mapbox endpoints.
 * Will be added to request as "attachments" if not empty.
 * If you are uploading to a Mapbox backend, supply the appropriate information as a JSON string.
 */
@property (nonatomic, readonly, nonnull, copy) NSString *metadata;

/** RFC6838 MediaType */
@property (nonatomic, readonly, nonnull, copy) NSString *mediaType;

/**
 * Restrict the request to the specified network types. If none of the specified network types is available, the
 * upload fails with a connection error.
 *
 * Default is allowed on all network types
 */
@property (nonatomic, readonly) MBXNetworkRestriction networkRestriction;

/** SDK Information to be appended to the User-Agent string. */
@property (nonatomic, readonly, nonnull) MBXSdkInformation *sdkInformation;

/**
 * Timeout defines how long, in seconds, the request is allowed to take in total (including connecting to the host).
 *
 * Default is 0, meaning there is no timeout.
 */
@property (nonatomic, readonly) uint64_t timeout;


@end
