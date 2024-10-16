// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBXMemoryMonitorState)
{
    /**
     * No memory issues detected.
     * You should never receive notifications with this state
     */
    MBXMemoryMonitorStateOk,
    /**
     * This state is set when current memory usage is below the defined threshold
     *  but app is running in the background so unnecessary memory can be freed.
     * Alert with this state will be sent to observers each time app goes to background
     */
    MBXMemoryMonitorStateAppRunningInBackground,
    /**
     * This state is set when current memory usage of the app is above the defined threshold.
     * Alert with this state will be sent to observers with configurable delay until memory usage is reduced
     */
    MBXMemoryMonitorStateMemoryThresholdReached,
    /**
     * This state is never set but alert of this type will be sent when operating system sends memory warning to the application.
     * For instance, didReceiveMemoryWarningNotification on iOS.
     */
    MBXMemoryMonitorStateSystemMemoryWarningReceived
} NS_SWIFT_NAME(MemoryMonitorState);

NSString* MBXMemoryMonitorStateToString(MBXMemoryMonitorState memory_monitor_state);
