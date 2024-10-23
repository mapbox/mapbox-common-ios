// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXLocationErrorCode.h>

/** Error code with brief explanation. */
NS_SWIFT_NAME(LocationError)
__attribute__((visibility ("default")))
@interface MBXLocationError : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithCode:(MBXLocationErrorCode)code
                             message:(nonnull NSString *)message;

/** The code of the error. */
@property (nonatomic, readonly) MBXLocationErrorCode code;

/** Brief description of the error. */
@property (nonatomic, readonly, nonnull, copy) NSString *message;


@end
