// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXMovementInfoCallback_Internal.h>

@class MBXMovementInfo;
@protocol MBXMovementModeObserver;

NS_SWIFT_NAME(MovementMonitorInterface)
@protocol MBXMovementMonitorInterface
- (void)getMovementInfoForCallback:(nonnull MBXMovementInfoCallback)callback;
- (void)setMovementInfoForMode:(nonnull MBXMovementInfo *)mode;
- (void)registerObserverForObserver:(nonnull id<MBXMovementModeObserver>)observer;
- (void)unregisterObserverForObserver:(nonnull id<MBXMovementModeObserver>)observer;
@end
