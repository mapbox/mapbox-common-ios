// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/**
 * Provides information about a given Mapbox SDK. This information is then used to populate the "User-Agent" HTTP header
 * of HTTP requests generated from within Mapbox SDKs. Mapbox SDKs include Maps, Navigation, Search, and others.
 */
NS_SWIFT_NAME(SdkInformation)
__attribute__((visibility ("default")))
@interface MBXSdkInformation : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithName:(nonnull NSString *)name
                             version:(nonnull NSString *)version
                         packageName:(nullable NSString *)packageName;

/** Name of the SDK. Examples include "Maps", "Navigation", "Search". */
@property (nonatomic, readonly, nonnull, copy) NSString *name;

/** SDK Version string. Should follow SEMVER rules e.g. "1.0.0". */
@property (nonatomic, readonly, nonnull, copy) NSString *version;

/**
 * This is an optional field to specify a SDK package name. While this field is not something natural for
 * native platforms, we recommend to set values like "com.mapbox.maps", "com.mapbox.navigation", etc. This
 * will make information reported to Mapbox servers look consistent with mobile platforms.
 */
@property (nonatomic, readonly, nullable, copy) NSString *packageName;


- (BOOL)isEqualToSdkInformation:(nonnull MBXSdkInformation *)other;

@end
