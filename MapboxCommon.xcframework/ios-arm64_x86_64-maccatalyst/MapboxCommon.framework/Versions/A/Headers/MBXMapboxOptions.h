// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Class for Mapbox SDK settings management */
NS_SWIFT_NAME(MapboxOptions)
__attribute__((visibility ("default")))
@interface MBXMapboxOptions : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

/**
 * Set access token to be used by all Mapbox SDK.
 *
 * @param token Token string to set.
 */
+ (void)setAccessTokenForToken:(nonnull NSString *)token NS_REFINED_FOR_SWIFT;
/**
 * Get Mapbox access token.
 *
 * @return token string or empty string in case token is not set.
 */
+ (nonnull NSString *)getAccessToken __attribute((ns_returns_retained)) NS_REFINED_FOR_SWIFT;

@end
