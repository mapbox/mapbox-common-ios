#ifndef MBXFeature_h
#define MBXFeature_h

#import <Foundation/Foundation.h>

@class MBXGeometry;

NS_SWIFT_NAME(Feature)
__attribute__((visibility ("default")))
@interface MBXFeature: NSObject

@property (readonly, retain, nonnull) NSObject *identifier;
@property (readonly, retain, nonnull) MBXGeometry *geometry;
@property(readonly, retain, nonnull) NSDictionary<NSString *, NSObject *> *properties;

- (nonnull instancetype)initWithIdentifier:(nonnull NSObject *)identifier
                                  geometry:(nonnull MBXGeometry *)geometry
                                properties:(nonnull NSDictionary<NSString *, NSObject *> *)properties;

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

@end

#endif /* MBXFeature_h */
