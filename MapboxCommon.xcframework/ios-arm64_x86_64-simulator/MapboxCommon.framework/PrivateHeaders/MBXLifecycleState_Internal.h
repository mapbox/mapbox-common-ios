// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBXLifecycleState)
{
    /** Not available. */
    MBXLifecycleStateUnknown,
    /** The app is on the way to enter foreground */
    MBXLifecycleStateMovingForeground,
    /**
     * The app's UI is running in the foreground and it's at the top of the
     * screen that the user is currently interacting with.
     */
    MBXLifecycleStateForeground,
    /** The app is on the way to background */
    MBXLifecycleStateMovingBackground,
    /** The app's UI is not visible to the user. */
    MBXLifecycleStateBackground,
    /**
     * The app's UI is visible to the user, but it's out in the focus,
     * so it might not receive events.
     */
    MBXLifecycleStateInactive
} NS_SWIFT_NAME(LifecycleState);

NSString* MBXLifecycleStateToString(MBXLifecycleState lifecycle_state);
