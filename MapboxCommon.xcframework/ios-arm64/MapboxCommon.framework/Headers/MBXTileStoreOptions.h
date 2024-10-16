// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** These constants can be used as keys for TileStore::setOption to configure further aspects of a TileStore instance. */
NS_SWIFT_NAME(TileStoreOptions)
__attribute__((visibility ("default")))
@interface MBXTileStoreOptions : NSObject

    /**
     * Sets the maximum amount of bytes TileStore can use to store files.
     * If the new value causes the quota to be exceed, request will fail and data will be evicted to enforce the quota.
     * Accepts a (positive) number of bytes, or null for resetting to the default value.
     * Default is "no quota"
     */
    @property (nonatomic, class, readonly) NSString * DiskQuota;
    /**
     * Sets the base URL to use for requests to the Mapbox API. Defaults to "https://api.mapbox.com".
     * Accepts a string, or null for resetting to the default value.
     */
    @property (nonatomic, class, readonly) NSString * MapboxAPIURL;
    /**
     * Sets the URL template for making tile requests. Defaults to the Mapbox API endpoints.
     * Accepts a string, or null for resetting to the default value.
     *
     * The template string for the URL, which may contain the following placeholders:
     * - {mapbox_api_url}: The globally set Mapbox API URL, or the default endpoint if none is set.
     * - {mapbox_access_token}: The access token, or an empty string if none is set.
     * - {mapbox_sku_token}: The Mapbox SKU token for the tile.
     * - {domain}: A lowercase string representing the data domain, e.g. 'maps', or 'navigation'.
     * - {dataset}: The dataset of the tile to be loaded, e.g. 'mapbox.mapbox-streets-v8'.
     * - {version}: The dataset version of the tile to be loaded, if applicable.
     * - {level}: The level of the Navigation tile to be loaded.
     * - {graph_id}: The graph ID suffix of the Navigation tile to be loaded. E.g. '002/958/221'
     * - {z}: The zoom level of the Map tile to be loaded.
     * - {x}: The x coordinate of the Map tile to be loaded.
     * - {y}: The y coordinate of the Map tile to be loaded.
     * - {z_min}: The zoom range minimum of the Map tile to be loaded.
     * - {z_max}: The zoom range maximum of the Map tile to be loaded.
     */
    @property (nonatomic, class, readonly) NSString * TileURLTemplate;

@end
