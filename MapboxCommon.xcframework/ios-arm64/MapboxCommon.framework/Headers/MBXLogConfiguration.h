// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXLoggingLevel.h>

@protocol MBXLogWriterBackend;

/** Class that allows to configure Mapbox SDKs logging per application. */
NS_SWIFT_NAME(LogConfiguration)
__attribute__((visibility ("default")))
@interface MBXLogConfiguration : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

/**
 * Sets the backend which writes the log.
 *
 * @param logWriter Backend which writes logs, if you provide null for this parameter then previously
 *                  used logger backend will be replaced with Mapbox default implementation.
 */
+ (void)registerLogWriterBackendForLogWriter:(nullable id<MBXLogWriterBackend>)logWriter;
/**
 * Sets the default logging level.
 *
 * The logging level for a specific category can be overridden
 * using the setLoggingLevel(category, upTo) overload.
 *
 * @param upTo Log messages with lower severity than this parameter will be filtered out. If
 *             the parameter is empty, all log messages are filtered out, i.e., logging is disabled.
 */
+ (void)setLoggingLevelForUpTo:(nullable NSNumber *)upTo;
/**
 * Return current default logging level.
 *
 * @return Current default logging level or nothing if logging is disabled.
 */
+ (nullable NSNumber *)getLoggingLevel __attribute((ns_returns_retained));
/**
 * Sets the logging level for provided category.
 * If set, takes precedence over the default logging level.
 *
 * @param category Category that should be used for applied configuration.
 * @param upTo Log messages for provided category and with lower severity than
 *             this parameter will be filtered out. If the parameter is empty,
 *             all log messages are filtered out, i.e., logging is disabled.
 */
+ (void)setLoggingLevelForCategory:(nonnull NSString *)category
                              upTo:(nullable NSNumber *)upTo;
/**
 * Return current logging level for category.
 *
 * @param category Category that can be used for filtering.
 * @return Configured logging level for category, or nothing if logging category is disabled.
 */
+ (nullable NSNumber *)getLoggingLevelForCategory:(nonnull NSString *)category __attribute((ns_returns_retained));
/**
 * Reset logging level for category to default logging level.
 *
 * @param category Category that can be used for filtering.
 */
+ (void)resetLoggingLevelForCategory:(nonnull NSString *)category;

@end
