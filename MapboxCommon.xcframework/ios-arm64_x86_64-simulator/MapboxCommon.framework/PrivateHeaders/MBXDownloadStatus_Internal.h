// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXTransferState_Internal.h>
@class MBXExpected<__covariant Value, __covariant Error>;

@class MBXDownloadOptions;
@class MBXHttpRequestError;
@class MBXHttpResponseData;
@class MBXTransferError;

NS_SWIFT_NAME(DownloadStatus)
__attribute__((visibility ("default")))
@interface MBXDownloadStatus : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithDownloadId:(uint64_t)downloadId
                                     state:(MBXTransferState)state
                                     error:(nullable MBXTransferError *)error
                                totalBytes:(nullable NSNumber *)totalBytes
                             receivedBytes:(uint64_t)receivedBytes
                          transferredBytes:(uint64_t)transferredBytes
                           downloadOptions:(nonnull MBXDownloadOptions *)downloadOptions
                                httpResult:(nullable MBXExpected<MBXHttpResponseData *, MBXHttpRequestError *> *)httpResult;

@property (nonatomic, readwrite) uint64_t downloadId;
@property (nonatomic, readwrite) MBXTransferState state;
@property (nonatomic, readwrite, nullable) MBXTransferError *error;
@property (nonatomic, readwrite, nullable) NSNumber *totalBytes NS_REFINED_FOR_SWIFT;
@property (nonatomic, readwrite) uint64_t receivedBytes;
@property (nonatomic, readwrite) uint64_t transferredBytes;
@property (nonatomic, readwrite, nonnull) MBXDownloadOptions *downloadOptions;
@property (nonatomic, readwrite, nullable) MBXExpected<MBXHttpResponseData *, MBXHttpRequestError *> *httpResult NS_REFINED_FOR_SWIFT;

@end
