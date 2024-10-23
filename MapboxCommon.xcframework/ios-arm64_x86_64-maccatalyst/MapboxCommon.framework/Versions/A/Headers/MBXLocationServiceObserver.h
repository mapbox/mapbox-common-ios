// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXAccuracyAuthorization.h>
#import <MapboxCommon/MBXPermissionStatus.h>

/** Observers for getting updates from LocationService. */
NS_SWIFT_NAME(LocationServiceObserver)
@protocol MBXLocationServiceObserver
/**
 * Called when an availability of location-based service on
 * the device has been changed. This happens when, for example,
 * a user disables geolocation on the device.
 *
 * @param isAvailable True if available, false if it's not.
 *
 */
- (void)onAvailabilityChangedForIsAvailable:(BOOL)isAvailable;
/**
 * Called when a user has granted or revoked location permission to the app.
 * Note that this does not work on Android because, in case of permission
 * changes, the system will kill all running processes of the app.
 *
 * @param permission Updated permission of the app.
 */
- (void)onPermissionStatusChangedForPermission:(MBXPermissionStatus)permission;
/**
 * Called when a user has changed accuracy authorization for the app.
 *
 * @param authorization Updated accuracy authorization of the app.
 */
- (void)onAccuracyAuthorizationChangedForAuthorization:(MBXAccuracyAuthorization)authorization;
@end
