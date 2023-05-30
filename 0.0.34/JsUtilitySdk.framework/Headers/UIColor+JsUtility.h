//
//  UIColor+GAUtility.h
//
//  Created by GikkiAres on 2016/12/1.
//

#import <UIKit/UIKit.h>

@interface UIColor (JsUtility)
//获取随机颜色
+(instancetype)randomColor;
//16进制值: 0x1234ff
+(instancetype)colorWithHex:(long)hexColor;
+(instancetype)colorWithHex:(long)hexColor alpha:(float)opacity;

//
+(instancetype)grayColorWithWhite:(int)white;
+(instancetype)grayColorWithWhite:(int)white alpha:(int)alpha;
//10进制,rgb∈[0,255],a∈[0,255]
+(instancetype)colorMax255WithR:(int)r g:(int)g b:(int)b a:(int)a;

//10进制字符串,如:@"123,123,123,1";
+(instancetype)colorWithRGBADecimalString:(NSString *)str;



#pragma mark 1 Color->String
//返回当前颜色的rgba格式16进制字符串
//eg:ff00ccff
-(NSString *)rgbaHexString;


#pragma mark 2 String -> Color
#pragma mark 2.1 16进制RGB字符串转颜色
//16进制字符串,如 @"e54a52";
//如果长度不为6,返回空.
+(instancetype)colorWithRGBHexString:(NSString *)str;

#pragma mark 2.2 16进制RGBA字符串转颜色
	//16进制字符串,如 @"e54a52ff";
	//如果长度不为8,返回空.
+ (UIColor *)colorWithRGBAHexString:(NSString *)str;
@end
