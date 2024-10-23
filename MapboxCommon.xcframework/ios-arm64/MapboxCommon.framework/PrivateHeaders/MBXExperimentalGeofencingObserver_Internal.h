// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBXExperimentalGeofencingError;
@class MBXExperimentalGeofencingEvent;

NS_SWIFT_NAME(__GeofencingObserver)
@protocol MBXExperimentalGeofencingObserver
- (void)onEntryForEvent:(nonnull MBXExperimentalGeofencingEvent *)event
__attribute__((swift_name("onEntry(event:)")));
- (void)onDwellForEvent:(nonnull MBXExperimentalGeofencingEvent *)event
__attribute__((swift_name("onDwell(event:)")));
- (void)onExitForEvent:(nonnull MBXExperimentalGeofencingEvent *)event
__attribute__((swift_name("onExit(event:)")));
- (void)onErrorForError:(nonnull MBXExperimentalGeofencingError *)error
__attribute__((swift_name("onError(error:)")));
- (void)onUserConsentChangedForIsConsentGiven:(BOOL)isConsentGiven
__attribute__((swift_name("onUserConsentChanged(isConsentGiven:)")));
@end
