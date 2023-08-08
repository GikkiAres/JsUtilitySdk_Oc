	//
	//  GaoDisplayStyle.h
	//  JsoMediaCaptureViewController
	//
	//  Created by Gikki Ares on 2020/9/23.
	//

/**
 ContainerView:
 加载dispalayView;
 加载maskbutton+displayView;
 */

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
	//typedef void(^maskBtnBlock)(void);
typedef NS_ENUM(NSUInteger, JsDisplayPosition) {
	JsDisplayPositionCenter,
	JsDisplayPositionRight,
	JsDisplayPositionLeft,
	JsDisplayPositionBottom,
	JsDisplayPositionTop,
		//自定义目标frame
	JsDisplayPositionCustom
};

typedef NS_ENUM(NSUInteger, JsDisplayAnimationType) {
		//没有动画
	JsDisplayAnimationTypeNone,
		//从右滑动到左
	JsDisplayAnimationTypeMoveFromRight,
		//从最底端滑上来
	JsDisplayAnimationTypeMoveFromBottom,
		//从最顶端滑下来
	JsDisplayAnimationTypeMoveFromTop,
		//从放大,暗淡 到正常,显示
	JsDisplayAnimationTypeShrink
};

typedef NS_ENUM(NSUInteger, JsUndisplayAnimationType) {
	JsUndisplayAnimationTypeNone,
		//从当前位置移动到左边消失;
	JsUndisplayAnimationTypeMoveToLeft,
		//从当前位置移动到右边消失;
	JsUndisplayAnimationTypeMoveToRight,
		//滑到最底端;
	JsUndisplayAnimationTypeMoveToBottom,
		//滑到最顶端
	JsUndisplayAnimationTypeMoveToTop
};

	//typedef struct GaoDisplayRoundCorner {
	//	float leftTop;
	//	float rightTop;
	//	float leftBottom;
	//	float rightBottom;
	//}GaoDisplayRoundCorner;


@interface JsDisplayStyle : NSObject

	//是否增加阴影
@property(nonatomic,assign) BOOL mb_isHasShadow;

	//是否增加遮罩
//@property(nonatomic,assign) BOOL mb_isHasMask;
	//遮罩的透明度.
@property(nonatomic,assign) CGFloat mf_maskAlpha;
//遮罩的透明度.
@property(nonatomic,strong) UIColor * maskColor;


//显示动画的持续时间.
@property(nonatomic,assign) CGFloat mf_displayAnimationDuration;


//是否可以点击遮罩触发remove方法
@property(nonatomic,assign) BOOL mb_isMaskCancellable;

//展示的持续时间,如果设置该时间,超过该时间就会自动移除.
@property(nonatomic,assign) CGFloat mf_displayTime;
@property(nonatomic,assign) CGRect displayCustomFrame;
@property(nonatomic,assign) JsDisplayPosition displayPosition;
@property(nonatomic,assign) JsDisplayAnimationType displayAnimationType;
@property(nonatomic,assign) JsUndisplayAnimationType undisplayAnimationType;

//距离自动计算的位置的偏移
@property(nonatomic,assign) UIOffset offset_displayPosition;

@property(nonatomic,assign) UIRectCorner muiRectCorner;
@property(nonatomic,assign) CGFloat roundCorner;

//@property(nonatomic,assign) CGFloat mb_maskCancellable;
+ (JsDisplayStyle *)defaulStyle;

@end

NS_ASSUME_NONNULL_END
