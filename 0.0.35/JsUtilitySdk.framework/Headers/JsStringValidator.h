//
//  Js_StringValidator.h
//  JsoUtilitySdk
//
//  Created by Gikki Ares on 2022/4/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsStringValidator : NSObject

+ (BOOL)isValidUrlString:(NSString *)urlString;
+ (BOOL)isValidRtmpString:(NSString *)urlString;
+ (BOOL)isValidHlsString:(NSString *)urlString;
//字符串是否只包含数字和字符串,且不为空.
+ (BOOL)isOnlyContainNumAndCh:(NSString *)string;
//字母数字下划线,且不会空.
+ (BOOL)isOnlyContainNumChU:(NSString *)string;
@end

NS_ASSUME_NONNULL_END
