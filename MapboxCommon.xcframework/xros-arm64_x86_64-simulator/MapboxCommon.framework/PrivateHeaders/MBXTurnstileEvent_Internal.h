// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXUserSKUIdentifier_Internal.h>

NS_SWIFT_NAME(TurnstileEvent)
__attribute__((visibility ("default")))
@interface MBXTurnstileEvent : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithSkuId:(MBXUserSKUIdentifier)skuId;

@property (nonatomic, readonly) MBXUserSKUIdentifier skuId;

@end
