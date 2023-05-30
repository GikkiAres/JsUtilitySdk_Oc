//
//  LoggerEvent.h
//  GaCameraViewProject
//
//  Created by GikkiAres on 2020/4/6.
//  Copyright © 2020 GikkiAres. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JsLogBasicData.h"

NS_ASSUME_NONNULL_BEGIN

@interface JsLogEvent : NSObject

@property(nonatomic,strong)NSString * context;
@property(nonatomic,assign)JsLogLevel logLevel;
@property(nonatomic,assign)JsLogTargetOption logTarget;
@property(nonatomic,strong)NSString * message;
@property(nonatomic,strong)NSString * fullTimeString;

@property(nonatomic,strong)NSString * content;

+ (JsLogEvent *)eventWithLogLevel:(JsLogLevel)logLevel logTarget:(JsLogTargetOption)logTarget context:(NSString *)context message:(NSString *)message;

@end

NS_ASSUME_NONNULL_END
