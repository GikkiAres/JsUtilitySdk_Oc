//
//  Js_LogView.h
//  MixedPlayerSdkDemo
//
//  Created by Gikki Ares on 2022/12/16.
//


/**
 作用:
 1,显示公司Logo
 2,显示公司名称
 3,显示项目信息.
 vm,代表一个状态的所有样式数据和模型.Model+Style.
 */
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Js_LogoView : UIView

@property (nonatomic,strong) NSString * companyName;
@property (nonatomic,strong) NSString * info;
@property (nonatomic,strong) UIImage * image;


//通过内容计算得到高度.
- (float) wrapContentHeight;

@end

NS_ASSUME_NONNULL_END
