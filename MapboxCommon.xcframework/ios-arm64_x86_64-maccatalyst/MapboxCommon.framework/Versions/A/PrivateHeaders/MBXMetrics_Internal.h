// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(Metrics)
__attribute__((visibility ("default")))
@interface MBXMetrics : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithName:(nonnull NSString *)name
                               value:(nonnull id)value;

@property (nonatomic, readonly, nonnull, copy) NSString *name;
@property (nonatomic, readonly, nonnull, copy) id value;

@end
