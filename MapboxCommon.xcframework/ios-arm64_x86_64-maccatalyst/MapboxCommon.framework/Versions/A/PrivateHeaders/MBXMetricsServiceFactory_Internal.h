// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBXMetricsService;

NS_SWIFT_NAME(MetricsServiceFactory)
__attribute__((visibility ("default")))
@interface MBXMetricsServiceFactory : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

+ (void)reset;
+ (nonnull MBXMetricsService *)getInstance __attribute((ns_returns_retained));
+ (nonnull MBXMetricsService *)getInstanceForLogging __attribute((ns_returns_retained));

@end
