// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** The accuracy of the observed location */
// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBXAccuracyLevel)
{
    /**
     * Passive only accuracy request, not triggers any active locations or power usage itself,
     * but may receive locations generated in response to other requests.
     */
    MBXAccuracyLevelPassive,
    /** Low accuracy requirement (typically greater than 500 meters). */
    MBXAccuracyLevelLow,
    /** Medium accuracy requirement (typically between 100 and 500 meters). */
    MBXAccuracyLevelMedium,
    /** High accuracy requirement. */
    MBXAccuracyLevelHigh,
    /**
     * The highest possible accuracy requirement that uses additional
     * sensors (if possible) to facilitate navigation use case.
     */
    MBXAccuracyLevelHighest
} NS_SWIFT_NAME(AccuracyLevel);
