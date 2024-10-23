// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBXMovementMode)
{
    /** The device is in a vehicle */
    MBXMovementModeInVehicle,
    /** The device is on a bike */
    MBXMovementModeCycling,
    /** The device is on a running person */
    MBXMovementModeRunning,
    /** The device is on a walking person */
    MBXMovementModeWalking,
    /** The device is on a person on foot */
    MBXMovementModeOnFoot,
    /** The device is stationary */
    MBXMovementModeStationary,
    /** Movement mode is unknown */
    MBXMovementModeUnknown
} NS_SWIFT_NAME(MovementMode);

NSString* MBXMovementModeToString(MBXMovementMode movement_mode);
