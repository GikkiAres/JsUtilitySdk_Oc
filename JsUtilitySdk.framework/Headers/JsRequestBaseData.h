//
//  GaoInterfaceBaseData.h
//  DuTe
//
//  Created by Gikki Ares on 2020/12/31.
//  Copyright © 2020 vgemv. All rights reserved.
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN

// 定义返回处理的block
typedef void (^JsResponseHandler)(int responseState, id _Nullable resultObject,NSError * _Nullable error, NSString * _Nullable detailInfo);



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



NS_ASSUME_NONNULL_END
