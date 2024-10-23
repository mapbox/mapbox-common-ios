// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXBatteryChargingStatusCallback_Internal.h>

@protocol MBXBatteryMonitorObserver;

NS_SWIFT_NAME(BatteryMonitorInterface)
@protocol MBXBatteryMonitorInterface
- (void)getBatteryChargingStatusForCallback:(nonnull MBXBatteryChargingStatusCallback)callback;
- (void)registerObserverForObserver:(nonnull id<MBXBatteryMonitorObserver>)observer;
- (void)unregisterObserverForObserver:(nonnull id<MBXBatteryMonitorObserver>)observer;
@end
