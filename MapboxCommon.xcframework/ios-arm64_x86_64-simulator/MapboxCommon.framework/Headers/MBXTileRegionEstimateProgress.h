// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBXTileRegionEstimateResult;

/**
 * A tile region's estimate progress includes counts of the number of resources that have
 * been estimated and the total number of resources as well as a partial result with the
 * current estimate, calculated using the data available at the moment.
 */
NS_SWIFT_NAME(TileRegionEstimateProgress)
__attribute__((visibility ("default")))
@interface MBXTileRegionEstimateProgress : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithRequiredResourceCount:(uint64_t)requiredResourceCount
                                 erroredResourceCount:(uint64_t)erroredResourceCount
                               completedResourceCount:(uint64_t)completedResourceCount
                                        partialResult:(nonnull MBXTileRegionEstimateResult *)partialResult;

/** The number of resources that are known to be required for this tile region. */
@property (nonatomic, readonly) uint64_t requiredResourceCount;

/** The number of resources that have failed to be estimated due to an error. */
@property (nonatomic, readonly) uint64_t erroredResourceCount;

/** The number of resources that have been estimated. */
@property (nonatomic, readonly) uint64_t completedResourceCount;

/**
 * Partial result with the current estimate, calculated using the data available at
 * the moment.
 */
@property (nonatomic, readonly, nonnull) MBXTileRegionEstimateResult *partialResult;


- (BOOL)isEqualToTileRegionEstimateProgress:(nonnull MBXTileRegionEstimateProgress *)other;

@end
