// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXConfigurationServiceGetConfigCallback_Internal.h>

@class MBXEventsServerOptions;
@protocol MBXConfigurationServiceObserver;

NS_SWIFT_NAME(ConfigurationService)
__attribute__((visibility ("default")))
@interface MBXConfigurationService : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

+ (nonnull MBXConfigurationService *)getOrCreateForOptions:(nonnull MBXEventsServerOptions *)options __attribute((ns_returns_retained));
- (void)registerObserverForObserver:(nonnull id<MBXConfigurationServiceObserver>)observer;
- (void)unregisterObserverForObserver:(nonnull id<MBXConfigurationServiceObserver>)observer;
- (void)getConfigForCallback:(nonnull MBXConfigurationServiceGetConfigCallback)callback;

@end
