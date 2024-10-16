// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@protocol MBXBatteryMonitorInterface;

NS_SWIFT_NAME(BatteryMonitorFactory)
__attribute__((visibility ("default")))
@interface MBXBatteryMonitorFactory : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

+ (nonnull id<MBXBatteryMonitorInterface>)getOrCreate __attribute((ns_returns_retained));
+ (void)reset;
+ (void)setUserDefinedForCustom:(nonnull id<MBXBatteryMonitorInterface>)custom;

@end
