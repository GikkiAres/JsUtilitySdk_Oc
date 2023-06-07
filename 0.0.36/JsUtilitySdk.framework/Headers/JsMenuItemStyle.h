//
//  Prefix(MenuViewStyle).h
//  DuTe
//
//  Created by Gikki Ares on 2020/12/9.
//



/**
 用来设置MenuView显示样式
 
 */

#import <UIKit/UIKit.h>

#define Prefix(x) Js##x

NS_ASSUME_NONNULL_BEGIN


@interface Prefix(MenuItemStyle) : NSObject

@property(nonatomic,assign)CGRect labelFrame;
@property(nonatomic,assign)CGRect imageViewFrame;
@property(nonatomic,strong) UIFont * titleFont;
@property(nonatomic,assign) CGSize cellSize;
@property(nonatomic,assign) BOOL isUseDefaultShadow;
@property(nonatomic,strong) UIColor * titleColor;
@property(nonatomic,strong)UIColor * cellBackgroundColor;
@property(nonatomic,strong)UIColor * borderColor;
@property(nonatomic,assign)float borderWidth;
@property(nonatomic,assign)float cornerRadius;
+ (Prefix(MenuItemStyle) *)defaultStyle;
+ (Prefix(MenuItemStyle) *)darkModeStyle;
+ (JsMenuItemStyle *) lightModeStyle;
@end

NS_ASSUME_NONNULL_END
