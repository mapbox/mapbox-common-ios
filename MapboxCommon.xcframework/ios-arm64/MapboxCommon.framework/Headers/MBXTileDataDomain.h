// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Describes the tiles data domain. */
// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBXTileDataDomain)
{
    /** Data for Maps. */
    MBXTileDataDomainMaps,
    /** Data for Navigation. */
    MBXTileDataDomainNavigation,
    /** Data for Search. */
    MBXTileDataDomainSearch,
    /** Data for ADAS. */
    MBXTileDataDomainAdas,
    /** Data for Navigation HD. */
    MBXTileDataDomainNavigationHD
} NS_SWIFT_NAME(TileDataDomain);

NSString* MBXTileDataDomainToString(MBXTileDataDomain tile_data_domain);
