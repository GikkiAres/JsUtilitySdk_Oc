//
//  JsRequestExecutorInterface.h
//  JsUtilitySdk
//
//  Created by Gikki Ares on 2023/5/19.
//

#ifndef JsRequestExecutorInterface_h
#define JsRequestExecutorInterface_h


#import "JsRequestConfig.h"
#import "JsRequestBaseData.h"
@protocol JsRequestExecutorInterface <NSObject>

- (NSURLSessionDataTask *)invokeDataTaskWithConfig:(JsRequestConfig *)config info:(JsRequestInfo *)info completionHandler:(JsResponseHandler)handler;
- (NSArray *)currentCookieArray;
@end

#endif /* JsRequestExecutorInterface_h */
