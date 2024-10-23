// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBXMovementModeProvider)
{
    /** The movement type is provided by the system. */
    MBXMovementModeProviderSystem,
    /** The movement mode has been set manually by our SDKs. */
    MBXMovementModeProviderSDK,
    /** The movement provider is unknown */
    MBXMovementModeProviderUnknown
} NS_SWIFT_NAME(MovementModeProvider);

NSString* MBXMovementModeProviderToString(MBXMovementModeProvider movement_mode_provider);
