// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBXSdkInformation;

NS_SWIFT_NAME(SdkInfoRegistry)
__attribute__((visibility ("default")))
@interface MBXSdkInfoRegistry : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (void)registerSdkInformationForInfo:(nonnull MBXSdkInformation *)info;
- (nonnull NSArray<MBXSdkInformation *> *)getSdkInformation __attribute((ns_returns_retained));

@end
