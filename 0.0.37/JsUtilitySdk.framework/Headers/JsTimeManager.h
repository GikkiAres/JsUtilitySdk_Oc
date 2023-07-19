//
//  GaoTimeManager.h
//
//  Created by Gikki Ares on 2021/3/31.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsTimeManager : NSObject

+ (NSString *) timeStringWithSeconds:(float)seconds;

//202010509121212
+ (NSString *)minTimeStringForNow;
//2021-05-09 10:12:12
+ (NSString *)stdTimeStringForNow;
//00:11
+ (NSString *) stdTimeStringInmmssForMiniSeconds:(int)miniSeconds;
+ (NSString *) stdTimeStringInmmssForSeconds:(int)seconds;
+ (NSString *) stdTimeStringInhhmmssForSeconds:(int)seconds;

+ (NSString *)descriptinForTimeStringDifNow:(NSString *)timeString;

/**
 当前的日期时间是否是今日.
 */
+ (BOOL)isStdDateTimeStringInToday:(NSString *)dateTimeString;
+ (BOOL)isStdDateStringInToday:(NSString *)dateTimeString;
@end

NS_ASSUME_NONNULL_END
