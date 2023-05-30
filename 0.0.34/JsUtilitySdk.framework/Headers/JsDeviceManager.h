//
//  JsDeviceManager.h
//  JsUtilitySdk
//
//  Created by Gikki Ares on 2023/4/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsDeviceManager : NSObject

	
typedef NSString *JsDeviceInfoKey NS_STRING_ENUM;

FOUNDATION_EXPORT JsDeviceInfoKey const JsDeviceInfoKeyAppName;
FOUNDATION_EXPORT JsDeviceInfoKey const JsDeviceInfoKeyAppVersion;
FOUNDATION_EXPORT JsDeviceInfoKey const JsDeviceInfoKeyAppBuild;
FOUNDATION_EXPORT JsDeviceInfoKey const JsDeviceInfoKeyFullVersion;
FOUNDATION_EXPORT JsDeviceInfoKey const JsDeviceInfoKeyIosVersion;
FOUNDATION_EXPORT JsDeviceInfoKey const JsDeviceInfoKeyDeviceName;
FOUNDATION_EXPORT JsDeviceInfoKey const JsDeviceInfoKeyFullVersion;
FOUNDATION_EXPORT JsDeviceInfoKey const JsDeviceInfoKeyDeviceModel;
FOUNDATION_EXPORT JsDeviceInfoKey const JsDeviceInfoKeyDeviceId;



+(NSDictionary *)infoDic;

+ (NSString *)deviceId;

@end

NS_ASSUME_NONNULL_END
