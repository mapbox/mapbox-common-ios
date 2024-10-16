// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBXNetworkStatus)
{
    MBXNetworkStatusNotReachable,
    MBXNetworkStatusReachableViaWiFi,
    MBXNetworkStatusReachableViaEthernet,
    MBXNetworkStatusReachableViaWWAN
} NS_SWIFT_NAME(NetworkStatus);

NSString* MBXNetworkStatusToString(MBXNetworkStatus network_status);
