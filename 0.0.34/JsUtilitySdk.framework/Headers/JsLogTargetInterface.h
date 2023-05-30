//
//  GaoLogTarget.h
//
//  Created by GikkiAres on 2020/4/6.
//  Copyright © 2020 GikkiAres. All rights reserved.
//

/*
 version:
 0.0.0
 
 description:
 每个输出目的地拥有独立的配置格式.
 用LogFormatPatter对象来配置
 
 用来接受LogEvent,并进行实际输出动作.
 */

#import <Foundation/Foundation.h>
#import "JsLogEvent.h"

NS_ASSUME_NONNULL_BEGIN

@protocol JsLogTargetInterface <NSObject>

//@property(nonatomic,strong)GaoLogFormatPattern * logFormatPattern;

+ (instancetype)sharedInstance;
- (void)log:(JsLogEvent *)logEvent;

@end

NS_ASSUME_NONNULL_END


