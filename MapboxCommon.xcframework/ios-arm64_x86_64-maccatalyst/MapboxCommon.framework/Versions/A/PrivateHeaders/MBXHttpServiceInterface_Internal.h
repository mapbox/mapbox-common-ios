// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXDownloadStatusCallback_Internal.h>
#import <MapboxCommon/MBXHttpResponseCallback.h>
#import <MapboxCommon/MBXResultCallback_Internal.h>
#import <MapboxCommon/MBXUploadStatusCallback_Internal.h>

@class MBXDownloadOptions;
@class MBXHttpRequest;
@class MBXUploadOptions;
@protocol MBXHttpServiceInterceptorInterface;

NS_SWIFT_NAME(HttpServiceInterface)
@protocol MBXHttpServiceInterface
- (void)setInterceptorForInterceptor:(nullable id<MBXHttpServiceInterceptorInterface>)interceptor;
- (void)setMaxRequestsPerHostForMax:(uint8_t)max;
- (uint64_t)requestForRequest:(nonnull MBXHttpRequest *)request
                     callback:(nonnull MBXHttpResponseCallback)callback;
- (void)cancelRequestForId:(uint64_t)id_
                  callback:(nonnull MBXResultCallback)callback;
- (BOOL)supportsKeepCompression __attribute__((deprecated));
- (uint64_t)downloadForOptions:(nonnull MBXDownloadOptions *)options
                      callback:(nonnull MBXDownloadStatusCallback)callback;
- (uint64_t)uploadForOptions:(nonnull MBXUploadOptions *)options
                    callback:(nonnull MBXUploadStatusCallback)callback;
- (void)cancelUploadForId:(uint64_t)id_
                 callback:(nonnull MBXResultCallback)callback;
@end
