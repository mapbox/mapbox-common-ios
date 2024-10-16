// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXResourceLoadErrorType_Internal.h>

NS_SWIFT_NAME(ResourceLoadError)
__attribute__((visibility ("default")))
@interface MBXResourceLoadError : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithType:(MBXResourceLoadErrorType)type
                             message:(nonnull NSString *)message
                    transferredBytes:(uint64_t)transferredBytes;

@property (nonatomic, readonly) MBXResourceLoadErrorType type;
@property (nonatomic, readonly, nonnull, copy) NSString *message;
@property (nonatomic, readonly) uint64_t transferredBytes;

@end
