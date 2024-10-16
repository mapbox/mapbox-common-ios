// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(NetworkUsageMetricsMeter)
__attribute__((visibility ("default")))
@interface MBXNetworkUsageMetricsMeter : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

+ (void)onBytesTransferredForUrl:(nonnull NSString *)url
                       bytesSent:(uint32_t)bytesSent
                   bytesReceived:(uint32_t)bytesReceived;

@end
