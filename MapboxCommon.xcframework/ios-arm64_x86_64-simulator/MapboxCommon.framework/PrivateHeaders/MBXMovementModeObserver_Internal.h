// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBXMovementInfo;

NS_SWIFT_NAME(MovementModeObserver)
@protocol MBXMovementModeObserver
- (void)onMovementModeChangedForMovementInfo:(nonnull MBXMovementInfo *)movementInfo;
- (void)onMovementModeErrorForError:(nonnull NSString *)error;
@end
