// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXLocationProvider.h>

/** Location provider specialisation that provides real-time locations generated from the device */
NS_SWIFT_NAME(DeviceLocationProvider)
@protocol MBXDeviceLocationProvider<MBXLocationProvider>
/**
 * @brief Returns the name associated with this device location provider.
 * @return An associated name for the device location provider, if available.
 */
- (nullable NSString *)getName;
@end
