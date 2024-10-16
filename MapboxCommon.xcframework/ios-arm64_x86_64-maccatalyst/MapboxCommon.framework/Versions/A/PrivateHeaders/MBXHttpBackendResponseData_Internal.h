// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@protocol MBXReadStream;

NS_SWIFT_NAME(ResponseData)
__attribute__((visibility ("default")))
@interface MBXHttpBackendResponseData : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithHeaders:(nonnull NSDictionary<NSString *, NSString *> *)headers
                                   code:(int32_t)code
                             dataStream:(nonnull id<MBXReadStream>)dataStream;

@property (nonatomic, readonly, nonnull, copy) NSDictionary<NSString *, NSString *> *headers;
@property (nonatomic, readonly) int32_t code;
@property (nonatomic, readonly, nonnull) id<MBXReadStream> dataStream;

@end
