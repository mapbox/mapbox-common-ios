// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Holds options for the tile region estimation operation. */
NS_SWIFT_NAME(TileRegionEstimateOptions)
__attribute__((visibility ("default")))
@interface MBXTileRegionEstimateOptions : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithExtraOptions:(nullable id)extraOptions;

- (nonnull instancetype)initWithErrorMargin:(float)errorMargin
                   preciseEstimationTimeout:(NSTimeInterval)preciseEstimationTimeout
                                    timeout:(NSTimeInterval)timeout
                               extraOptions:(nullable id)extraOptions;

/** Accepted error margin. */
@property (nonatomic, readonly) float errorMargin;

/**
 * If after this timeout the estimate is within the error margin, the operation
 * will be completed without attempting to reduce the error margin to 0.
 *
 * A value of 0 means no timeout. If unspecified, defaults to 5 seconds.
 */
@property (nonatomic, readonly) NSTimeInterval preciseEstimationTimeout;

/**
 * Timeout after which the operation will be interrupted, regardless of the
 * current error margin.
 *
 * A value of 0 means no timeout. If unspecified, defaults to 0.
 */
@property (nonatomic, readonly) NSTimeInterval timeout;

/** Reserved for future use. */
@property (nonatomic, readonly, nullable, copy) id extraOptions;


- (BOOL)isEqualToTileRegionEstimateOptions:(nonnull MBXTileRegionEstimateOptions *)other;

@end
