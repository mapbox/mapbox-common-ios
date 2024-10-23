// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXFlushOperationResultCallback_Internal.h>

NS_SWIFT_NAME(TelemetryService)
__attribute__((visibility ("default")))
@interface MBXTelemetryService : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

+ (nonnull MBXTelemetryService *)getOrCreate __attribute((ns_returns_retained));
- (void)flushForCallback:(nullable MBXFlushOperationResultCallback)callback;

@end
