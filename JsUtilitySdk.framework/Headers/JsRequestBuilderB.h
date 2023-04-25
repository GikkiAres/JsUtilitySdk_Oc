//
//  JsRequestBuilderB.h
//  JsUtilitySdk
//
//  Created by Gikki Ares on 2023/4/10.
//

#import <Foundation/Foundation.h>
#import "JsRequestBuilderInterface.h"
NS_ASSUME_NONNULL_BEGIN

/**
 1,主要功能以类方法提供,还是实例方法:
 考虑的主要要点是是否会有两种不同方式使用该方法的场景存在.
 */
@interface JsRequestBuilderB <JsReqeustBuilderInterface> : NSObject

+ (instancetype)sharedInstance;

- (NSURLSessionDataTask *)invokeDataTaskWithConfig:(JsRequestConfig *)config  completionHandler:(JsResponseHandler)completion;


@end

NS_ASSUME_NONNULL_END
