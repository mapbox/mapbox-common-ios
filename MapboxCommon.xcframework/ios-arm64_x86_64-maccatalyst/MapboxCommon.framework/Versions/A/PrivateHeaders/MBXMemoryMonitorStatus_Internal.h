// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXMemoryMonitorState_Internal.h>

NS_SWIFT_NAME(MemoryMonitorStatus)
__attribute__((visibility ("default")))
@interface MBXMemoryMonitorStatus : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithState:(MBXMemoryMonitorState)state
                          totalMemory:(uint64_t)totalMemory
                           usedMemory:(uint64_t)usedMemory;

@property (nonatomic, readonly) MBXMemoryMonitorState state;
/**
 * Total available memory for the app in bytes.
 * For some platforms this value may be lower than real available memory
 * (for instance on Linux or Mac this returns RAM size and the app may consume more memory
 * when swap is used but for the purpose of Memory Monitoring we still would generate alert based on RAM size)
 */
@property (nonatomic, readonly) uint64_t totalMemory;

/** Memory used by the app in bytes */
@property (nonatomic, readonly) uint64_t usedMemory;


@end
