// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXMovementModeProvider_Internal.h>
#import <MapboxCommon/MBXMovementMode_Internal.h>

NS_SWIFT_NAME(MovementInfo)
__attribute__((visibility ("default")))
@interface MBXMovementInfo : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithMovementMode:(nonnull NSDictionary<NSNumber *, NSNumber *> *)movementMode
                            movementProvider:(MBXMovementModeProvider)movementProvider;

@property (nonatomic, readonly, nonnull, copy) NSDictionary<NSNumber *, NSNumber *> *movementMode;
@property (nonatomic, readonly) MBXMovementModeProvider movementProvider;

@end
