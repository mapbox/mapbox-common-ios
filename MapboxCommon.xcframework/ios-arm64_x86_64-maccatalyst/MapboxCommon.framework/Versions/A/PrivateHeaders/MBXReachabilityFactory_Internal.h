// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@protocol MBXReachabilityInterface;

NS_SWIFT_NAME(ReachabilityFactory)
__attribute__((visibility ("default")))
@interface MBXReachabilityFactory : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

+ (void)reset;
+ (nonnull id<MBXReachabilityInterface>)reachabilityForHostname:(nullable NSString *)hostname __attribute((ns_returns_retained));

@end
