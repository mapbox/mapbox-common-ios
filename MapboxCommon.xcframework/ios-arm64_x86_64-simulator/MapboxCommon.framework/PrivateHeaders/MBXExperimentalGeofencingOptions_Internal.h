// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(__GeofencingOptions)
__attribute__((visibility ("default")))
@interface MBXExperimentalGeofencingOptions : NSObject

- (nonnull instancetype)init;

- (nonnull instancetype)initWithDefaultRadius:(uint32_t)defaultRadius
                     maximumMonitoredFeatures:(uint32_t)maximumMonitoredFeatures;

@property (nonatomic, readonly) uint32_t defaultRadius;
@property (nonatomic, readonly) uint32_t maximumMonitoredFeatures;

@end
