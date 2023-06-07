//
//  JsMailConfig.h
//  JsUtilitySdk
//
//  Created by Gikki Ares on 2023/4/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsMailConfig : NSObject


//@param fromMail 邮箱-发送
@property(nonatomic,strong) NSString * fromMail;
//目标邮箱
@property(nonatomic,strong) NSString * toMail;
//@param login 邮箱登录账号
@property(nonatomic,strong) NSString * login;
//@param pass 邮箱登录密码
@property(nonatomic,strong) NSString * pass;
//@param mailServer 发信服务器 域名或者ip
@property(nonatomic,strong) NSString * mailServer;
//端口
@property(nonatomic,strong) NSString * mailServerPort;


+(instancetype)jsConfig;

@end

NS_ASSUME_NONNULL_END
