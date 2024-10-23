// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Describes the reason for a tile region download request failure. */
// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBXTileRegionErrorType)
{
    /** The operation was canceled. */
    MBXTileRegionErrorTypeCanceled,
    /** tile region does not exist. */
    MBXTileRegionErrorTypeDoesNotExist,
    /** Tileset descriptors resolving failed. */
    MBXTileRegionErrorTypeTilesetDescriptor,
    /** There is no available space to store the resources */
    MBXTileRegionErrorTypeDiskFull,
    /** Other reason. */
    MBXTileRegionErrorTypeOther,
    /** The region contains more tiles than allowed. */
    MBXTileRegionErrorTypeTileCountExceeded
} NS_SWIFT_NAME(TileRegionErrorType);

NSString* MBXTileRegionErrorTypeToString(MBXTileRegionErrorType tile_region_error_type);
