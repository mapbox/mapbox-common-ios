// This file is generated and will be overwritten automatically.

#import <MapboxCommon/MBXTileRegion.h>

@interface MBXTileRegion ()
- (nonnull instancetype)initWithId:(nonnull NSString *)id_
             requiredResourceCount:(uint64_t)requiredResourceCount
            completedResourceCount:(uint64_t)completedResourceCount
             completedResourceSize:(uint64_t)completedResourceSize
                           expires:(nullable NSDate *)expires
                         extraData:(nullable id)extraData;
@property (nonatomic, readonly, nullable, copy) id extraData;
@end
