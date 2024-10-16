// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBXHttpBackendResponseData;
@class MBXHttpRequestError;

NS_SWIFT_NAME(RequestObserver)
@protocol MBXHttpBackendRequestObserver
- (void)onResponseForId:(uint64_t)id_
                   data:(nonnull MBXHttpBackendResponseData *)data;
/** Called after the backend has written data to the data stream passed in onResponse. */
- (void)onDataForId:(uint64_t)id_;
/** Called once if the request completed successfully and all data has been written to the data stream. */
- (void)onSucceededForId:(uint64_t)id_;
/**
 * Called once if the request couldn't be completed. This method may be called at any point in the request's
 * lifetime prior to completion. I.e., it may be called after onResponse and after onData have been called.
 */
- (void)onFailedForId:(uint64_t)id_
                error:(nonnull MBXHttpRequestError *)error;
@end
