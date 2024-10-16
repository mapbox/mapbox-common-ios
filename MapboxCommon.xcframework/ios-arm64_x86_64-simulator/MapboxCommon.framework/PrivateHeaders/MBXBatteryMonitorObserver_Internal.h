// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(BatteryMonitorObserver)
@protocol MBXBatteryMonitorObserver
- (void)onBatteryChargingStatusChangedForIsCharging:(BOOL)isCharging;
- (void)onBatteryStatusErrorForError:(nonnull NSString *)error;
@end
