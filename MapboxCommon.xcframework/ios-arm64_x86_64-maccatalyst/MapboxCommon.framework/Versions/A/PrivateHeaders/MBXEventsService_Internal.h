// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXEventsServiceResponseCallback_Internal.h>
#import <MapboxCommon/MBXFlushOperationResultCallback_Internal.h>

@class MBXCrashEvent;
@class MBXEvent;
@class MBXEventsServerOptions;
@class MBXTurnstileEvent;
@protocol MBXEventsServiceObserver;

NS_SWIFT_NAME(EventsService)
__attribute__((visibility ("default")))
@interface MBXEventsService : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

+ (nonnull MBXEventsService *)getOrCreateForOptions:(nonnull MBXEventsServerOptions *)options __attribute((ns_returns_retained));
- (void)registerObserverForObserver:(nonnull id<MBXEventsServiceObserver>)observer;
- (void)unregisterObserverForObserver:(nonnull id<MBXEventsServiceObserver>)observer;
- (void)sendTurnstileEventForTurnstileEvent:(nonnull MBXTurnstileEvent *)turnstileEvent
                                   callback:(nullable MBXEventsServiceResponseCallback)callback;
- (void)sendCrashEventForCrashEvent:(nonnull MBXCrashEvent *)crashEvent
                           callback:(nullable MBXEventsServiceResponseCallback)callback;
- (void)sendEventForEvent:(nonnull MBXEvent *)event
                 callback:(nullable MBXEventsServiceResponseCallback)callback;
- (void)flushForCallback:(nullable MBXFlushOperationResultCallback)callback;

@end
