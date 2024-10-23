// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Accuracy authorization granted by user to the app. */
// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBXAccuracyAuthorization)
{
    /**  An app is not authorized to access location. */
    MBXAccuracyAuthorizationNone,
    /** An app is authorized to received as precise as possible location. */
    MBXAccuracyAuthorizationExact,
    /**
     * An app is authorized to receive rough location only.
     *
     * Depends on a platform the accuracy is within a city block.
     */
    MBXAccuracyAuthorizationInexact
} NS_SWIFT_NAME(AccuracyAuthorization);

NSString* MBXAccuracyAuthorizationToString(MBXAccuracyAuthorization accuracy_authorization);
