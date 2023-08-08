//
//  LiveDetailUiParameter.h
//  DuTe
//
//  Created by Gikki Ares on 2020/12/18.
//  Copyright © 2020 vgemv. All rights reserved.
//
/**
 Parameter是直接的参数.
 */

#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@interface JsBarrageButtonVmStyle : NSObject


@property(nonatomic,assign)CGSize size;
	//背景颜色
@property(nonatomic,strong)UIColor * color_bg;


//@property(nonatomic,strong)UIColor * mcolor_titleLabel;
//@property(nonatomic,strong)UIFont * mfont_titleLabel;
//@property(nonatomic,assign)NSTextAlignment mTextAlignment;

@property(nonatomic,assign)NSStringDrawingOptions drawingOptions;

@property(nonatomic,strong)NSString * mstr_title;
@property(nullable,nonatomic,strong)NSAttributedString * mastr_title;

//切换弹幕开关的button
@property(nonatomic,assign) CGRect toggleButtonFrame;
//输入弹幕的按钮.
@property(nonatomic,assign) CGRect sendButtonFrame;
@property(nonatomic,assign) CGRect imageViewFrame;
@property(nonatomic,assign) CGRect labelFrame;

	//只存储数据.
@property(nonatomic,strong)NSString * imageName;

@property(nonatomic,strong)UIColor * mcolor_toggleButton;



@end


@interface JsBarrageButtonVm : NSObject

//所有style的公共样式.
@property(nonatomic,strong)UIColor * mcolor_titleLabel;
@property(nonatomic,strong)UIFont * mfont_titleLabel;
@property(nonatomic,assign)NSTextAlignment mTextAlignment;
@property(nonatomic,assign)int state;

- (CGSize)wrapperContentSize;
- (JsBarrageButtonVmStyle *)currentVmStyle;

@end


NS_ASSUME_NONNULL_END
