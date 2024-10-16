// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@protocol MBXMovementMonitorInterface;

NS_SWIFT_NAME(MovementMonitorFactory)
__attribute__((visibility ("default")))
@interface MBXMovementMonitorFactory : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

+ (nonnull id<MBXMovementMonitorInterface>)getOrCreate __attribute((ns_returns_retained));
/**
 * Releases the implementation of the MovementMonitor API.
 *
 * The strong reference from the factory to a custom implementation will be released. This can be
 * used to release the implementation once it is no longer needed. It may otherwise be kept until
 * the end of the program.
 */
+ (void)reset;
+ (void)setUserDefinedForCustom:(nonnull id<MBXMovementMonitorInterface>)custom;

@end
