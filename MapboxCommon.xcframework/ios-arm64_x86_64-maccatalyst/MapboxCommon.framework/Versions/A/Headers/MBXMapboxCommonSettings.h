// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Set of common keys that can be used to configure all Mapbox SDKs. */
NS_SWIFT_NAME(MapboxCommonSettings)
__attribute__((visibility ("default")))
@interface MBXMapboxCommonSettings : NSObject

    /**
     * The key that defines a language to be used by Mapbox SDKs.
     * The value of the key must be a string that is a valid IETF BCP-47 language tag (eg. "en-US").
     */
    @property (nonatomic, class, readonly) NSString * Language;
    /**
     * The key that defines a worldview to be used by the Mapbox SDKs.
     * The value of the key must be a string that is a valid ISO 3166-1 alpha-2 country code (eg. "US").
     */
    @property (nonatomic, class, readonly) NSString * Worldview;

@end
