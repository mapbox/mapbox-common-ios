// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXExperimentalAddFeatureCallback_Internal.h>
#import <MapboxCommon/MBXExperimentalAddObserverCallback_Internal.h>
#import <MapboxCommon/MBXExperimentalClearFeaturesCallback_Internal.h>
#import <MapboxCommon/MBXExperimentalConfigureCallback_Internal.h>
#import <MapboxCommon/MBXExperimentalGetFeatureCallback_Internal.h>
#import <MapboxCommon/MBXExperimentalGetOptionsCallback_Internal.h>
#import <MapboxCommon/MBXExperimentalRemoveFeatureCallback_Internal.h>
#import <MapboxCommon/MBXExperimentalRemoveObserverCallback_Internal.h>
@class MBXFeature;

@class MBXExperimentalGeofencingOptions;
@protocol MBXExperimentalGeofencingObserver;

NS_SWIFT_NAME(__GeofencingService)
@protocol MBXExperimentalGeofencingService
- (void)configureForOptions:(nonnull MBXExperimentalGeofencingOptions *)options
                   callback:(nonnull MBXExperimentalConfigureCallback)callback
__attribute__((swift_name("configure(options:callback:)")));
- (void)getOptionsForCallback:(nonnull MBXExperimentalGetOptionsCallback)callback
__attribute__((swift_name("getOptions(callback:)")));
- (void)addFeatureForFeature:(nonnull MBXFeature *)feature
                    callback:(nonnull MBXExperimentalAddFeatureCallback)callback
__attribute__((swift_name("addFeature(feature:callback:)")));
- (void)getFeatureForIdentifier:(nonnull NSString *)identifier
                       callback:(nonnull MBXExperimentalGetFeatureCallback)callback
__attribute__((swift_name("getFeature(identifier:callback:)")));
- (void)removeFeatureForIdentifier:(nonnull NSString *)identifier
                          callback:(nonnull MBXExperimentalRemoveFeatureCallback)callback
__attribute__((swift_name("removeFeature(identifier:callback:)")));
- (void)clearFeaturesForCallback:(nonnull MBXExperimentalClearFeaturesCallback)callback
__attribute__((swift_name("clearFeatures(callback:)")));
- (void)addObserverForObserver:(nonnull id<MBXExperimentalGeofencingObserver>)observer
                      callback:(nonnull MBXExperimentalAddObserverCallback)callback
__attribute__((swift_name("addObserver(observer:callback:)")));
- (void)removeObserverForObserver:(nonnull id<MBXExperimentalGeofencingObserver>)observer
                         callback:(nonnull MBXExperimentalRemoveObserverCallback)callback
__attribute__((swift_name("removeObserver(observer:callback:)")));
@end
