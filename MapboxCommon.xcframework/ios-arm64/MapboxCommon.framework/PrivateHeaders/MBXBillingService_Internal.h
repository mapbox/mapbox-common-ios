// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXBillingSessionStatus_Internal.h>
#import <MapboxCommon/MBXMaploadSKUIdentifier_Internal.h>
#import <MapboxCommon/MBXOnBillingServiceError_Internal.h>
#import <MapboxCommon/MBXSessionSKUIdentifier_Internal.h>
#import <MapboxCommon/MBXUserSKUIdentifier_Internal.h>

@class MBXSdkInformation;

NS_SWIFT_NAME(BillingService)
__attribute__((visibility ("default")))
@interface MBXBillingService : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (void)triggerUserBillingEventForSdkInformation:(nonnull MBXSdkInformation *)sdkInformation
                                   skuIdentifier:(MBXUserSKUIdentifier)skuIdentifier
                                        callback:(nonnull MBXOnBillingServiceError)callback;
- (void)triggerMaploadBillingEventForSkuIdentifier:(MBXMaploadSKUIdentifier)skuIdentifier
                                          callback:(nonnull MBXOnBillingServiceError)callback;
- (void)beginBillingSessionForSdkInformation:(nonnull MBXSdkInformation *)sdkInformation
                               skuIdentifier:(MBXSessionSKUIdentifier)skuIdentifier
                                    callback:(nonnull MBXOnBillingServiceError)callback
                                    validity:(NSTimeInterval)validity;
- (void)pauseBillingSessionForSkuIdentifier:(MBXSessionSKUIdentifier)skuIdentifier;
- (void)resumeBillingSessionForSkuIdentifier:(MBXSessionSKUIdentifier)skuIdentifier
                                    callback:(nonnull MBXOnBillingServiceError)callback;
- (void)stopBillingSessionForSkuIdentifier:(MBXSessionSKUIdentifier)skuIdentifier;
- (MBXBillingSessionStatus)getSessionStatusForSkuIdentifier:(MBXSessionSKUIdentifier)skuIdentifier;
- (nonnull NSString *)getSessionSKUTokenIfValidForSkuIdentifier:(MBXSessionSKUIdentifier)skuIdentifier __attribute((ns_returns_retained));
- (nonnull NSString *)getUserSKUTokenForSkuIdentifier:(MBXUserSKUIdentifier)skuIdentifier __attribute((ns_returns_retained));

@end
