// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXTileDataDomain.h>
#import <MapboxCommon/MBXTileRegionEstimateProgressCallback.h>
#import <MapboxCommon/MBXTileRegionLoadProgressCallback.h>

@class MBXResourceDescription;
@class MBXResourceLoadOptions;
@class MBXTileRegionEstimateOptions;
@class MBXTileRegionLoadOptions;
@class MBXTileStoreAmbientCacheFilterOptions;
@class MBXTilesetDescriptor;
@protocol MBXCancelable;
@protocol MBXTileStoreObserver;

/**
 * TileStore manages downloads and storage for requests to tile-related API endpoints, enforcing a disk usage
 * quota: tiles available on disk may be deleted to make room for a new download. This interface can be used by an
 * app developer to set the disk quota. The rest of TileStore API is intended for native SDK consumption only.
 */
NS_SWIFT_NAME(TileStore)
__attribute__((visibility ("default")))
@interface MBXTileStore : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

/**
 * Creates a TileStore instance for the given storage path.
 *
 * The returned instance exists as long as it is retained by the client.
 * If the tile store instance already exists for the given path this method will return it without creating
 * a new instance, thus making sure that there is only one tile store instance for a path at a time.
 *
 * If the given path is empty, the tile store at the default location is returned.
 * On iOS, this storage path is excluded from automatic cloud backup.
 * On Android, please exclude the storage path in your Manifest.
 * Please refer to the [Android Documentation](https://developer.android.com/guide/topics/data/autobackup.html#IncludingFiles) for detailed information.
 *
 * @param  path The path on disk where tiles and metadata will be stored
 * @return Returns a TileStore instance.
 */
+ (nonnull MBXTileStore *)createForPath:(nonnull NSString *)path __attribute((ns_returns_retained)) NS_REFINED_FOR_SWIFT;
/**
 * Creates a TileStore instance at the default location.
 *
 * If the tile store instance already exists for the default location this method will return it without creating
 * a new instance, thus making sure that there is only one tile store instance for a path at a time.
 *
 * @return Returns a TileStore instance.
 */
+ (nonnull MBXTileStore *)create __attribute((ns_returns_retained)) NS_REFINED_FOR_SWIFT;
/**
 * An overloaded version that does not report progess or finished status of the loading operation.
 *
 * @param id The tile region identifier.
 * @param loadOptions The tile region load options.
 * @return Returns a Cancelable object to cancel the load request
 */
- (nonnull id<MBXCancelable>)loadTileRegionForId:(nonnull NSString *)id_
                                     loadOptions:(nonnull MBXTileRegionLoadOptions *)loadOptions __attribute((ns_returns_retained)) NS_REFINED_FOR_SWIFT;
/**
 * Removes a tile region.
 *
 * Removes a tile region from the existing packages list. The actual resources
 * eviction might be deferred. All pending loading operations for the tile region
 * with the given id will fail with Canceled error.
 * When a tile region is removed associated resources will move to the ambient cache.
 *
 * @param id The tile region identifier.
 */
- (void)removeTileRegionForId:(nonnull NSString *)id_;
/**
 * Sets additional options for this instance.
 *
 * @param key The configuration option that should be changed. Valid keys are listed in \c TileStoreOptions.
 * @param value The value for the configuration option, or null if it should be reset.
 */
- (void)setOptionForKey:(nonnull NSString *)key
                  value:(nonnull id)value;
/**
 * Sets additional options for this instance that are specific to a data type.
 *
 * @param key The configuration option that should be changed. Valid keys are listed in \c TileStoreOptions.
 * @param domain The data type this setting should be applied for.
 * @param value The value for the configuration option, or null if it should be reset.
 */
- (void)setOptionForKey:(nonnull NSString *)key
                 domain:(MBXTileDataDomain)domain
                  value:(nonnull id)value;

@end
