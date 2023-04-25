//
//  GaoLogManager.h
//
//  Created by Gikki Ares on 2021/4/30.
//


#import <JsUtilitySdk/JsLogger.h>
#import <Foundation/Foundation.h>
#import <JsUtilitySdk/JsLogManagerInterface.h>

//fc的快捷宏.
#define jslogv_fc(_context,_format,...) [[JsLogManager sharedInstance] logWithLevel:JsLogLevelVerbose target:JsLogTargetOptionConsole|JsLogTargetOptionFile context:_context format:_format,##__VA_ARGS__]
#define jslogd_fc(_context,_format,...) [[JsLogManager sharedInstance] logWithLevel:JsLogLevelDebug target:JsLogTargetOptionConsole|JsLogTargetOptionFile context:_context format:_format,##__VA_ARGS__]
#define jslogi_fc(_context,_format,...)[[JsLogManager sharedInstance] logWithLevel:JsLogLevelInfo target:JsLogTargetOptionConsole|JsLogTargetOptionFile context:_context format:_format,##__VA_ARGS__]
#define jslogw_fc(_context,_format,...) [[JsLogManager sharedInstance] logWithLevel:JsLogLevelWarn target:JsLogTargetOptionConsole|JsLogTargetOptionFile context:_context format:_format,##__VA_ARGS__]
#define jsloge_fc(_context,_format,...) [[JsLogManager sharedInstance] logWithLevel:JsLogLevelError target:JsLogTargetOptionConsole|JsLogTargetOptionFile context:_context format:_format,##__VA_ARGS__]
#define jslogf_fc(_context,_format,...) [[JsLogManager sharedInstance] logWithLevel:JsLogLevelFatal target:JsLogTargetOptionConsole|JsLogTargetOptionFile context:_context format:_format,##__VA_ARGS__]


//c的快捷宏.
#define jslogv_c(_context,_format,...) [[JsLogManager sharedInstance] logWithLevel:JsLogLevelVerbose target:JsLogTargetOptionConsole context:_context format:_format,##__VA_ARGS__]
#define jslogd_c(_context,_format,...) [[JsLogManager sharedInstance] logWithLevel:JsLogLevelDebug target:JsLogTargetOptionConsole context:_context format:_format,##__VA_ARGS__]
#define jslogi_c(_context,_format,...)[[JsLogManager sharedInstance] logWithLevel:JsLogLevelInfo target:JsLogTargetOptionConsole context:_context format:_format,##__VA_ARGS__]
#define jslogw_c(_context,_format,...) [[JsLogManager sharedInstance] logWithLevel:JsLogLevelWarn target:JsLogTargetOptionConsole context:_context format:_format,##__VA_ARGS__]
#define jsloge_c(_context,_format,...) [[JsLogManager sharedInstance] logWithLevel:JsLogLevelError target:JsLogTargetOptionConsole context:_context format:_format,##__VA_ARGS__]
#define jslogf_c(_context,_format,...) [[JsLogManager sharedInstance] logWithLevel:JsLogLevelFatal target:JsLogTargetOptionConsole context:_context format:_format,##__VA_ARGS__]


#define jslog_c(_level,_context,_format,...)  [[JsLogManager sharedInstance] logWithLevel:_level target:JsLogTargetOptionConsole context:_context format:_format,##__VA_ARGS__]
#define jslog_fc(_level,_context,_format,...)  [[JsLogManager sharedInstance] logWithLevel:_level target:JsLogTargetOptionConsole|JsLogTargetOptionFile context:_context format:_format,##__VA_ARGS__]


NS_ASSUME_NONNULL_BEGIN
@interface JsLogManager : NSObject <
JsLogManagerInterface
>

	//全局使用一个共享的实例.
+(instancetype)sharedInstance;

	//level,target,context,content;
-(void)logWithLevel:(JsLogLevel)level target:(JsLogTargetOption) target context:(NSString * __nullable)context conent:(NSString *)format;
	//level,target,context,format...
-(void)logWithLevel:(JsLogLevel)level target:(JsLogTargetOption) target context:(NSString * __nullable)context format:(NSString *)format, ...;

//等级值越小越严重,大于该值的,不输出.
- (void)setLogLevelFilter:(int)filter;


	//设置日志输出目录
- (void)setLogDirPath:(NSString *)logDirPath;
	//获取日志目录路径
- (NSString *)getLogDirPath;

	//获取今日的日志文件路径
- (NSString *)getTodayLogFilePath;

	//设置最大的日志文件数量
- (void)setMaxLogFileCount:(int)count;

- (void)clearLogDir;

@end

NS_ASSUME_NONNULL_END
