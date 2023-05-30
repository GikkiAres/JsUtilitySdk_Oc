//
//  JsMailManager.h
//  CanvasAlpha
//
//  Created by Gikki Ares on 2021/4/12.
//  Copyright © 2021 vgemv. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JsMailConfig.h"
NS_ASSUME_NONNULL_BEGIN


@class JsMailManager;
@protocol JsMailManagerDelegate <NSObject>

- (void)jsMailManager:(JsMailManager *)manager didSendMailSuccess:(NSString *)message;
- (void)jsMailManager:(JsMailManager *)manager didSendMailFailed:(NSString *)message;

@end

@interface JsMailManager : NSObject


@property(nonatomic,weak)id<JsMailManagerDelegate> delegte;


+ (JsMailManager *)sharedInstance;

//将文件作为附件,发送邮件出去.
- (void)sendFile:(NSString *)filePath withConfig:(JsMailConfig *)config;
- (void)sendFile:(NSString *)filePath delegate:(id<JsMailManagerDelegate>)d withConfig:(JsMailConfig *)config;


/**
 邮件发送
 @param subject 邮件标题
 @param content 邮件正文
 */
- (void)sendMailWithConfig:(JsMailConfig *)config subject:(NSString *)subject content:(NSString * _Nullable)content attachFilePath:(NSString * _Nullable)filePath emailAttachFileName:(NSString * _Nullable)fileName;

@end

NS_ASSUME_NONNULL_END
