// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXResultCallback_Internal.h>

@class MBXHttpBackendRequest;
@protocol MBXHttpBackendRequestObserver;

NS_SWIFT_NAME(Service)
@protocol MBXHttpBackendService
- (void)setMaxRequestsPerHostForMax:(uint8_t)max;
- (uint64_t)requestForRequest:(nonnull MBXHttpBackendRequest *)request
                     observer:(nonnull id<MBXHttpBackendRequestObserver>)observer;
- (void)cancelRequestForId:(uint64_t)id_
                  callback:(nonnull MBXResultCallback)callback;
- (BOOL)supportsKeepCompression;
@end
