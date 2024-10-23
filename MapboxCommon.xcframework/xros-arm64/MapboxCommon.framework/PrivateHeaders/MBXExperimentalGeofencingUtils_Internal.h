// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXExperimentalGeofencingUtilsUserConsentResponseCallback_Internal.h>

NS_SWIFT_NAME(__GeofencingUtils)
__attribute__((visibility ("default")))
@interface MBXExperimentalGeofencingUtils : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

+ (void)setUserConsentForIsConsentGiven:(BOOL)isConsentGiven
                               callback:(nonnull MBXExperimentalGeofencingUtilsUserConsentResponseCallback)callback
__attribute__((swift_name("setUserConsent(isConsentGiven:callback:)")));
+ (BOOL)getUserConsent
__attribute__((swift_name("getUserConsent()")));
+ (BOOL)isActive
__attribute__((swift_name("isActive()")));

@end
