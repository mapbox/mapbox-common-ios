// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/**
 * Allows to cancel the associated asynchronous operation
 *
 * The associated asynchronous operation is not automatically canceled if this
 * object goes out of scope.
 */
NS_SWIFT_NAME(Cancelable)
@protocol MBXCancelable
/**
 * Cancels the associated asynchronous operation
 *
 * If the associated asynchronous operation has already finished, this call is ignored.
 */
- (void)cancel;
@end
