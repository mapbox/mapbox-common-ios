// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(Version)
__attribute__((visibility ("default")))
@interface MBXVersion : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

+ (uint32_t)getMajorVersion;
+ (uint32_t)getMinorVersion;
+ (uint32_t)getPatchVersion;
+ (nonnull NSString *)getCommonSDKVersionString __attribute((ns_returns_retained));
+ (nonnull NSString *)getCommonSDKRevisionString __attribute((ns_returns_retained));

@end
