// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBXSdkInfoRegistry;

NS_SWIFT_NAME(SdkInfoRegistryFactory)
__attribute__((visibility ("default")))
@interface MBXSdkInfoRegistryFactory : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

+ (nonnull MBXSdkInfoRegistry *)getInstance __attribute((ns_returns_retained));
+ (void)reset;

@end
