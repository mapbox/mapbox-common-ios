// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXNetworkRestriction.h>
#import <MapboxCommon/MBXResourceLoadFlags_Internal.h>

NS_SWIFT_NAME(ResourceLoadOptions)
__attribute__((visibility ("default")))
@interface MBXResourceLoadOptions : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithTag:(nonnull NSString *)tag
                              flags:(MBXResourceLoadFlags)flags
                 networkRestriction:(MBXNetworkRestriction)networkRestriction
                       extraOptions:(nullable id)extraOptions;

@property (nonatomic, readonly, nonnull, copy) NSString *tag;
@property (nonatomic, readonly) MBXResourceLoadFlags flags;
@property (nonatomic, readonly) MBXNetworkRestriction networkRestriction;
@property (nonatomic, readonly, nullable, copy) id extraOptions;

@end
