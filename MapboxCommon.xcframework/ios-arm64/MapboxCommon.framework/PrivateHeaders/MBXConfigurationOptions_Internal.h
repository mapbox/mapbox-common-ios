// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXConfigurationOptionsSource_Internal.h>

NS_SWIFT_NAME(ConfigurationOptions)
__attribute__((visibility ("default")))
@interface MBXConfigurationOptions : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithData:(nonnull id)data
                              digest:(nullable NSString *)digest
                              source:(MBXConfigurationOptionsSource)source;

@property (nonatomic, readonly, nonnull, copy) id data;
@property (nonatomic, readonly, nullable, copy) NSString *digest;
@property (nonatomic, readonly) MBXConfigurationOptionsSource source;

@end
