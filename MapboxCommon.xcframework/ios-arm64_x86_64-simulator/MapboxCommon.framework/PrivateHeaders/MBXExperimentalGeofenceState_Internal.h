// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
@class MBXFeature;

NS_SWIFT_NAME(__GeofenceState)
__attribute__((visibility ("default")))
@interface MBXExperimentalGeofenceState : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithFeature:(nonnull MBXFeature *)feature
                              timestamp:(nullable NSDate *)timestamp;

@property (nonatomic, readonly, nonnull) MBXFeature *feature;
@property (nonatomic, readonly, nullable) NSDate *timestamp;

@end
