// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXTileRegionErrorType.h>

/** Describes a tile region load request error. */
NS_SWIFT_NAME(TileRegionError)
__attribute__((visibility ("default")))
@interface MBXTileRegionError : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithType:(MBXTileRegionErrorType)type
                             message:(nonnull NSString *)message;

/** The reason for the response error. */
@property (nonatomic, readonly) MBXTileRegionErrorType type;

/** An error message */
@property (nonatomic, readonly, nonnull, copy) NSString *message;


@end
