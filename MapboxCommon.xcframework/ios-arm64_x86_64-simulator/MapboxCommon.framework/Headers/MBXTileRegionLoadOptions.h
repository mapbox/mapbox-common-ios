// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <MapboxCommon/MBXNetworkRestriction.h>
@class MBXCoordinate2D;
@class MBXGeometry;

@class MBXTilesetDescriptor;

/** Describes the tile region load option values. */
NS_SWIFT_NAME(TileRegionLoadOptions)
__attribute__((visibility ("default")))
@interface MBXTileRegionLoadOptions : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithGeometry:(nullable MBXGeometry *)geometry
                             descriptors:(nullable NSArray<MBXTilesetDescriptor *> *)descriptors
                                metadata:(nullable id)metadata
                           startLocation:(nullable MBXCoordinate2D *)startLocation
                   averageBytesPerSecond:(nullable NSNumber *)averageBytesPerSecond
                            extraOptions:(nullable id)extraOptions NS_REFINED_FOR_SWIFT;

- (nonnull instancetype)initWithGeometry:(nullable MBXGeometry *)geometry
                             descriptors:(nullable NSArray<MBXTilesetDescriptor *> *)descriptors
                                metadata:(nullable id)metadata
                           acceptExpired:(BOOL)acceptExpired
                      networkRestriction:(MBXNetworkRestriction)networkRestriction
                           startLocation:(nullable MBXCoordinate2D *)startLocation
                   averageBytesPerSecond:(nullable NSNumber *)averageBytesPerSecond
                            extraOptions:(nullable id)extraOptions NS_REFINED_FOR_SWIFT;

/**
 * The tile region's associated geometry.
 *
 * If provided, updates the tile region's associated geometry i.e. geometry,
 * which is used in the tile cover algorithm to find out a set of tiles to be loaded
 * for the tile region.
 */
@property (nonatomic, readonly, nullable) MBXGeometry *geometry NS_REFINED_FOR_SWIFT;

/**
 * The tile region's tileset descriptors.
 *
 * If provided, updates the tile region's tileset descriptors that define
 * the tilesets and zoom ranges of the tiles for the tile region.
 */
@property (nonatomic, readonly, nullable, copy) NSArray<MBXTilesetDescriptor *> *descriptors;

/**
 * A custom Mapbox Value associated with this tile region for storing metadata.
 *
 * If provided, the custom value value will be stored alongside the tile region. Previous values will
 * be replaced with the new value.
 *
 * Developers can use this field to store custom metadata associated with a tile region. This value
 * can be retrieved with getTileRegionMetadata().
 */
@property (nonatomic, readonly, nullable, copy) id metadata;

/**
 * Accepts expired data when loading tiles.
 *
 * This flag should be set to true to accept expired responses. When a tile is already loaded but expired, no
 * attempt will be made to refresh the data. This may lead to outdated data. Set to false to ensure that data
 * for a tile is up-to-date. Set to true to continue loading a group without updating expired data for tiles that
 * are already downloaded.
 */
@property (nonatomic, readonly) BOOL acceptExpired;

/**
 * Controls which networks may be used to load the tile.
 *
 * By default, all networks are allowed. However, in some situations, it's useful to limit the kind of networks
 * that are allowed, e.g. to ensure that data is only transferred over a connection that doesn't incur cost to
 * the user, like a WiFi connection, and prohibit data transfer over expensive connections like cellular.
 */
@property (nonatomic, readonly) MBXNetworkRestriction networkRestriction;

/**
 * Starts loading the tile region at the given location and then proceeds to tiles that are further away
 * from it.
 *
 * Note that this functionality is not currently implemented.
 */
@property (nonatomic, readonly, nullable) MBXCoordinate2D *startLocation NS_REFINED_FOR_SWIFT;

/**
 * Limits the download speed of the tile region.
 *
 * Note that this is not a strict bandwidth limit, but only limits the average download speed. tile regions may
 * be temporarily downloaded with higher speed, then pause downloading until the rolling average has dropped below
 * this value.
 *
 * If unspecified, the download speed will not be restricted.
 *
 * Note that this functionality is not currently implemented.
 */
@property (nonatomic, readonly, nullable) NSNumber *averageBytesPerSecond NS_REFINED_FOR_SWIFT;

/**
 * Extra tile region load options.
 *
 * If provided, contains an object value with extra tile region load options.
 *
 * Currently supported options:
 *  * force_refresh: if set to a true boolean value, all tiles in the group will be loaded instead of loading only
 *                   missing or expired tiles.
 */
@property (nonatomic, readonly, nullable, copy) id extraOptions;


@end
