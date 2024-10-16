// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBXConfigurationServiceErrorCode)
{
    MBXConfigurationServiceErrorCodeNoToken,
    MBXConfigurationServiceErrorCodeNoConfiguration,
    MBXConfigurationServiceErrorCodeHttpError,
    MBXConfigurationServiceErrorCodeMalformedConfiguration,
    MBXConfigurationServiceErrorCodeIOError,
    MBXConfigurationServiceErrorCodeUpdateInProgress,
    MBXConfigurationServiceErrorCodeUnexpectedHTTPResponseCode,
    MBXConfigurationServiceErrorCodeExpiredConfiguration
} NS_SWIFT_NAME(ConfigurationServiceErrorCode);

NSString* MBXConfigurationServiceErrorCodeToString(MBXConfigurationServiceErrorCode configuration_service_error_code);
