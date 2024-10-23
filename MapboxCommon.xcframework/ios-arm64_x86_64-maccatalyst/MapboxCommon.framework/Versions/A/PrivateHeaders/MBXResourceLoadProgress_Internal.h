// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(ResourceLoadProgress)
__attribute__((visibility ("default")))
@interface MBXResourceLoadProgress : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithBytes:(uint64_t)bytes
                           totalBytes:(nullable NSNumber *)totalBytes;

@property (nonatomic, readonly) uint64_t bytes;
@property (nonatomic, readonly, nullable) NSNumber *totalBytes;

@end
