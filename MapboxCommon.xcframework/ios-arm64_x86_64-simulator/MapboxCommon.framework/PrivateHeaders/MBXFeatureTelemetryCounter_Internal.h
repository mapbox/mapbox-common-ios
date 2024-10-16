// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_SENDABLE
NS_SWIFT_NAME(FeatureTelemetryCounter)
__attribute__((visibility ("default")))
@interface MBXFeatureTelemetryCounter : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

+ (nonnull MBXFeatureTelemetryCounter *)createForName:(nonnull NSString *)name __attribute((ns_returns_retained));
- (nonnull NSString *)getName __attribute((ns_returns_retained));
- (uint32_t)getValue;
- (void)reset;
- (void)increment;

@end
