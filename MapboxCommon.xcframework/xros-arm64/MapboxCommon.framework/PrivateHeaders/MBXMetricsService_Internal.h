// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXFlushOperationResultCallback_Internal.h>
#import <MapboxCommon/MBXMetricsServiceSerializeCallback_Internal.h>

@protocol MBXMetricsSource;

NS_SWIFT_NAME(MetricsService)
__attribute__((visibility ("default")))
@interface MBXMetricsService : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (void)addMetricsSourceForSource:(nonnull id<MBXMetricsSource>)source;
- (void)removeMetricsSourceForSource:(nonnull id<MBXMetricsSource>)source;
- (void)serializeForCallback:(nonnull MBXMetricsServiceSerializeCallback)callback;
- (void)serializePrettyForCallback:(nonnull MBXMetricsServiceSerializeCallback)callback;
- (void)startForInterval:(nullable NSNumber *)interval;
- (void)stop;
- (void)flushForCallback:(nonnull MBXFlushOperationResultCallback)callback;
- (void)setTagForTag:(nonnull NSString *)tag;

@end
