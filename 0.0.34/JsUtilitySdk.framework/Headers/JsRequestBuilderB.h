//
//  JsRequestBuilderB.h
//  JsUtilitySdk
//
//  Created by Gikki Ares on 2023/4/10.
//

#import <Foundation/Foundation.h>
#import "JsRequestExecutorInterface.h"
NS_ASSUME_NONNULL_BEGIN

/**
 1,主要功能以类方法提供,还是实例方法:
 考虑的主要要点是是否会有两种不同方式使用该方法的场景存在.
 */
@interface JsRequestBuilderB <JsRequestExecutorInterface> : NSObject

+ (instancetype)sharedInstance;

- (NSURLSessionDataTask *)invokeDataTaskWithConfig:(JsRequestConfig *)config info:(JsRequestInfo *)info  completionHandler:(JsResponseHandler)completion;
- (NSArray *)currentCookieArray;

@end

NS_ASSUME_NONNULL_END
