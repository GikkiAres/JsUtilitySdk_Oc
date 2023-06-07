//
//  JsThreadManager.h
//  JsUtilitySdk
//
//  Created by Gikki Ares on 2023/4/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsThreadManager : NSObject


+ (void)runInMainThreadAsync:(void(^)(void))handler;

+ (void)runInMainThreadSync:(void(^)(void))handler;

@end

NS_ASSUME_NONNULL_END
