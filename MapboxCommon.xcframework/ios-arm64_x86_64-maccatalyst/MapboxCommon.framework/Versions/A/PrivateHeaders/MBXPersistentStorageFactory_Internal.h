// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
@class MBXExpected<__covariant Value, __covariant Error>;

@class MBXPersistentStorageError;
@protocol MBXPersistentStorageInterface;

NS_SWIFT_NAME(PersistentStorageFactory)
__attribute__((visibility ("default")))
@interface MBXPersistentStorageFactory : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

+ (nonnull MBXExpected<id<MBXPersistentStorageInterface>, MBXPersistentStorageError *> *)getOrCreateByKeyForKey:(nonnull NSString *)key __attribute((ns_returns_retained));
+ (nonnull MBXExpected<id<MBXPersistentStorageInterface>, MBXPersistentStorageError *> *)getOrCreateByFileForFilePath:(nonnull NSString *)filePath __attribute((ns_returns_retained));

@end
