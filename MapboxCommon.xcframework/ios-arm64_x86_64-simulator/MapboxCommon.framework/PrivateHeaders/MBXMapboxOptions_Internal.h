// This file is generated and will be overwritten automatically.

#import <MapboxCommon/MBXMapboxOptions.h>

@interface MBXMapboxOptions ()
+ (void)setStagingAccessTokenForToken:(nonnull NSString *)token;
+ (void)setUseStagingForService:(nonnull NSString *)service
                     useStating:(BOOL)useStating;
+ (nonnull NSString *)getTokenForServiceForService:(nonnull NSString *)service __attribute((ns_returns_retained));
@end
