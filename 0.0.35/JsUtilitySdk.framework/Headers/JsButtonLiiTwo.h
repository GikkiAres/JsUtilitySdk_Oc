//
//  JsButtonLiiTwo.h
//
//  Created by Gikki Ares on 2020/12/8.
//

/**
 三个元素:
 1,Button
 2,label
 3,修饰画布
 
 //默认创建1个vm.如果设置了选中图片,则创建两个.
 */

#import "JsButtonLiiVm.h"

NS_ASSUME_NONNULL_BEGIN
@class JsButtonLiiTwo;
@protocol JsButtonLiiTwoDelegate <NSObject>

- (void)jsButtonLiiTwoClicked:(JsButtonLiiTwo *)button;

@optional
- (void)jsButtonLiiTwoDrawRectAtContext:(CGContextRef)context withLabelFrame:(CGRect)rect_label imageFrame:(CGRect)rect_image totalSize:(CGSize)size_total;


@end


@interface JsButtonLiiTwo : UIView
{
	
}

@property (nonatomic,weak) id <JsButtonLiiTwoDelegate> delegate;
@property (nonatomic,assign) int countOfStates;
@property (nonatomic,assign) int currentState;
@property (nonatomic,strong) void(^clickCallback)(BOOL isSelected);


- (void)toggle;
- (void)setUnselected;
- (void)setSelected;
- (BOOL)isSelected;


//用来更新所有ui相关的内容.
- (void)setupUi;

- (void)updateFontColor:(UIColor *)color;
- (void)updateAttributedText:(NSAttributedString *)astr;
- (void)updateLabelAlignment:(NSTextAlignment)textAlignment;


- (UIImageView *)imageView;
-(JsButtonLiiVm *)selectedVm;
-(JsButtonLiiVm *)unselectedVm;

#pragma mark ConvinientVmMethod

	//设置背景图片
- (void)setBackgroundImage:(UIImage *)image;
- (void)setImage:(UIImage *)image;


	//设置字体
- (void)setTitle:(NSString *)title;
- (void)setTitle:(NSString *)title  withFont:(nullable UIFont *)font;
- (void)setTitle:(NSString *)title  withFont:(nullable UIFont *)font textColor:(nullable UIColor *)textColor;
- (void)setSelectedImage:(UIImage *)selectedImage unselectedImage:(UIImage *)unselectedImage;
@end

NS_ASSUME_NONNULL_END
