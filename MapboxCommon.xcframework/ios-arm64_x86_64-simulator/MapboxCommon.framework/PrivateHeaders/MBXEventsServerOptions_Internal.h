// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBXDeferredDeliveryServiceOptions;
@class MBXSdkInformation;

NS_SWIFT_NAME(EventsServerOptions)
__attribute__((visibility ("default")))
@interface MBXEventsServerOptions : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithSdkInformation:(nonnull MBXSdkInformation *)sdkInformation
                deferredDeliveryServiceOptions:(nullable MBXDeferredDeliveryServiceOptions *)deferredDeliveryServiceOptions;

@property (nonatomic, readonly, nonnull) MBXSdkInformation *sdkInformation;
@property (nonatomic, readonly, nullable) MBXDeferredDeliveryServiceOptions *deferredDeliveryServiceOptions;

- (BOOL)isEqualToEventsServerOptions:(nonnull MBXEventsServerOptions *)other;

@end
