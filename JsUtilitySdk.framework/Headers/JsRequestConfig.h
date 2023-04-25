//
//  InterfaceBuilder.h
//
//  Created by GikkiAres on 2020/2/27.
//

#import <Foundation/Foundation.h>
#import "JsRequestBaseData.h"


NS_ASSUME_NONNULL_BEGIN

//typedef NSString *JsRequestMethod NS_STRING_ENUM;
//FOUNDATION_EXPORT JsRequestMethod const JsRequestMethodGet;
//FOUNDATION_EXPORT JsRequestMethod const JsRequestMethodPost;

@interface JsRequestConfig : NSObject

+ (instancetype)new __attribute__ ((unavailable("use next method")));
- (instancetype)init __attribute__ ((unavailable("use next method")));
- (instancetype)initWithMethod:(JsRequestMethod)method requestBodyInputType:(JsRequestBodyInputType)requestBodyInputType responseBodyOutputType:(JsResponseBodyOutputType)responseOutputType  __attribute__ ((objc_designated_initializer));

@property (nonatomic,strong) NSDictionary <NSString *,NSString *>* requestHeader;

#pragma mark RequestBody
#pragma mark RequestBody类型
@property (nonatomic,assign) JsRequestBodyInputType requestBodyInputType;
#pragma mark RequestBody数据
@property (nonatomic,strong) id requestBodyInput;

//url后面的参数
@property (nonatomic,strong) NSDictionary * urlParameter;
//暂无用处
@property (nonatomic,strong) NSArray * arrParameter;

//interfaceUrlString = serverAddress/interfacePath
@property (nonatomic,strong) NSString * serverAddress;
//接口的路径
//自动去掉前缀/
@property (nonatomic,strong) NSString * interfacePath;
//接口url地址,手动设置,将忽略serverAddress/interfacePath.
@property (nonatomic,strong) NSString * interfaceUrlString;

//reqeustUrlString=interfaceUrlString?queryString

#pragma mark ResponseBody设置
@property (nonatomic,assign) JsResponseBodyOutputType responseBodyOutputType;

@property (nonatomic,strong) NSNumber * timeout;


//是否打印请求的信息
//使用manager的默认值;
//可以单独设置.
//使用NSNumber *,用于判断是否设置了
@property (nonatomic,assign) NSNumber * isGenerateDetailString;

//是否计算数据量大小
@property (nonatomic,assign) NSNumber * isCalculateTraffic;



- (JsRequestMethod)requestMethod;
- (NSString *)requestUrlString;
- (NSString *)requestMethodName;
//实际请求的url,包括所有参数.
+ (NSString *)requestUrlString;
- (NSString *)requestBodyInputString;

- (void)setValue:(NSString *)value forRequestHeaderKey:(NSString *)key;
- (void)addDicForRequestHeader:(NSDictionary *)dic;
@end

NS_ASSUME_NONNULL_END
