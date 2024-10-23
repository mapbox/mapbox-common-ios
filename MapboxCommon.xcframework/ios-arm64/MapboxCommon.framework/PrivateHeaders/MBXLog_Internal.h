// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(Log)
__attribute__((visibility ("default")))
@interface MBXLog : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

+ (void)debugForMessage:(nonnull NSString *)message
               category:(nullable NSString *)category;
+ (void)infoForMessage:(nonnull NSString *)message
              category:(nullable NSString *)category;
+ (void)warningForMessage:(nonnull NSString *)message
                 category:(nullable NSString *)category;
+ (void)errorForMessage:(nonnull NSString *)message
               category:(nullable NSString *)category;

@end
