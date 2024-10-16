// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/**
 * A tile region's load progress includes counts
 * of the number of resources that have completed downloading
 * and the total number of resources that are required.
 */
NS_SWIFT_NAME(TileRegionLoadProgress)
__attribute__((visibility ("default")))
@interface MBXTileRegionLoadProgress : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithCompletedResourceCount:(uint64_t)completedResourceCount
                                 completedResourceSize:(uint64_t)completedResourceSize
                                  erroredResourceCount:(uint64_t)erroredResourceCount
                                 requiredResourceCount:(uint64_t)requiredResourceCount
                                   loadedResourceCount:(uint64_t)loadedResourceCount
                                    loadedResourceSize:(uint64_t)loadedResourceSize;

/** The number of resources that are ready for offline access. */
@property (nonatomic, readonly) uint64_t completedResourceCount;

/**
 * The cumulative size, in bytes, of all resources (inclusive of tiles) that
 * are ready for offline access.
 */
@property (nonatomic, readonly) uint64_t completedResourceSize;

/** The number of resources that have failed to download due to an error. */
@property (nonatomic, readonly) uint64_t erroredResourceCount;

/** The number of resources that are known to be required for this tile region. */
@property (nonatomic, readonly) uint64_t requiredResourceCount;

/**
 * The number of resources that are ready for offline use and that (at least partially)
 * have been downloaded from the network.
 */
@property (nonatomic, readonly) uint64_t loadedResourceCount;

/**
 * The cumulative size, in bytes, of all resources (inclusive of tiles) that have
 * been downloaded from the network.
 */
@property (nonatomic, readonly) uint64_t loadedResourceSize;


@end
