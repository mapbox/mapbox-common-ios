// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBXSdkInformation;

/**
 * Provides an interface to query registered Mapbox SDKs. Mapbox SDKs include Maps, Navigation, Search, and others.
 *
 */
NS_SWIFT_NAME(SdkInformationQuery)
__attribute__((visibility ("default")))
@interface MBXSdkInformationQuery : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

/**
 * @brief Return a list containing all registered SDKs.
 *
 * @return List of SDK information.
 */
+ (nonnull NSArray<MBXSdkInformation *> *)getSdkInformation __attribute((ns_returns_retained));
/**
 * @brief Return information about registered SDK with the name.
 *
 * @param name Name of requested SDK information.
 * For instance: "MapboxCoreMaps", "search-sdk-android", "mapbox-navigation-ios", "mapbox-navigation-android".
 * You can enumerate all registered SDKs and find the name you are looking for by calling getSdkInformation.
 *
 * @return SdkInformation with requested name or nothing if SDK with this name is not registered
 */
+ (nullable MBXSdkInformation *)getSdkInformationByNameForName:(nonnull NSString *)name __attribute((ns_returns_retained));

@end
