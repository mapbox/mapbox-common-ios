// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBXHttpRequest;

NS_SWIFT_NAME(DownloadOptions)
__attribute__((visibility ("default")))
@interface MBXDownloadOptions : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithRequest:(nonnull MBXHttpRequest *)request
                              localPath:(nonnull NSString *)localPath;

- (nonnull instancetype)initWithRequest:(nonnull MBXHttpRequest *)request
                              localPath:(nonnull NSString *)localPath
                                 resume:(BOOL)resume
                        memoryThreshold:(uint32_t)memoryThreshold;

/**
 * Structure which contains parameters to use for sending HTTP request.
 * Http method will be ignored from this request.
 */
@property (nonatomic, readwrite, nonnull) MBXHttpRequest *request;

/**
 * Absolute path where to store downloaded file. If a file with the specified name already exists and resume is set to
 * false, the existing file is overwritten.
 */
@property (nonatomic, readonly, nonnull, copy) NSString *localPath;

/** If localPath points to an existing file on disk, resume the download starting from an offset equal to file size. */
@property (nonatomic, readwrite) BOOL resume;

/**
 * If the size of the response, in bytes, is at most this threshold, the data will be returned in memory via the
 * httpResult field of DownloadStatus instead of being written to disk.
 *
 * Note: since responses smaller than the threshold are not written to disk, it is not possible to resume them.
 * Conversely, if localPath points to an existing file and resume is true, the threshold is ignored and the response
 * is written to disk.
 */
@property (nonatomic, readonly) uint32_t memoryThreshold;


@end
