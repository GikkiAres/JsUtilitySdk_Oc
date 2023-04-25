//
//  GaoButtonIl.h
//  DuTe
//
//  Created by Gikki Ares on 2020/12/8.
//  Copyright © 2020 vgemv. All rights reserved.
//

/**
 三个元素:
 1,Button
 2,label
 3,修饰画布
 */

#import <UIKit/UIKit.h>
#import "JsBarrageButtonVm.h"

NS_ASSUME_NONNULL_BEGIN
@class JsBarrageButton;
@protocol JsBarrageButtonDelegate <NSObject>

- (void)jsBarrageButton:(JsBarrageButton *)button stateChanged:(int)state;

@end


@interface JsBarrageButton : UIView
{
	@public
	UITextField *mtf;
	UIImageView *miv;
	UIButton * mbtn_toggle;
	UIButton * mbtn_send;
}

@property (nonatomic,weak) id <JsBarrageButtonDelegate> delegate;
@property (nonatomic,strong) JsBarrageButtonVm * vm;

- (instancetype)initWithFrame:(CGRect)frame vm:(JsBarrageButtonVm *)vm;


////设置前景图片
//- (void)setImage:(UIImage *)image;
//- (void)setSelectedImage:(UIImage *)selectedImage unselectedImage:(UIImage *)unselectedImage;
//
////设置字体
//- (void)setTitle:(NSString *)title;
//- (void)setTitle:(NSString *)title  withFont:(UIFont *)font;
//- (void)setTitle:(NSString *)title  withFont:(UIFont *)font textColor:(UIColor *)textColor;
//
//- (UIFont *)textFont;
//
//- (void)updateUi;
//- (void)updateFontColor:(UIColor *)color;
//- (void)updateAttributedText:(NSAttributedString *)astr;
//- (void)updateLabelAlignment:(NSTextAlignment)textAlignment;

//更新大小
//- (void)updateFrameKeepRightWithNewWidth:(CGFloat)width;
//- (void)goToSecondForm;
@end

NS_ASSUME_NONNULL_END
