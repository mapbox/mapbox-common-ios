// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXAccuracyAuthorization.h>
#import <MapboxCommon/MBXPermissionStatus.h>
@class MBXExpected<__covariant Value, __covariant Error>;

@class MBXLocationError;
@class MBXLocationProviderRequest;
@protocol MBXDeviceLocationProvider;
@protocol MBXDeviceLocationProviderFactory;
@protocol MBXLocationServiceObserver;

NS_SWIFT_NAME(LocationService)
@protocol MBXLocationService
/**
 * Check if the platform location service is available
 *
 * Returns true if the platform service is available and
 * false if it's not (for example when the device does not
 * have GNSS unit or has location service turned off).
 */
- (BOOL)isAvailable;
/** Gets a current status of location permission of the app. */
- (MBXPermissionStatus)getPermissionStatus;
/** Gets a current accuracy authorization of the app */
- (MBXAccuracyAuthorization)getAccuracyAuthorization;
/**
 * Registers an observer. LocationService can have more than one observer.
 *
 * @param observer An observer to add.
 */
- (void)registerObserverForObserver:(nonnull id<MBXLocationServiceObserver>)observer;
/**
 * Removes observer. If the observer is not registered, this is no-op.
 *
 * @param observer An observer to remove.
 */
- (void)unregisterObserverForObserver:(nonnull id<MBXLocationServiceObserver>)observer;
- (nonnull MBXExpected<id<MBXDeviceLocationProvider>, MBXLocationError *> *)getDeviceLocationProviderForRequest:(nullable MBXLocationProviderRequest *)request;
- (void)setUserDefinedDeviceLocationProviderFactoryForFactory:(nullable id<MBXDeviceLocationProviderFactory>)factory;
@end
