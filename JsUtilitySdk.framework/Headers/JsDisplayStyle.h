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

#define Prefix(x) Js##x

NS_ASSUME_NONNULL_BEGIN
	//typedef void(^maskBtnBlock)(void);
typedef NS_ENUM(NSUInteger, Prefix(DisplayPosition)) {
	Prefix(DisplayPositionCenter),
	Prefix(DisplayPositionRight),
	Prefix(DisplayPositionLeft),
	Prefix(DisplayPositionBottom),
	Prefix(DisplayPositionTop),
		//自定义目标frame
	Prefix(DisplayPositionCustom)
};

typedef NS_ENUM(NSUInteger, Prefix(DisplayAnimationType)) {
		//没有动画
	Prefix(DisplayAnimationTypeNone),
		//从右滑动到左
	Prefix(DisplayAnimationTypeMoveFromRight),
		//从最底端滑上来
	Prefix(DisplayAnimationTypeMoveFromBottom),
		//从最顶端滑下来
	Prefix(DisplayAnimationTypeMoveFromTop),
		//从放大,暗淡 到正常,显示
	Prefix(DisplayAnimationTypeShrink)
};

typedef NS_ENUM(NSUInteger, Prefix(UndisplayAnimationType)) {
	Prefix(UndisplayAnimationTypeNone),
		//从当前位置移动到左边消失;
	Prefix(UndisplayAnimationTypeMoveToLeft),
		//从当前位置移动到右边消失;
	Prefix(UndisplayAnimationTypeMoveToRight),
		//滑到最底端;
	Prefix(UndisplayAnimationTypeMoveToBottom),
		//滑到最顶端
	Prefix(UndisplayAnimationTypeMoveToTop)
};

	//typedef struct GaoDisplayRoundCorner {
	//	float leftTop;
	//	float rightTop;
	//	float leftBottom;
	//	float rightBottom;
	//}GaoDisplayRoundCorner;


@interface Prefix(DisplayStyle) : NSObject

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
@property(nonatomic,assign) Prefix(DisplayPosition) displayPosition;
@property(nonatomic,assign) Prefix(DisplayAnimationType) displayAnimationType;
@property(nonatomic,assign) Prefix(UndisplayAnimationType) undisplayAnimationType;

@property(nonatomic,assign) UIOffset offset_displayPosition;

@property(nonatomic,assign) UIRectCorner muiRectCorner;
@property(nonatomic,assign) CGFloat roundCorner;


	//@property(nonatomic,assign) CGFloat mb_maskCancellable;

+ (Prefix(DisplayStyle) *)defaulStyle;

@end

NS_ASSUME_NONNULL_END
