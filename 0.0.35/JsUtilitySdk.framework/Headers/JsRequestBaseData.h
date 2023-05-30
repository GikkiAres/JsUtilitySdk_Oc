//
//  JsRequestBaseData.h
//  DuTe
//
//  Created by Gikki Ares on 2020/12/31.
//  Copyright © 2020 vgemv. All rights reserved.
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN



typedef NS_ENUM(NSInteger, JsRequestMethod) {
	JsRequestMethodPost =1,
	JsRequestMethodGet,
	JsRequestMethodHead,
	JsRequestMethodOptions,
	JsRequestMethodPut,
	JsRequestMethodPatch,
	JsRequestMethodDelete,
	JsRequestMethodTrace,
	JsRequestMethodConnect
};

typedef NS_ENUM(NSInteger, JsResponseState) {
	JsResponseStateInvalid = -1,
	JsResponseStateOk = 200,
	JsResponseNotFound = 404
};

/*
 1,请求体的输入数据类型,不同的类型将会经过不同的处理转化为NSData赋值给requestbody.
 */
typedef NS_ENUM(NSInteger, JsRequestBodyInputType) {
	JsRequestBodyInputTypeNone =1,  		// 没有请求体.
	JsRequestBodyInputTypeData,  		// 直接使用data,不转化.
	JsRequestBodyInputTypeMapToJson, 	// map->json string->data
	JsRequestBodyInputTypeMapToUrlEncoded,	// map->urlencoded string ->data
	JsRequestBodyInputTypeMapToFormdata		// map -> formdata string ->data.
};

/*
 1,服务器返回的数据的数据格式.
 2,所有服务器返回的都是NSData数据,可能是string,可能是image,类型不是固定的,根据设计好的方式去解析就好.
 */
typedef NS_ENUM(NSInteger, JsResponseBodyOutputType) {
	JsResponseBodyOutputTypeData = 1,
	JsResponseBodyOutputTypeString,
	JsResponseBodyOutputTypeJsonToMap,		//data->json string->map
	JsResponseBodyOutputTypeJsonToArray
};





@interface JsRequestBaseData : NSObject

@end

	//内部结构.
@interface JsRequestInfo : NSObject
//请求url
@property (nonatomic,strong) NSString * urlString;
//请求方式
@property (nonatomic,assign) NSString * methodName;

@property (nonatomic,strong) NSDictionary * requestHeader;

#pragma mark RequestBody
#pragma mark RequestBody类型
@property (nonatomic,assign) JsRequestBodyInputType requestBodyInputType;
#pragma mark RequestBody数据
@property (nonatomic,strong) NSString * requestBodyInputString;

#pragma mark ResponseBody设置
@property (nonatomic,assign) JsResponseBodyOutputType responseBodyOutputType;
@property (nonatomic,strong) NSData * responseBodyData;
@property (nonatomic,strong) NSData * responseBodyOutputString;

	//请求需要带上的cookie
@property (nonatomic,strong) NSArray <NSHTTPCookie *>* cookies;
@property (nonatomic,strong) NSDictionary * responseHeader;
@property (nonatomic,assign) uint32_t reqeustDataSize;
@property (nonatomic,assign) uint32_t responseDataSize;

@property (nonatomic,assign) long responseStateCode;
@property (nonatomic,strong) NSString * responseStateMessage;
@property (nonatomic,strong) NSString * errorMessage;

	//请求开始时间和结束时间
@property (nonatomic,assign) CFAbsoluteTime requestStartTime;
@property (nonatomic,assign) CFAbsoluteTime requestEndTime;



-(NSString *)toString;

@end

	// 定义返回处理的block
typedef void (^JsResponseHandler)(int responseState, id _Nullable resultObject,NSError * _Nullable error, JsRequestInfo * _Nullable info);




NS_ASSUME_NONNULL_END
