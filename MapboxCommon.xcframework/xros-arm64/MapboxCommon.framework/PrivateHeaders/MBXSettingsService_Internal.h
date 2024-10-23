// This file is generated and will be overwritten automatically.

#import <MapboxCommon/MBXSettingsService.h>
#import <MapboxCommon/MBXOnValueChanged_Internal.h>

@interface MBXSettingsService ()
- (nonnull MBXExpected<NSNull *, NSString *> *)setForKey:(nonnull NSString *)key
                                                   value:(nonnull id)value __attribute((ns_returns_retained));
- (nonnull MBXExpected<NSNull *, NSString *> *)setFromFileForFilePath:(nonnull NSString *)filePath __attribute((ns_returns_retained));
- (nonnull MBXExpected<id, NSString *> *)getForKey:(nonnull NSString *)key __attribute((ns_returns_retained));
- (nonnull MBXExpected<id, NSString *> *)getForKey:(nonnull NSString *)key
                                      defaultValue:(nonnull id)defaultValue __attribute((ns_returns_retained));
- (nonnull MBXExpected<NSNull *, NSString *> *)eraseForKey:(nonnull NSString *)key __attribute((ns_returns_retained));
- (nonnull MBXExpected<NSNumber *, NSString *> *)hasForKey:(nonnull NSString *)key __attribute((ns_returns_retained));
- (int32_t)registerObserverForKey:(nonnull NSString *)key
                         observer:(nonnull MBXOnValueChanged)observer;
- (int32_t)registerObserverAtSettingsThreadForKey:(nonnull NSString *)key
                                         observer:(nonnull MBXOnValueChanged)observer;
- (void)unregisterObserverForObserverId:(int32_t)observerId;
@end
