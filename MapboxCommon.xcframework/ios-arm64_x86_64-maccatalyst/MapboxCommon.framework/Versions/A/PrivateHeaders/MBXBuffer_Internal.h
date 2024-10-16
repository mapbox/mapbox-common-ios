// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
@class MBXDataRef;

NS_SWIFT_NAME(Buffer)
__attribute__((visibility ("default")))
@interface MBXBuffer : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithBytes:(uint64_t)bytes
                                 size:(uint64_t)size;

- (uint64_t)getBytes;
- (uint64_t)getSize;

@end
