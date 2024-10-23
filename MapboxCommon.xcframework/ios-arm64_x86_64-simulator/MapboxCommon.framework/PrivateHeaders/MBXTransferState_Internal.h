// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBXTransferState)
{
    /** Transfer session initiated but not started yet. */
    MBXTransferStatePending,
    /** Transfer session is in progress. */
    MBXTransferStateInProgress,
    /** Transfer session failed. */
    MBXTransferStateFailed,
    /** Transfer session successfully finished. */
    MBXTransferStateFinished
} NS_SWIFT_NAME(TransferState);
