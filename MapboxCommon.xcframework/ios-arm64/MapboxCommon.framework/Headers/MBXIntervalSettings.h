// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** The interval for active location updates */
NS_SWIFT_NAME(IntervalSettings)
__attribute__((visibility ("default")))
@interface MBXIntervalSettings : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithMinimumInterval:(nullable NSNumber *)minimumInterval
                                maximumInterval:(nullable NSNumber *)maximumInterval
                                       interval:(nullable NSNumber *)interval;

/**
 * The fastest rate at which the application will receive location updates,
 * which might be faster than the `Interval`. Unlike `Interval` this parameter
 * is exact.
 */
@property (nonatomic, readonly, nullable) NSNumber *minimumInterval;

/**
 * Maximum wait time for location updates. If it's at least 2x larger then `Interval`,
 * then location delivery may be delayed and multiple locations can be delivered at
 * once.
 *
 */
@property (nonatomic, readonly, nullable) NSNumber *maximumInterval;

/** Desired interval for active location updates. */
@property (nonatomic, readonly, nullable) NSNumber *interval;


- (BOOL)isEqualToIntervalSettings:(nonnull MBXIntervalSettings *)other;

@end
