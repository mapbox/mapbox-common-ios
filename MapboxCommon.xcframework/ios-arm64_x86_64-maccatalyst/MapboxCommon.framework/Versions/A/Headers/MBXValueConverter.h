// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
@class MBXExpected<__covariant Value, __covariant Error>;

NS_SWIFT_NAME(ValueConverter)
__attribute__((visibility ("default")))
@interface MBXValueConverter : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

/**
 * Converts value to a JSON string.
 * The method is intended to be used when `machine-readable` string is needed.
 *
 * @param value The value to be converted.
 *
 * @return string The value converted to a JSON string.
 */
+ (nonnull NSString *)toJsonForValue:(nonnull id)value __attribute((ns_returns_retained));
/**
 * Converts value to a `human-readable` JSON string.
 * Space (0x20) character is used for indentation.
 *
 * @param value The value to be converted.
 * @param indent The indentation level for converted JSON.
 *
 * @return string The value converted to a JSON string.
 */
+ (nonnull NSString *)toJsonForValue:(nonnull id)value
                              indent:(uint32_t)indent __attribute((ns_returns_retained));

@end
