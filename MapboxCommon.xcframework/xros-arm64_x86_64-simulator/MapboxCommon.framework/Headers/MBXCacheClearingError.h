// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXCacheClearingErrorType.h>

/** Describes a cache clearing error. */
NS_SWIFT_NAME(CacheClearingError)
__attribute__((visibility ("default")))
@interface MBXCacheClearingError : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithType:(MBXCacheClearingErrorType)type
                             message:(nonnull NSString *)message;

/** The reason for the response error. */
@property (nonatomic, readonly) MBXCacheClearingErrorType type;

/** An error message */
@property (nonatomic, readonly, nonnull, copy) NSString *message;


@end
