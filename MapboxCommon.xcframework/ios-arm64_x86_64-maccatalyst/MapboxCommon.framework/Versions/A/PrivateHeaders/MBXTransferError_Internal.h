// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXTransferErrorCode_Internal.h>

NS_SWIFT_NAME(TransferError)
__attribute__((visibility ("default")))
@interface MBXTransferError : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithCode:(MBXTransferErrorCode)code
                             message:(nonnull NSString *)message;

@property (nonatomic, readonly) MBXTransferErrorCode code;
/** Human readable string describing an error. */
@property (nonatomic, readonly, nonnull, copy) NSString *message;


@end
