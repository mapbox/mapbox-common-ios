// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Location information. */
NS_SWIFT_NAME(Location)
__attribute__((visibility ("default")))
@interface MBXLocation : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithLatitude:(double)latitude
                               longitude:(double)longitude
                               timestamp:(uint64_t)timestamp
                      monotonicTimestamp:(nullable NSNumber *)monotonicTimestamp
                                altitude:(nullable NSNumber *)altitude
                      horizontalAccuracy:(nullable NSNumber *)horizontalAccuracy
                        verticalAccuracy:(nullable NSNumber *)verticalAccuracy
                                   speed:(nullable NSNumber *)speed
                           speedAccuracy:(nullable NSNumber *)speedAccuracy
                                 bearing:(nullable NSNumber *)bearing
                         bearingAccuracy:(nullable NSNumber *)bearingAccuracy
                                   floor:(nullable NSNumber *)floor
                                  source:(nullable NSString *)source
                                   extra:(nullable id)extra NS_REFINED_FOR_SWIFT;

/** The north–south position of a point on the Earth's surface, in decimal degrees (WGS84). */
@property (nonatomic, readonly) double latitude NS_REFINED_FOR_SWIFT;

/** The east–west position of a point on the Earth's surface, in decimal degrees (WGS84). */
@property (nonatomic, readonly) double longitude NS_REFINED_FOR_SWIFT;

/** The UTC time of this location fix, in milliseconds since epoch (January 1, 1970). */
@property (nonatomic, readonly) uint64_t timestamp NS_REFINED_FOR_SWIFT;

/** The monotonic timestamp, in nanoseconds. */
@property (nonatomic, readwrite, nullable) NSNumber *monotonicTimestamp NS_REFINED_FOR_SWIFT;

/** The altitude of the location in meters above the WGS84 reference ellipsoid. */
@property (nonatomic, readwrite, nullable) NSNumber *altitude NS_REFINED_FOR_SWIFT;

/** The estimated horizontal accuracy of this location, radial, in meters. */
@property (nonatomic, readwrite, nullable) NSNumber *horizontalAccuracy NS_REFINED_FOR_SWIFT;

/** The estimated vertical accuracy of this location, in meters. */
@property (nonatomic, readwrite, nullable) NSNumber *verticalAccuracy NS_REFINED_FOR_SWIFT;

/** The instantaneous speed of the device, measured in meters/second over ground. */
@property (nonatomic, readwrite, nullable) NSNumber *speed NS_REFINED_FOR_SWIFT;

/** The estimated speed accuracy of this location, in meters/second. */
@property (nonatomic, readwrite, nullable) NSNumber *speedAccuracy NS_REFINED_FOR_SWIFT;

/** The GNSS bearing, in degrees. */
@property (nonatomic, readwrite, nullable) NSNumber *bearing NS_REFINED_FOR_SWIFT;

/** The estimated bearing accuracy of this location, in degrees. */
@property (nonatomic, readwrite, nullable) NSNumber *bearingAccuracy NS_REFINED_FOR_SWIFT;

/**
 * The logical floor of the building.
 *
 * Note that 0 zero indicates the ground floor, negative values
 * indicate underground floors and positive values indicate floors
 * above ground level.
 */
@property (nonatomic, readwrite, nullable) NSNumber *floor NS_REFINED_FOR_SWIFT;

/** The source that provides this location */
@property (nonatomic, readwrite, nullable, copy) NSString *source;

/** Additional information */
@property (nonatomic, readonly, nullable, copy) id extra;


- (BOOL)isEqualToLocation:(nonnull MBXLocation *)other;

@end
