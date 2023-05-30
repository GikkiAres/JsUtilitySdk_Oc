//
//  GaoButtonLiiVm.h
//
//  Created by Gikki Ares on 2020/12/18.
//
/**
 Parameter是直接的参数.
 所有的UI参数都放在这里.
 
 VM负责管理控件的Rect,所有和布局相关的量,全部放到vm里中.
 todo
 1, 提供几种style,是常用的布局模型;
 2,
 */

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#define Prefix(x) Js##x

@interface Prefix(ButtonLiiVm) : NSObject
	//按钮本身是否是圆形的.
@property(nonatomic,assign)BOOL isCircle;

	//背景颜色
@property(nonatomic,strong)UIColor * backgroundColor;
@property(nonatomic,assign)CGFloat cornerRaidus;


//ForegroundImage
//ImageViewFrame
//ForegroundImage
@property(nonatomic,assign) CGRect foregroundImageViewFrame;
//Image
@property(nonatomic,strong) UIImage * foregroundImage;
@property (nonatomic,assign) BOOL isForegroundImageCircle;

//BackgroundImage
//ImageViewFrame
//ForegroundImage
@property(nonatomic,assign) CGRect backgroundImageViewFrame;
@property(nonatomic,strong) UIImage * backgroundImage;


//label的frame
@property(nonatomic,strong)UIColor * labelTextColor;
@property(nonatomic,strong)UIFont * labelFont;
@property(nonatomic,assign)NSTextAlignment mTextAlignment;
@property(nonatomic,assign) CGRect labelFrame;

@property(nonatomic,assign)NSStringDrawingOptions drawingOptions;

@property(nonatomic,strong)NSString * text;
@property(nullable,nonatomic,strong)NSAttributedString * atext;



	//轮廓线
@property(nonatomic,assign) CGFloat borderWidth;
	//轮廓颜色
@property(nonatomic,strong) UIColor * borderColor;

//按钮的frame
@property(nonatomic,assign) CGRect  btnFrame;


//由外界赋值的size.
@property(nonatomic,assign) CGSize size;
//根据vm当前状态计算出来的frame?但是没有父视图,是不能确定frame的.只能确定size!
@property(nonatomic,assign) CGSize computedSize;

+(Prefix(ButtonLiiVm) *)sharedInstance;
+(Prefix(ButtonLiiVm) *)defaultVm;
+(Prefix(ButtonLiiVm) *)defaultSelectedVm;



@end

NS_ASSUME_NONNULL_END
