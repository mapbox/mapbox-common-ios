// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBXLocation;

/** Observer for getting updates from a LocationProvider. */
NS_SWIFT_NAME(LocationObserver)
@protocol MBXLocationObserver
/**
 * Report when location has changed.
 *
 * @param locations A batch of locations, ordered from oldest to newest, generated during the location updates interval.
 */
- (void)onLocationUpdateReceivedForLocations:(nonnull NSArray<MBXLocation *> *)locations;
@end
