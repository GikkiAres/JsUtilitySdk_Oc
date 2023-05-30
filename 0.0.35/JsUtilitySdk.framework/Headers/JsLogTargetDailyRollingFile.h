//
//  LoggerTargetDayRollingFile.h
//  GaCameraViewProject
//
//  Created by GikkiAres on 2020/4/6.
//  Copyright © 2020 GikkiAres. All rights reserved.
//

/*
 只负责向日志文件输入内容
 而文件的管理的功能由Manager控制其组件来实现.
 */

#import "JsLogTargetInterface.h"

NS_ASSUME_NONNULL_BEGIN

@interface JsLogTargetDailyRollingFile : NSObject <JsLogTargetInterface>

//文件夹下保存的日志数量
@property(nonatomic,assign)int maxFileCount;
	//保存的日志文件目录
@property (nonatomic,strong) NSString * logDirectoryPath;
@property (nonatomic,strong) NSString * fileName;
//当前日志文件路径
@property (nonatomic,strong) NSString * currentFilePath;
@property (nonatomic,strong) NSDateFormatter * dfDate;
@property (nonatomic,strong) NSDateFormatter * dfDateTime;
@property (nonatomic,strong) NSString * strDate;
@property (nonatomic,strong) NSString * strDateTime;
@property (nonatomic,strong) NSString * projectName;

+ (JsLogTargetDailyRollingFile *)sharedInstance;
@end

NS_ASSUME_NONNULL_END
