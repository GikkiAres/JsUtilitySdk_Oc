//
//  GaoLogManagerInterface.h
//  GaoLogManagerInterface
//
//  Created by Gikki Ares on 2021/6/14.
//

#ifndef JsLogManagerInterface_h
#define JsLogManagerInterface_h

@protocol JsLogManagerInterface <NSObject>
	//全局使用一个共享的实例.
+(instancetype)sharedInstance;

/**
 Path,保留.
 */
//- (void)logAtPath:(NSString *)path format:(NSString *)format, ...;

	//设置日志的等级和标签
-(void)logWithLevel:(JsLogLevel)level tagert:(JsLogTargetOption)target context:(NSString *)context format:(NSString *)format, ...;

	//等级值越小越严重,大于该值的,不输出.
- (void)setLogLevelFilter:(int)filter;
	//设置了标签后,只有标签中的日志才会输出,其余不输出.
- (void)setLogTags:(NSArray *)logTags;

	//设置日志输出目录
- (void)setLogDirPath:(NSString *)logDirPath;
	//获取日志目录路径
- (NSString *)getLogDirPath;
- (void)printLogFileDir;
	//获取今日的日志文件路径
- (NSString *)getTodayLogFilePath;

	//设置最大的日志文件数量
- (void)setMaxLogFileCount:(int)count;
- (void)clearLogDir;

@end

#endif /* GaoLogManagerInterface_h */
