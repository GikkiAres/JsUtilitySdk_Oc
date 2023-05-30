//
//  JsMd5Manager.h
//  JsUtilitySdk
//
//  Created by Gikki Ares on 2023/4/12.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsMd5Manager : NSObject

	// 32位小写
+(NSString *)md5LowerCase32:(NSString *)str;
	// 16为大写
+(NSString *)md5LowerCase16:(NSString *)str;

	// 32位小写
+(NSString *)md5LowerCase32:(NSString *)str salt:(NSString *)salt;
	// 16为大写
+(NSString *)md5LowerCase16:(NSString *)str salt:(NSString *)salt;

@end

NS_ASSUME_NONNULL_END
