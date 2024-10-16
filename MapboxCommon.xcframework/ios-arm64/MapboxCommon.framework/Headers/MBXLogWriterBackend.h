// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXLoggingLevel.h>

/** Interface for implementing log writing backends, e.g. for using platform specific log backends or logging to a notification service. */
NS_SWIFT_NAME(LogWriterBackend)
@protocol MBXLogWriterBackend
/**
 * Writes a log message with a given level.
 *
 * @param level Severity of the message.
 * @param message Log message
 */
- (void)writeLogForLevel:(MBXLoggingLevel)level
                 message:(nonnull NSString *)message;
@end
