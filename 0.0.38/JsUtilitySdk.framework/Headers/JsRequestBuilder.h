//
//  InterfaceBuilder.h
//  ExamineLine2 WatchKit Extension
//
//  Created by GikkiAres on 2020/2/27.
//  Copyright © 2020 Gtmc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JsRequestBuilder.h"
#import "JsRequestBaseData.h"
#import "JsRequestConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface JsRequestBuilder<JsRequestBuilderInterface> : NSObject

+(instancetype)sharedInstance;

- (NSURLSessionDataTask *)invokeDataTaskWithConfig:(JsRequestConfig *)config info:(JsRequestInfo *)info completionHandler:(JsResponseHandler)handler;

////+ (NSURLSessionDataTask *)interfaceWithInterfaceConfig:(InterfaceConfig *)config completion:(ResponseHandler)completion;
//+ (NSURLSessionDataTask *)invokeRequestWithInterfaceConfig:(JsRequestConfig *)config  completion:(ResponseHandler)completion;
//
//
//
//#pragma mark post application/x-www-form-urlencoded
//+ (NSURLSessionDataTask *)postRequestByUrlencodedWithRequestConfig:(JsRequestConfig *) config
//											completion:(ResponseHandler)completion;
//
//
//#pragma mark post multipart/form-data
//+ (NSURLSessionDataTask *)postRequestByFormDataWithRequestConfig:(JsRequestConfig *) config
//											completion:(ResponseHandler)completion;
//
//#pragma mark post application/json
//+ (NSURLSessionDataTask *)postRequestByJsonWithRequestConfig:(JsRequestConfig *) config
//													  completion:(ResponseHandler)completion;
//
//
//#pragma mark 1 get
//
//+ (NSURLSessionDataTask *)getRequestWithRequestConfig:(JsRequestConfig *) config
//											completion:(ResponseHandler)completion;



#pragma mark post raw data
//+ (void)postRequestWithURLString:(NSString *)url
//				   rawParameters:(NSDictionary *)parameters
//					  completion:(ResponseHandler)completion;



@end

NS_ASSUME_NONNULL_END
