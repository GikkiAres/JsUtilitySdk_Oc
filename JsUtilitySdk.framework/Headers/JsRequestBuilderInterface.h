//
//  JsRequestBuilderInterface.h
//  JsUtilitySdk
//
//  Created by Gikki Ares on 2023/4/10.
//

#ifndef JsRequestBuilderInterface_h
#define JsRequestBuilderInterface_h

#import "JsRequestConfig.h"

@protocol JsRequestBuilderInterface <NSObject>

- (NSURLSessionDataTask *)invokeDataTaskWithConfig:(JsRequestConfig *)config completionHandler:(JsResponseHandler)handler;

@end



#endif /* JsRequestBuilderInterface_h */
