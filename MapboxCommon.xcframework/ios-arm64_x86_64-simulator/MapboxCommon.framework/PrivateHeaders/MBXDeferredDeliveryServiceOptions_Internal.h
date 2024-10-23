// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXDeferredDeliveryOverflowPolicy_Internal.h>

NS_SWIFT_NAME(DeferredDeliveryServiceOptions)
__attribute__((visibility ("default")))
@interface MBXDeferredDeliveryServiceOptions : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithBatchLengthToFlush:(uint64_t)batchLengthToFlush
                                 batchFlushTimeout:(uint64_t)batchFlushTimeout
                              memoryQueueMaxLength:(nullable NSNumber *)memoryQueueMaxLength
                          memoryQueueLengthToFlush:(uint64_t)memoryQueueLengthToFlush
                           memoryQueueFlushTimeout:(uint64_t)memoryQueueFlushTimeout
                         memoryQueueOverflowPolicy:(MBXDeferredDeliveryOverflowPolicy)memoryQueueOverflowPolicy
                          persistentQueueMaxLength:(nullable NSNumber *)persistentQueueMaxLength
                      persistentQueueLengthToFlush:(uint64_t)persistentQueueLengthToFlush
                       persistentQueueFlushTimeout:(uint64_t)persistentQueueFlushTimeout
                     persistentQueueOverflowPolicy:(MBXDeferredDeliveryOverflowPolicy)persistentQueueOverflowPolicy
                                   dataStoragePath:(nullable NSString *)dataStoragePath
                                   maxStorageUsage:(nullable NSNumber *)maxStorageUsage
                             storageOverflowPolicy:(MBXDeferredDeliveryOverflowPolicy)storageOverflowPolicy;

@property (nonatomic, readonly) uint64_t batchLengthToFlush;
@property (nonatomic, readonly) uint64_t batchFlushTimeout;
@property (nonatomic, readonly, nullable) NSNumber *memoryQueueMaxLength;
@property (nonatomic, readonly) uint64_t memoryQueueLengthToFlush;
@property (nonatomic, readonly) uint64_t memoryQueueFlushTimeout;
@property (nonatomic, readonly) MBXDeferredDeliveryOverflowPolicy memoryQueueOverflowPolicy;
@property (nonatomic, readonly, nullable) NSNumber *persistentQueueMaxLength;
@property (nonatomic, readonly) uint64_t persistentQueueLengthToFlush;
@property (nonatomic, readonly) uint64_t persistentQueueFlushTimeout;
@property (nonatomic, readonly) MBXDeferredDeliveryOverflowPolicy persistentQueueOverflowPolicy;
@property (nonatomic, readonly, nullable, copy) NSString *dataStoragePath;
@property (nonatomic, readonly, nullable) NSNumber *maxStorageUsage;
@property (nonatomic, readonly) MBXDeferredDeliveryOverflowPolicy storageOverflowPolicy;

- (BOOL)isEqualToDeferredDeliveryServiceOptions:(nonnull MBXDeferredDeliveryServiceOptions *)other;

@end
