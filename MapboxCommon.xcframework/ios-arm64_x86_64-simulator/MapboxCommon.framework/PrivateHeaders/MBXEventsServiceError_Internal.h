// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXEventsServiceErrorCode_Internal.h>

NS_SWIFT_NAME(EventsServiceError)
__attribute__((visibility ("default")))
@interface MBXEventsServiceError : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithCode:(MBXEventsServiceErrorCode)code
                             message:(nonnull NSString *)message;

@property (nonatomic, readonly) MBXEventsServiceErrorCode code;
@property (nonatomic, readonly, nonnull, copy) NSString *message;

@end
