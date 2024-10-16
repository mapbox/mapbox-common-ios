// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXBillingServiceErrorCode_Internal.h>

NS_SWIFT_NAME(BillingServiceError)
__attribute__((visibility ("default")))
@interface MBXBillingServiceError : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithCode:(MBXBillingServiceErrorCode)code
                             message:(nonnull NSString *)message;

@property (nonatomic, readonly) MBXBillingServiceErrorCode code;
@property (nonatomic, readonly, nonnull, copy) NSString *message;

@end
