// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXAccuracyLevel.h>

@class MBXIntervalSettings;

/** Data model that contains parameters for location requests. */
NS_SWIFT_NAME(LocationProviderRequest)
__attribute__((visibility ("default")))
@interface MBXLocationProviderRequest : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithAccuracy:(nullable NSNumber *)accuracy
                            displacement:(nullable NSNumber *)displacement
                                interval:(nullable MBXIntervalSettings *)interval;

/** The accuracy of the observed location */
@property (nonatomic, readonly, nullable) NSNumber *accuracy;

/** Minimum displacement between location updates in meters. */
@property (nonatomic, readonly, nullable) NSNumber *displacement;

/** Interval for active location updates. */
@property (nonatomic, readonly, nullable) MBXIntervalSettings *interval;


- (BOOL)isEqualToLocationProviderRequest:(nonnull MBXLocationProviderRequest *)other;

@end
