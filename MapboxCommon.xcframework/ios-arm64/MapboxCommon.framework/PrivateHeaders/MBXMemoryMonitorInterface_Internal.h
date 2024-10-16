// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXMemoryMonitorStatusCallback_Internal.h>

@class MBXMemoryMonitorObserverConfig;
@protocol MBXMemoryMonitorObserver;

NS_SWIFT_NAME(MemoryMonitorInterface)
@protocol MBXMemoryMonitorInterface
- (void)getMemoryMonitorStatusForConfig:(nonnull MBXMemoryMonitorObserverConfig *)config
                               callback:(nonnull MBXMemoryMonitorStatusCallback)callback;
- (void)registerObserverForObserver:(nonnull id<MBXMemoryMonitorObserver>)observer;
- (void)registerObserverWithConfigForConfig:(nonnull MBXMemoryMonitorObserverConfig *)config
                                   observer:(nonnull id<MBXMemoryMonitorObserver>)observer;
- (void)unregisterObserverForObserver:(nonnull id<MBXMemoryMonitorObserver>)observer;
@end
