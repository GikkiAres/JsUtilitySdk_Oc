//
//  JsUnitManager.h
//  JsUtilitySdk
//
//  Created by Gikki Ares on 2023/4/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsUnitManager : NSObject

//将时间second转化为合适的描述符
//N unit,N>1的使用unit最大的单位;
+(NSArray *)suitableTimeDescForSec:(float)s;
+(NSArray *)suitableByteDescForByteSize:(float)B;
+(NSString *)suitableByteSpeedStringForByteDeltaSize:(float)B;

+ (NSString *)suitableByteDescStringForByteSize:(float)B;
+ (NSString *)suitableBitDescStringForByteSize:(float)B;

	//bit的速度.
+(NSString *)suitableBitSpeedStringForByteDeltaSize:(float)B;
@end

NS_ASSUME_NONNULL_END
