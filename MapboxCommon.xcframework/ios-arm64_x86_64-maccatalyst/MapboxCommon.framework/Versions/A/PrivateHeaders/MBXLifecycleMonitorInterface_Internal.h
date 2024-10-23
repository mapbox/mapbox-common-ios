// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXGetLifecycleMonitoringStateCallback_Internal.h>
#import <MapboxCommon/MBXGetLifecycleStateCallback_Internal.h>

@protocol MBXLifecycleObserver;

NS_SWIFT_NAME(LifecycleMonitorInterface)
@protocol MBXLifecycleMonitorInterface
- (void)getLifecycleStateForCallback:(nonnull MBXGetLifecycleStateCallback)callback;
- (void)getMonitoringStateForCallback:(nonnull MBXGetLifecycleMonitoringStateCallback)callback;
- (void)registerObserverForObserver:(nonnull id<MBXLifecycleObserver>)observer;
- (void)unregisterObserverForObserver:(nonnull id<MBXLifecycleObserver>)observer;
@end
