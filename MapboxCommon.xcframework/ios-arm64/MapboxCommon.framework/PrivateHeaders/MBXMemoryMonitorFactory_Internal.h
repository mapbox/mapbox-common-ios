// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@protocol MBXMemoryMonitorInterface;

NS_SWIFT_NAME(MemoryMonitorFactory)
__attribute__((visibility ("default")))
@interface MBXMemoryMonitorFactory : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

+ (nonnull id<MBXMemoryMonitorInterface>)getOrCreate __attribute((ns_returns_retained));
+ (void)reset;
+ (void)setUserDefinedForCustom:(nonnull id<MBXMemoryMonitorInterface>)custom;

@end
