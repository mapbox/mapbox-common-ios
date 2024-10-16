#pragma once

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(NSExceptionHandler)
__attribute__((visibility ("default")))
@interface MBXExceptionHandler: NSObject
+ (void)tryWithCallback:(NS_NOESCAPE void (^ _Nonnull)(void))callback error:(NSError * _Nullable * _Nullable)error __attribute__((swift_error(nonnull_error))) NS_REFINED_FOR_SWIFT;
@end
