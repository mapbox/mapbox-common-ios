// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBXLocation;
@protocol MBXLocationObserver;

/** Location provider that provides locations */
NS_SWIFT_NAME(LocationProvider)
@protocol MBXLocationProvider
/**
 * Registers an observer in this instance of LocationProvider.
 * One instance of LocationProvider can have more than one observer.
 * It is expected that LocationProvider will not start until an
 * observer is added.
 *
 * @param observer An observer to add.
 */
- (void)addLocationObserverForObserver:(nonnull id<MBXLocationObserver>)observer;
/**
 * Removes the observer from this instance of LocationProvider. If the observer
 * is not registered, this is no-op.
 * It is expected that if there are no observers, the LocationProvider
 * will stop automatically.
 *
 * @param observer An observer to remove.
 */
- (void)removeLocationObserverForObserver:(nonnull id<MBXLocationObserver>)observer;
/**
 * Gets the last observed location.
 * @return A single location or null if no location has been observed.
 */
- (nullable MBXLocation *)getLastObservedLocation;
@end
