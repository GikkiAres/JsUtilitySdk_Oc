	//
	//  JsRequestManager.h
	//
	//  Created by Gikki Ares on 2020/12/31.
	//
#import <Foundation/Foundation.h>
#import "JsRequestManagerInterface.h"
#import "JsRequestConfig.h"
#import "JsRequestBaseData.h"
#import "JsRequestBuilderB.h"
/**
 职责:
 1,用户直接使用的对象.
 2,设置一些默认的低优先级的配置,每个接口,可以有自己的单独的高优先级的配置.
 功能:
 1,内部调用JsRequestBuilder来进行配置.
 2,可以选择具体的Builder的实现.
 */

NS_ASSUME_NONNULL_BEGIN

@interface JsRequestManager : NSObject

/**
全局的 $scheme://ip:port
 eg:
 http://192.168.1.1:8080
 */
@property (nonatomic,strong) NSString * serverAddress;
@property (nonatomic,assign) BOOL isGenerateDetailString;
@property (nonatomic,assign) BOOL isCalculateTraffic;
@property (nonatomic,assign) float timeout;


	//设置事件的代理对象和函数.
	//selector需要能够接受3个参数  int:NSString:NSString:
	//这种方式的优点是使用类方法就能设置.
- (void)setEventTarget:(id)target action:(SEL)action;

+ (JsRequestManager *)sharedInstance;


- (NSURLSessionDataTask *)invokeDataTaskWithConfig:(JsRequestConfig *)config completionHandler:(JsResponseHandler)handler;

#pragma mark 编辑请求头
-(void)setValue:(NSString *)value forRequestHeaderKey:(NSString *)key;
- (void)deleteRequestHeaderKey:(NSString *)key;

- (void)setRequestBuilderImplemention:(id<JsRequestExecutorInterface>)imp;


- (NSArray *)currentCookieArray;


@end

NS_ASSUME_NONNULL_END
