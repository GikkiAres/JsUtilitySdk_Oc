	//
	//  JsCrashManager.m
	//  JsCrashManager
	//
	//  Created by GikkiAres on 15/1/19.
	//  Copyright (c) 2015年 RG-IOS-DEV-002. All rights reserved.
	//

/**
 1,通过设置代理向代理发送消息
 2,默认行为:向特定的文件记录信息.
 3,增加一个开关控制是否进行默认的行为.
 4,通过代理增加自定义的行为.
 */

#import <UIKit/UIKit.h>

@class JsCrashManager;
@protocol JsCrashManagerDelegate <NSObject>

- (void)jscrashManager:(JsCrashManager *)manager willCrashWithInfo:(NSDictionary *)info;

@end

@interface JsCrashManager : NSObject{
	BOOL dismissed;
}

@property (nonatomic,weak) id<JsCrashManagerDelegate> delegate;

+ (instancetype)sharedInstance;
- (void)crash1;

@end


