// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
@class MBXDataRef;

NS_SWIFT_NAME(PersistentStorageData)
__attribute__((visibility ("default")))
@interface MBXPersistentStorageData : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithKey:(nonnull NSString *)key
                          timestamp:(nonnull NSDate *)timestamp
                              value:(nonnull MBXDataRef *)value;

/** Data key. */
@property (nonatomic, readonly, nonnull, copy) NSString *key;

/** Data creation timestamp. */
@property (nonatomic, readonly, nonnull) NSDate *timestamp;

/** Data value. */
@property (nonatomic, readonly, nonnull) MBXDataRef *value;


@end
