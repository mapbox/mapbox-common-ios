// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXTransferState_Internal.h>
@class MBXExpected<__covariant Value, __covariant Error>;

@class MBXHttpRequestError;
@class MBXHttpResponseData;
@class MBXTransferError;

NS_SWIFT_NAME(UploadStatus)
__attribute__((visibility ("default")))
@interface MBXUploadStatus : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithUploadId:(uint64_t)uploadId
                                   state:(MBXTransferState)state
                                   error:(nullable MBXTransferError *)error
                              totalBytes:(nullable NSNumber *)totalBytes
                               sentBytes:(uint64_t)sentBytes
                          totalSentBytes:(uint64_t)totalSentBytes
                              httpResult:(nullable MBXExpected<MBXHttpResponseData *, MBXHttpRequestError *> *)httpResult;

@property (nonatomic, readwrite) uint64_t uploadId;
@property (nonatomic, readwrite) MBXTransferState state;
@property (nonatomic, readwrite, nullable) MBXTransferError *error;
@property (nonatomic, readwrite, nullable) NSNumber *totalBytes NS_REFINED_FOR_SWIFT;
@property (nonatomic, readwrite) uint64_t sentBytes;
@property (nonatomic, readwrite) uint64_t totalSentBytes;
@property (nonatomic, readwrite, nullable) MBXExpected<MBXHttpResponseData *, MBXHttpRequestError *> *httpResult NS_REFINED_FOR_SWIFT;

@end
