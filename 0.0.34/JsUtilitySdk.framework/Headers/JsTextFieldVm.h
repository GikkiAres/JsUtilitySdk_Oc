//
//  JsTextFieldConfig.h
//  JsUtilitySdk
//
//  Created by Gikki Ares on 2023/4/23.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsTextFieldVm : NSObject

	//非激活状态下的字体大小.
@property(nonatomic,assign) float placeholderSize_inactive;
	//激活状态下字体大小.
@property(nonatomic,assign) float textSize;
	//placeholder激活时的颜色.
@property(nonatomic,strong) UIColor * placeholderColor_active;
@property(nonatomic,strong) UIColor * separatorColor_inactive;
@property(nonatomic,strong) UIColor * textColor;
//数据合法的颜色,默认绿色
@property(nonatomic,strong) UIColor * reminderColor_valid;
@property(nonatomic,strong) UIColor * reminderColor_invalid;

/*
 是否显示错误提示,一般在点击一次提交后显示.
 在第一次删除清空后显示.
 */
//@property(nonatomic,assign)BOOL isShowReminder;
@property(nonatomic,assign)BOOL isHideContent;
@property(nonatomic,strong)NSString * placeholder;

@property(nonatomic,strong)NSString * text;

//数据invalid提示.
@property(nonatomic,strong)NSString * invalidReminder;
//为空的提示.
@property(nonatomic,strong)NSString * emptyReminder;

@property(nonatomic,strong)UIColor * themeColor;


+(instancetype)sharedInstance;
+(instancetype)defaultVm;

@end

NS_ASSUME_NONNULL_END
