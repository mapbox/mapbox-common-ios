// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** State level of a log message. */
// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBXLoggingLevel)
{
    /** Verbose log data to understand how the code executes. */
    MBXLoggingLevelDebug,
    /** Normal application behavior. */
    MBXLoggingLevelInfo,
    /** To log a situation that might be a problem, or an unusual situation. */
    MBXLoggingLevelWarning,
    /** A log message providing information when a significant error occurred. */
    MBXLoggingLevelError
} NS_SWIFT_NAME(LoggingLevel);

NSString* MBXLoggingLevelToString(MBXLoggingLevel logging_level);
