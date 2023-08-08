	//
	//  UIView+GaDisplay.h
	//  productLine
	//
	//  Created by GikkiAres on 2019/2/26.
	//  Copyright © 2019 base. All rights reserved.
	//



/**
 1,消失的动画,在消失的时候,再给个实际指定消失的动画.这样,可以让view以不同的形式消失.
 
 
 显示
 在containerView上,直接显示
 最多的情况下,显示 maskview,displayview
 displayView根据情况可能是self,或者(shadowview + self),
 */

#import <UIKit/UIKit.h>
#import "JsDisplayStyle.h"
#import "JsMessageReminderView.h"




@interface UIView (JsDisplay)

//在起其他view中,显示self
- (void)displayInView:(UIView *)containerView;
/**
 $2,dismiss时的block.
 */
- (void)displayInView:(UIView *)containerView withDisplayStyle:(JsDisplayStyle *)style undisplayCompletionHandler:(void(^)(void))handler;

//显示完毕之后的block,可以自定义增加动画.
- (void)displayInView:(UIView *)containerView withDisplayStyle:(JsDisplayStyle *)style displayCompetinHandler:(void(^)(void))displayCompetinHandler undisplayCompletionHandler:(void(^)(void))undisplayCompletionHandler;

- (void)undisplay;
- (void)undisplayWithAnimationType:(JsUndisplayAnimationType)animationType;


#pragma mark 1 DisplayMessage
#pragma mark 1.1 简便方法,其余参数全部默认.
- (void)displayMessage:(NSString *)message;
- (void)displayMessage:(NSString *)message contentType:(JsMessageReminderContentType)contentType;
- (void)displayMessage:(NSString *)message contentType:(JsMessageReminderContentType)contentType arrangeType:(JsMessageReminderArrangeType)arrangeType colorType:(JsMessageReminderColorType)colorType;
- (void)displayMessage:(NSString *)message duration:(float)duration;

#pragma mark 1.4 最后的构造方法.
- (void)displayMessage:(NSString *)message image:(UIImage *)image style:(JsDisplayStyle *)style;


#pragma mark 2 DisplayLoading
#pragma mark 2.1 简便方法,其余参数全部默认.
- (void)displayLoading;
- (void)undisplayLoading;

#pragma mark 3
- (CGRect)calculateTargetFrame;
@end

