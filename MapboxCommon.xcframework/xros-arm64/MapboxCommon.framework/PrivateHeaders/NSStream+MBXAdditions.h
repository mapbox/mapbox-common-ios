#import <Foundation/Foundation.h>
#import <MapboxCommon/MapboxStream_Internal.h>


@interface NSInputStream (MBXAdditions)
+ (instancetype)streamWithMBXReadStream:(id<MBXReadStream>)stream;
- (id<MBXReadStream>)asMBXReadStream;
@end
