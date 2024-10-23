// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
@class MBXExpected<__covariant Value, __covariant Error>;

@class MBXBuffer;

NS_SWIFT_NAME(ReadStream)
@protocol MBXReadStream
- (uint64_t)readBytes;
- (BOOL)isReadable;
- (BOOL)isExhausted;
- (nonnull MBXExpected<NSNumber *, NSString *> *)readForBuffer:(nonnull MBXBuffer *)buffer;
@end
