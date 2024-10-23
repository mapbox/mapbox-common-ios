// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
@class MBXDataRef;

NS_SWIFT_NAME(PersistentStorageKeyValue)
__attribute__((visibility ("default")))
@interface MBXPersistentStorageKeyValue : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithKey:(nonnull NSString *)key
                              value:(nonnull MBXDataRef *)value;

/** Data key. */
@property (nonatomic, readonly, nonnull, copy) NSString *key;

/** Data value. */
@property (nonatomic, readonly, nonnull) MBXDataRef *value;


@end
