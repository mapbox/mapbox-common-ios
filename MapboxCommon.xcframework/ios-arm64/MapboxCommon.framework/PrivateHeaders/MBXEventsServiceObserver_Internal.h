// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBXEventsServiceError;

NS_SWIFT_NAME(EventsServiceObserver)
@protocol MBXEventsServiceObserver
- (void)didEncounterErrorForError:(nonnull MBXEventsServiceError *)error
                           events:(nonnull id)events;
- (void)didSendEventsForEvents:(nonnull id)events;
@end
