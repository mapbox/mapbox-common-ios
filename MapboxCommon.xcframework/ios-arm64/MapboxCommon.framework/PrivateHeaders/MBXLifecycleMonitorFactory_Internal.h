// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@protocol MBXLifecycleMonitorInterface;

NS_SWIFT_NAME(LifecycleMonitorFactory)
__attribute__((visibility ("default")))
@interface MBXLifecycleMonitorFactory : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

+ (nonnull id<MBXLifecycleMonitorInterface>)getOrCreate __attribute((ns_returns_retained));

@end
