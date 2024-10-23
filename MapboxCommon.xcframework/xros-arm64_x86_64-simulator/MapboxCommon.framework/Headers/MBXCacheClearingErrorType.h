// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Describes the reason for a cache clearing failure. */
// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBXCacheClearingErrorType)
{
    /** There was an issue accessing the database */
    MBXCacheClearingErrorTypeDatabaseError,
    /** There was an uncategorised error, see description */
    MBXCacheClearingErrorTypeOtherError
} NS_SWIFT_NAME(CacheClearingErrorType);

NSString* MBXCacheClearingErrorTypeToString(MBXCacheClearingErrorType cache_clearing_error_type);
