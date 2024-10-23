// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
@class MBXDataRef;
@class MBXExpected<__covariant Value, __covariant Error>;

@class MBXPersistentStorageData;
@class MBXPersistentStorageError;
@class MBXPersistentStorageKeyValue;

NS_SWIFT_NAME(PersistentStorageInterface)
@protocol MBXPersistentStorageInterface
- (nonnull MBXExpected<NSDate *, MBXPersistentStorageError *> *)putForKey:(nonnull NSString *)key
                                                                    value:(nonnull MBXDataRef *)value;
- (nonnull MBXExpected<NSDate *, MBXPersistentStorageError *> *)putMultiForKeyValues:(nonnull NSArray<MBXPersistentStorageKeyValue *> *)keyValues;
- (nonnull MBXExpected<MBXPersistentStorageData *, MBXPersistentStorageError *> *)getForKey:(nonnull NSString *)key;
- (nonnull MBXExpected<NSArray<MBXPersistentStorageData *> *, MBXPersistentStorageError *> *)getMultiForKeys:(nonnull NSArray<NSString *> *)keys;
- (nonnull MBXExpected<NSArray<MBXPersistentStorageData *> *, MBXPersistentStorageError *> *)getAll;
- (nonnull MBXExpected<NSNull *, MBXPersistentStorageError *> *)removeForKey:(nonnull NSString *)key;
- (nonnull MBXExpected<NSNumber *, MBXPersistentStorageError *> *)removeMultiForKeys:(nonnull NSArray<NSString *> *)keys
                                                                        allowMissing:(BOOL)allowMissing;
- (nonnull MBXExpected<NSNumber *, MBXPersistentStorageError *> *)removeAll;
- (nonnull MBXExpected<NSNumber *, MBXPersistentStorageError *> *)getStorageSize;
- (nonnull MBXExpected<NSNull *, MBXPersistentStorageError *> *)shrinkToFit;
@end
