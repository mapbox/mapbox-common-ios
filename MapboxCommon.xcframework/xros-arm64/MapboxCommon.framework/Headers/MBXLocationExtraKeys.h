// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Keys for additional information (extra) in Location. */
NS_SWIFT_NAME(LocationExtraKeys)
__attribute__((visibility ("default")))
@interface MBXLocationExtraKeys : NSObject

    /**
     * The key to indicate if this location fix is a mock.
     *
     * Value: Boolean
     */
    @property (nonatomic, class, readonly) NSString * IsMock;
    /**
     * The key to indicate if this location fix is retrieved from an external
     * accessory attached to the device such as GNSS dongle, CarPlay, etc.
     *
     * Value: Boolean
     */
    @property (nonatomic, class, readonly) NSString * IsExternal;

@end
