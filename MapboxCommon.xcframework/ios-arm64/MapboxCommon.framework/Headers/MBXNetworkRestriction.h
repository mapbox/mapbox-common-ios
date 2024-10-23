// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Classify network types based on cost. */
// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBXNetworkRestriction)
{
    /** Allow access to all network types. */
    MBXNetworkRestrictionNone = 0,
    /** Forbid network access to expensive networks, such as cellular. */
    MBXNetworkRestrictionDisallowExpensive = 1,
    /** Forbid access to all network types. */
    MBXNetworkRestrictionDisallowAll = 255
} NS_SWIFT_NAME(NetworkRestriction);
