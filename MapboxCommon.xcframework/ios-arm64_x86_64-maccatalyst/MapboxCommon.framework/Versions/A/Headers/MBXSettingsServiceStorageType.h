// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Enum that contains possible storage types that can be used for settings service. */
// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBXSettingsServiceStorageType)
{
    /**
     * Persistent storage type means that all the settings key/value pairs, that are set during application lifetime,
     * will be available also after application gets terminated on the next run. On mobile platforms since we are
     * using system APIs all the settings will be also migrated to other user's device with the same application
     * install.
     */
    MBXSettingsServiceStorageTypePersistent,
    /**
     * Non persistent storage type means that all the settings will be only available during application lifetime and
     * will be destroyed on application exit.
     */
    MBXSettingsServiceStorageTypeNonPersistent
} NS_SWIFT_NAME(SettingsServiceStorageType);
