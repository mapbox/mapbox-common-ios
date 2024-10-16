// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** The result of tile region estim */
NS_SWIFT_NAME(TileRegionEstimateResult)
__attribute__((visibility ("default")))
@interface MBXTileRegionEstimateResult : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithErrorMargin:(double)errorMargin
                               transferSize:(uint64_t)transferSize
                                storageSize:(uint64_t)storageSize
                                  extraData:(nullable id)extraData;

/**
 * Error margin of the estimate, given a fixed confidence level of 99.9%, represented by
 * a value between 0 and 1. There is a 99.9% probability that the real value is contained
 * in the interval [ (1 - errorMargin) * estimated value, (1 + errorMargin) * estimated value].
 *
 * Note: the assumptions used to calculate the error margin may not hold true for sparce
 * datasets.
 */
@property (nonatomic, readonly) double errorMargin;

/**
 * Estimated number of bytes that would have to be transferred from the network in order
 * to download the estimated tile region.
 */
@property (nonatomic, readonly) uint64_t transferSize;

/**
 * Estimated number of bytes required to store the tile region on disk after the download
 * is complete.
 */
@property (nonatomic, readonly) uint64_t storageSize;

/** Reserved for future use. */
@property (nonatomic, readonly, nullable, copy) id extraData;


- (BOOL)isEqualToTileRegionEstimateResult:(nonnull MBXTileRegionEstimateResult *)other;

@end
