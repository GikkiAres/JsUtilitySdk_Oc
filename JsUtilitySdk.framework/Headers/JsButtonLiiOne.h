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
 
 //默认创建1个vm.如果设置了选中图片,则创建两个.
 */

//#import <UIKit/UIKit.h>
#import "JsButtonLiiVm.h"

#define Prefix(x) Js##x

NS_ASSUME_NONNULL_BEGIN
@class Prefix(ButtonLiiOne);


@protocol JsButtonLiiOneDelegate <NSObject>

- (void)jsButtonLiiOneClicked:(JsButtonLiiOne *)button;

@optional
- (void)jsButtonLiiOneDrawRectAtContext:(CGContextRef)context withLabelFrame:(CGRect)rect_label imageFrame:(CGRect)rect_image totalSize:(CGSize)size_total;


@end


@interface JsButtonLiiOne : UIView
{
	
}

@property (nonatomic,weak) id <JsButtonLiiOneDelegate> delegate;
@property (nonatomic,assign) int countOfStates;
@property (nonatomic,strong) void(^clickCallback)(void) ;


@property (nonatomic,assign) UIEdgeInsets imageInset;


@property (nonatomic,strong) JsButtonLiiVm * vm;

	//设置背景图片
- (void)setBackgroundImage:(UIImage *)image;
- (void)setImage:(UIImage *)image;


	//设置字体
- (void)setTitle:(NSString *)title;
- (void)setTitle:(NSString *)title  withFont:(UIFont *)font;
- (void)setTitle:(NSString *)title  withFont:(UIFont *)font textColor:(UIColor *)textColor;

//- (void)setSelectedImage:(UIImage *)selectedImage unselectedImage:(UIImage *)unselectedImage;

- (UIFont *)textFont;

	//用来更新所有ui相关的内容.
- (void)setupUi;

- (void)updateFontColor:(UIColor *)color;
- (void)updateAttributedText:(NSAttributedString *)astr;
- (void)updateLabelAlignment:(NSTextAlignment)textAlignment;

	//更新大小
	//- (void)updateFrameKeepRightWithNewWidth:(CGFloat)width;
	//- (void)goToSecondForm;

- (UIImageView *)imageView;
- (UILabel *)label;
@end

NS_ASSUME_NONNULL_END
