// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXHttpMethod.h>
#import <MapboxCommon/MBXNetworkRestriction.h>

@protocol MBXReadStream;

NS_SWIFT_NAME(Request)
__attribute__((visibility ("default")))
@interface MBXHttpBackendRequest : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithMethod:(MBXHttpMethod)method
                                   url:(nonnull NSString *)url
                               headers:(nonnull NSDictionary<NSString *, NSString *> *)headers
                               timeout:(uint64_t)timeout
                    networkRestriction:(MBXNetworkRestriction)networkRestriction
                                  body:(nullable id<MBXReadStream>)body
                                 flags:(uint32_t)flags;

/** HTTP request method. See HttpRequest for details. */
@property (nonatomic, readwrite) MBXHttpMethod method;

@property (nonatomic, readonly, nonnull, copy) NSString *url;
@property (nonatomic, readwrite, nonnull, copy) NSDictionary<NSString *, NSString *> *headers;
@property (nonatomic, readonly) uint64_t timeout;
@property (nonatomic, readonly) MBXNetworkRestriction networkRestriction;
@property (nonatomic, readonly, nullable) id<MBXReadStream> body;
@property (nonatomic, readonly) uint32_t flags;

@end
