// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(MemoryMonitorObserverConfig)
__attribute__((visibility ("default")))
@interface MBXMemoryMonitorObserverConfig : NSObject

- (nonnull instancetype)init;

- (nonnull instancetype)initWithSendAppRunningInBackgroundNotification:(BOOL)sendAppRunningInBackgroundNotification
                                         maxUsedMemoryPercentThreshold:(uint64_t)maxUsedMemoryPercentThreshold
                                                maxUsedMemoryThreshold:(uint64_t)maxUsedMemoryThreshold
                                   thresholdReachedNotificationTimeout:(NSTimeInterval)thresholdReachedNotificationTimeout;

/**
 * Defines if you want to receive notifications with state AppRunningInBackground or not.
 * You may opt out from it if you have nothing to free on going to background.
 * By default this notification is sent
 */
@property (nonatomic, readonly) BOOL sendAppRunningInBackgroundNotification;

/**
 * Send MemoryThresholdReached notification when used memory percent is bigger than this threshold.
 * Used memory percent is calculated as 100*usedMemory/totalMemory.
 * This value can be 0 to disable this notification.
 *
 * By default notifications are sent when 75% of available memory is used.
 */
@property (nonatomic, readonly) uint64_t maxUsedMemoryPercentThreshold;

/**
 * Send MemoryThresholdReached notification when used memory is bigger than this threshold in bytes.
 *
 * By default this is disabled (maxUsedMemoryThreshold == 0)
 */
@property (nonatomic, readonly) uint64_t maxUsedMemoryThreshold;

/**
 * MemoryMonitor may detect often that it needs to send notification of type MemoryThresholdReached.
 * This timeout allows to configure how often you should get such notifications.
 *
 * By default it is sent not more often than once in 5 minutes.
 * Note: minimum timeout is 1 minute.
 */
@property (nonatomic, readonly) NSTimeInterval thresholdReachedNotificationTimeout;


@end
