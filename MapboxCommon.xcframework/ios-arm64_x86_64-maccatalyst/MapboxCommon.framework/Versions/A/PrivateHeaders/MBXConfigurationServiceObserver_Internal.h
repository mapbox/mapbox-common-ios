// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBXConfigurationOptions;
@class MBXConfigurationServiceError;

NS_SWIFT_NAME(ConfigurationServiceObserver)
@protocol MBXConfigurationServiceObserver
- (void)didStartUpdate;
- (void)didUpdateForOptions:(nonnull MBXConfigurationOptions *)options;
- (void)didEncounterErrorForError:(nonnull MBXConfigurationServiceError *)error;
@end
