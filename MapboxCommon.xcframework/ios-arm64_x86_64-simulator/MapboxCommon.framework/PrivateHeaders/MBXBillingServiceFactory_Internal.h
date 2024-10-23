// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBXBillingService;

NS_SWIFT_NAME(BillingServiceFactory)
__attribute__((visibility ("default")))
@interface MBXBillingServiceFactory : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

+ (void)reset;
+ (nonnull MBXBillingService *)getInstance __attribute((ns_returns_retained));

@end
