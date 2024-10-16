// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXPlatform_Internal.h>

NS_SWIFT_NAME(SystemInformation)
__attribute__((visibility ("default")))
@interface MBXSystemInformation : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithPlatform:(MBXPlatform)platform
                            platformName:(nonnull NSString *)platformName
                         platformVersion:(nonnull NSString *)platformVersion
                         applicationName:(nonnull NSString *)applicationName
                      applicationPackage:(nullable NSString *)applicationPackage
                      applicationVersion:(nonnull NSString *)applicationVersion
                  applicationBuildNumber:(nonnull NSString *)applicationBuildNumber
                                  device:(nonnull NSString *)device
                            architecture:(nonnull NSString *)architecture
                              deviceInfo:(nonnull NSString *)deviceInfo
                     applicationDataPath:(nonnull NSString *)applicationDataPath
                        isPhysicalDevice:(BOOL)isPhysicalDevice
                    applicationCachePath:(nonnull NSString *)applicationCachePath;

/**
 * @return pretty device name string. If device, architecture, and deviceInfo are present format is
 * `device (architecture; deviceInfo)`. In case some of the fields are empty or architecture value is `unknown`
 * possible formats are: `device (architecture)`, `device (deviceInfo)`, `device`.
 * Normally `device` field should not be empty if `SystemInformation` is properly initialized.
 * But in case `SystemInformation` is created manually and device field is empty possible formats are
 * `(architecture; deviceInfo)`, `(architecture)`, `(deviceInfo)` or empty in case all fields are empty.
 */
- (nonnull NSString *)getPrettyDeviceName __attribute((ns_returns_retained));
/**
 * @return Application running time, in nanoseconds. The running time is calculated as the delta between the
 * application start time point and the time point at the time the method is called.
 */
- (NSTimeInterval)runningTime;
/**
 * @return Total memory on the device in bytes. This function does not check if memory is free or used
 * but just returns how much memory is installed on the device.
 */
- (uint64_t)totalMemory;

@property (nonatomic, readonly) MBXPlatform platform;
@property (nonatomic, readonly, nonnull, copy) NSString *platformName;
@property (nonatomic, readonly, nonnull, copy) NSString *platformVersion;
@property (nonatomic, readonly, nonnull, copy) NSString *applicationName;
@property (nonatomic, readonly, nullable, copy) NSString *applicationPackage;
@property (nonatomic, readonly, nonnull, copy) NSString *applicationVersion;
@property (nonatomic, readonly, nonnull, copy) NSString *applicationBuildNumber;
@property (nonatomic, readonly, nonnull, copy) NSString *device;
@property (nonatomic, readonly, nonnull, copy) NSString *architecture;
@property (nonatomic, readonly, nonnull, copy) NSString *deviceInfo;
@property (nonatomic, readonly, nonnull, copy) NSString *applicationDataPath;
@property (nonatomic, readonly) BOOL isPhysicalDevice;
@property (nonatomic, readonly, nonnull, copy) NSString *applicationCachePath;

@end
