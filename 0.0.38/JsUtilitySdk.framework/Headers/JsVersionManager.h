
	//
//  Js_VersionManager.h
//  JsOcUtilitySdk
//
//  Created by Gikki Ares on 2022/11/16.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsVersionManager : NSObject

+(NSString *)sdkVersion;
+(NSString *)sdkShortVersion;
+(int)sdkBuild;


@end

NS_ASSUME_NONNULL_END
