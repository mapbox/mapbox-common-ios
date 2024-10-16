#import <CoreLocation/CoreLocation.h>
#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXLocation.h>

@interface MBXLocation (Additions)
- (nonnull instancetype)initWithCLLocation:(CLLocation * _Nonnull) location;
- (nonnull instancetype)initWithCLLocation:(CLLocation * _Nonnull) location
                                     extra:(id _Nullable)extra;
@end
