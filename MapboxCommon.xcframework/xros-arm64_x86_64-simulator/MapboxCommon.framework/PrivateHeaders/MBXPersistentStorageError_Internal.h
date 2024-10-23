// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXPersistentStorageErrorCode_Internal.h>

NS_SWIFT_NAME(PersistentStorageError)
__attribute__((visibility ("default")))
@interface MBXPersistentStorageError : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithCode:(MBXPersistentStorageErrorCode)code
                             message:(nonnull NSString *)message;

@property (nonatomic, readonly) MBXPersistentStorageErrorCode code;
/** Message describing what went wrong. */
@property (nonatomic, readonly, nonnull, copy) NSString *message;


@end
