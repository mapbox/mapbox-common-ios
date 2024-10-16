// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** TileRegion represents an identifiable geographic tile region with metadata */
NS_SWIFT_NAME(TileRegion)
__attribute__((visibility ("default")))
@interface MBXTileRegion : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;


/** The id of the tile region */
@property (nonatomic, readonly, nonnull, copy) NSString *id;

/** The number of resources that are known to be required for this tile region. */
@property (nonatomic, readonly) uint64_t requiredResourceCount;

/**
 * The number of resources that have been fully downloaded and are ready for
 * offline access.
 *
 * The tile region is complete if `completedResourceCount` is equal to `requiredResourceCount`.
 */
@property (nonatomic, readonly) uint64_t completedResourceCount;

/**
 * The cumulative size, in bytes, of all resources (inclusive of tiles) that have
 * been fully downloaded.
 */
@property (nonatomic, readonly) uint64_t completedResourceSize;

/**
 * The earliest point in time when any of the region resources gets expired.
 *
 * Unitialized for incomplete tile regions or for complete tile regions with all immutable resources.
 */
@property (nonatomic, readonly, nullable) NSDate *expires;


@end
