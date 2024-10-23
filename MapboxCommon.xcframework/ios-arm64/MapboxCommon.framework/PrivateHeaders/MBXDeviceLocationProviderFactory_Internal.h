// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
@class MBXExpected<__covariant Value, __covariant Error>;

@class MBXLocationError;
@class MBXLocationProviderRequest;
@protocol MBXDeviceLocationProvider;

NS_SWIFT_NAME(DeviceLocationProviderFactory)
@protocol MBXDeviceLocationProviderFactory
- (nonnull MBXExpected<id<MBXDeviceLocationProvider>, MBXLocationError *> *)buildForRequest:(nullable MBXLocationProviderRequest *)request;
@end
