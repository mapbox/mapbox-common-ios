// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXResourceLoadStatus_Internal.h>

@class MBXResourceData;

NS_SWIFT_NAME(ResourceLoadResult)
__attribute__((visibility ("default")))
@interface MBXResourceLoadResult : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithData:(nullable MBXResourceData *)data
                              status:(MBXResourceLoadStatus)status
                           immutable:(BOOL)immutable
                      mustRevalidate:(BOOL)mustRevalidate
                             expires:(nonnull NSDate *)expires
                          totalBytes:(uint64_t)totalBytes
                    transferredBytes:(uint64_t)transferredBytes
                         contentType:(nonnull NSString *)contentType
                                etag:(nonnull NSString *)etag
                      belongsToGroup:(BOOL)belongsToGroup;

@property (nonatomic, readonly, nullable) MBXResourceData *data;
@property (nonatomic, readonly) MBXResourceLoadStatus status;
@property (nonatomic, readonly) BOOL immutable;
@property (nonatomic, readonly) BOOL mustRevalidate;
/** The expiration time of the file, if one exists. */
@property (nonatomic, readonly, nonnull) NSDate *expires;

@property (nonatomic, readonly) uint64_t totalBytes;
@property (nonatomic, readonly) uint64_t transferredBytes;
@property (nonatomic, readonly, nonnull, copy) NSString *contentType;
@property (nonatomic, readonly, nonnull, copy) NSString *etag;
@property (nonatomic, readonly) BOOL belongsToGroup;

@end
