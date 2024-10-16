// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXEventPriority_Internal.h>

@class MBXDeferredDeliveryRequestOptions;

NS_SWIFT_NAME(Event)
__attribute__((visibility ("default")))
@interface MBXEvent : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithPriority:(MBXEventPriority)priority
                              attributes:(nonnull id)attributes
                         deferredOptions:(nullable MBXDeferredDeliveryRequestOptions *)deferredOptions;

@property (nonatomic, readwrite) MBXEventPriority priority;
@property (nonatomic, readonly, nonnull, copy) id attributes;
@property (nonatomic, readonly, nullable) MBXDeferredDeliveryRequestOptions *deferredOptions;

@end
