// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXTileDataDomain.h>
#import <MapboxCommon/MBXTileStoreAmbientCacheType_Internal.h>

NS_SWIFT_NAME(TileStoreAmbientCacheFilterOptions)
__attribute__((visibility ("default")))
@interface MBXTileStoreAmbientCacheFilterOptions : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithTypeFilter:(nullable NSArray<NSNumber *> *)typeFilter
                              domainFilter:(nullable NSArray<NSNumber *> *)domainFilter;

@property (nonatomic, readonly, nullable, copy) NSArray<NSNumber *> *typeFilter;
/** Optional filter to act only on the given ambient cache domains. Duplicates will be ignored. */
@property (nonatomic, readonly, nullable, copy) NSArray<NSNumber *> *domainFilter;


@end
