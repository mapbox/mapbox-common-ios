// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@protocol MBXExperimentalGeofencingService;

NS_SWIFT_NAME(__GeofencingFactory)
__attribute__((visibility ("default")))
@interface MBXExperimentalGeofencingFactory : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

+ (nonnull id<MBXExperimentalGeofencingService>)getOrCreate __attribute((ns_returns_retained))
__attribute__((swift_name("getOrCreate()")));
+ (void)reset
__attribute__((swift_name("reset()")));
+ (void)setUserDefinedForCustom:(nonnull id<MBXExperimentalGeofencingService>)custom
__attribute__((swift_name("setUserDefined(custom:)")));

@end
