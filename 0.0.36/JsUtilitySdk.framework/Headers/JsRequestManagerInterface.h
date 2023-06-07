	//
	//  JsRequestManager.h
	//
	//  Created by Gikki Ares on 2020/12/31.
	//
#import <Foundation/Foundation.h>
#import "JsRequestConfig.h"
#import "JsRequestBaseData.h"
#import "JsRequestExecutorInterface.h"
NS_ASSUME_NONNULL_BEGIN

/*
 protocol按照用途分类:
 1,Interface,主动调用,定义类的规则
 2,Callback,专门用于函数的回调.
 3,Delegate,提供必要的接口给本类调用.
 4,Datasource,提供需要的数据.
 */

@class JsRequestManager;
@protocol JsRequestManagerDelegate <NSObject>

- jsRequestManager:(JsRequestManager *)manager setRequestBuilder:(id<JsRequestExecutorInterface>)builder;

@end



NS_ASSUME_NONNULL_END
