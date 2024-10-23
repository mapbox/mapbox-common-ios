// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Codes of location errors. */
// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBXLocationErrorCode)
{
    /** No error occured. */
    MBXLocationErrorCodeNone,
    /** Not ready for the requested operation. */
    MBXLocationErrorCodeNotReady,
    /** The subject of the request is not available. */
    MBXLocationErrorCodeNotAvailable,
    /** The app is not authorized to access location. */
    MBXLocationErrorCodeAccessDenied,
    /** Invalid argument. */
    MBXLocationErrorCodeInvalidArgument,
    /** Failed to detect location. */
    MBXLocationErrorCodeFailedToDetectLocation,
    /** Failed to communicate with the platform service. */
    MBXLocationErrorCodeCommunicationFailure,
    /** Operation was cancelled. */
    MBXLocationErrorCodeCancelled,
    /** Requested feature is not implemented or no supported by the device. */
    MBXLocationErrorCodeNotSupported,
    /** Reserved fallback for unclassified failures. */
    MBXLocationErrorCodeUnknown
} NS_SWIFT_NAME(LocationErrorCode);

NSString* MBXLocationErrorCodeToString(MBXLocationErrorCode location_error_code);
