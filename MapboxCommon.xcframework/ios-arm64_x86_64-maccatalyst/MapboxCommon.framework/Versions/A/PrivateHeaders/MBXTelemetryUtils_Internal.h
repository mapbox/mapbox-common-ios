// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXTelemetryCollectionState_Internal.h>
#import <MapboxCommon/MBXTelemetryUtilsResponseCallback_Internal.h>

@protocol MBXTelemetryCollectionStateObserver;

NS_SWIFT_NAME(TelemetryUtils)
__attribute__((visibility ("default")))
@interface MBXTelemetryUtils : NSObject

/** Returns TelemetryUtils to use for observers registration. */
- (nonnull instancetype)init;

+ (void)setEventsCollectionStateForEnableCollection:(BOOL)enableCollection
                                           callback:(nullable MBXTelemetryUtilsResponseCallback)callback;
+ (BOOL)getEventsCollectionState;
+ (MBXTelemetryCollectionState)getClientServerEventsCollectionState;
+ (nonnull NSString *)getUserID __attribute((ns_returns_retained));
- (void)registerTelemetryCollectionStateObserverForObserver:(nonnull id<MBXTelemetryCollectionStateObserver>)observer;
- (void)unregisterTelemetryCollectionStateObserverForObserver:(nonnull id<MBXTelemetryCollectionStateObserver>)observer;

@end
