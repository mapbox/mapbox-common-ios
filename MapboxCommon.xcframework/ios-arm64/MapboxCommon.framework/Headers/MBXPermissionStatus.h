// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Location permissions granted by user to the app. */
// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBXPermissionStatus)
{
    /** Access to location is not allowed. */
    MBXPermissionStatusDenied,
    /**
     * Access to location is allowed.
     *
     * This type of permission is defined for platforms that
     * do not have foreground/background access granularity.
     */
    MBXPermissionStatusGranted,
    /** Access to location is allowed only while an app is in use. */
    MBXPermissionStatusForeground,
    /** Access to location is allowed all the time. */
    MBXPermissionStatusBackground
} NS_SWIFT_NAME(PermissionStatus);

NSString* MBXPermissionStatusToString(MBXPermissionStatus permission_status);
