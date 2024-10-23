// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXHttpRequestErrorType.h>

/** Record which contains detailed information about HTTP error happened during request/download call. */
NS_SWIFT_NAME(HttpRequestError)
__attribute__((visibility ("default")))
@interface MBXHttpRequestError : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithType:(MBXHttpRequestErrorType)type
                             message:(nonnull NSString *)message;

/** Error type. */
@property (nonatomic, readonly) MBXHttpRequestErrorType type;

/** Detailed description of the error. */
@property (nonatomic, readonly, nonnull, copy) NSString *message;


@end
