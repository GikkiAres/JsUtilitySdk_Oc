//
//  Js_XXTeaManager.h
//  JsoUtilitySdk
//
//  Created by Gikki Ares on 2022/2/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsXXTeaManager : NSObject

	//srcString：加密字符串，key：密钥
/**
 *  使用XXTEA加密字符串
 *
 *  @param srcString 加密前字符串
 *  @param key       密钥
 *
 *  @return 加密后字符串,注意此字符串是转换后的十六进制字符串
 */
+ (NSString *)xxTeaEncryptStr:(NSString *)srcString withKey:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
