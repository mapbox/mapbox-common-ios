// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@protocol MBXReadStream;

NS_SWIFT_NAME(PlatformStreamFactory)
__attribute__((visibility ("default")))
@interface MBXPlatformStreamFactory : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

+ (nonnull id<MBXReadStream>)memoryReadStreamForStr:(nonnull NSString *)str __attribute((ns_returns_retained));
+ (nonnull id<MBXReadStream>)fileReadStreamForPath:(nonnull NSString *)path __attribute((ns_returns_retained));

@end
