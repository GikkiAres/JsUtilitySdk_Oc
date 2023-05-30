//
//  GaLogger.h
//
//  Created by GikkiAres on 2020/3/28.
//  Copyright © 2020 GikkiAres. All rights reserved.
//

/**
 负责生成一个Log事件.
 具体是否打印该Log,打印到哪里,看具体的设置.
 */

#import <Foundation/Foundation.h>
#import "JsLogBasicData.h"
#import "JsLogEvent.h"
#import "JsLogTargetDailyRollingFile.h"
#import "JsLogTargetConsole.h"

NS_ASSUME_NONNULL_BEGIN

@interface JsLogger : NSObject
//记录器日志级别和模块的过滤器
@property(nonatomic,assign)JsLogLevel logLevel;
@property(nonatomic,strong) NSArray  * _Nullable  logTags;
//记录器的输出目的地
@property(nonatomic,strong)JsLogTargetConsole * consoleTarget;
@property(nonatomic,strong)JsLogTargetDailyRollingFile * fileTarget;

+ (instancetype )sharedInstance;

- (void)log:(JsLogEvent *)logEvent;

@end

NS_ASSUME_NONNULL_END
