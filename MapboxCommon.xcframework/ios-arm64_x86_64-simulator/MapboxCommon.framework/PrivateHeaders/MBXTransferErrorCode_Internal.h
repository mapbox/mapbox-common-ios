// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBXTransferErrorCode)
{
    /** General filesystem related error code. For cases like: write error, no such file or directory, not enough space and etc. */
    MBXTransferErrorCodeFileSystemError,
    /** General network related error. Should be probably representation of HttpRequestError. */
    MBXTransferErrorCodeNetworkError
} NS_SWIFT_NAME(TransferErrorCode);

NSString* MBXTransferErrorCodeToString(MBXTransferErrorCode transfer_error_code);
