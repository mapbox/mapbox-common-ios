// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
@class MBXExpected<__covariant Value, __covariant Error>;
@class MBXGeometry;

@class MBXTileRegion;
@class MBXTileRegionError;
@class MBXTileRegionLoadProgress;

NS_SWIFT_NAME(TileStoreObserver)
@protocol MBXTileStoreObserver
/** Called whenever the load progress of a TileRegion changes. */
- (void)onRegionLoadProgressForId:(nonnull NSString *)id_
                         progress:(nonnull MBXTileRegionLoadProgress *)progress;
- (void)onRegionLoadFinishedForId:(nonnull NSString *)id_
                           region:(nonnull MBXExpected<MBXTileRegion *, MBXTileRegionError *> *)region;
/** Called when a TileRegion was removed. */
- (void)onRegionRemovedForId:(nonnull NSString *)id_;
/** Called when the geometry of a TileRegion was modified. */
- (void)onRegionGeometryChangedForId:(nonnull NSString *)id_
                            geometry:(nonnull MBXGeometry *)geometry;
/** Called when the user-provided metadata associated with a TileRegion was changed. */
- (void)onRegionMetadataChangedForId:(nonnull NSString *)id_
                               value:(nonnull id)value;
@end
