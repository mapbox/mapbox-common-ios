// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXSettingsServiceStorageType.h>

@class MBXSettingsService;

/** Factory that allows to create settings service instance. */
NS_SWIFT_NAME(SettingsServiceFactory)
__attribute__((visibility ("default")))
@interface MBXSettingsServiceFactory : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

/** Create a new instance of the settings service if it doesn't exist already, or returns already created instance. */
+ (nonnull MBXSettingsService *)getInstanceForStorageType:(MBXSettingsServiceStorageType)storageType __attribute((ns_returns_retained));

@end
