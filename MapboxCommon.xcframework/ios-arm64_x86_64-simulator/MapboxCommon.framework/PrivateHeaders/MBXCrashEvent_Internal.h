// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(CrashEvent)
__attribute__((visibility ("default")))
@interface MBXCrashEvent : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithIsSilent:(BOOL)isSilent
                           threadDetails:(nullable NSString *)threadDetails
                            appStartDate:(nullable NSString *)appStartDate
                              customData:(nullable NSDictionary<NSString *, NSString *> *)customData;

@property (nonatomic, readonly) BOOL isSilent;
@property (nonatomic, readonly, nullable, copy) NSString *threadDetails;
@property (nonatomic, readonly, nullable, copy) NSString *appStartDate;
@property (nonatomic, readonly, nullable, copy) NSDictionary<NSString *, NSString *> *customData;

@end
