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
#import <JsUtilitySdk/JsTextView.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsBottomInputBarVm : NSObject

//背景颜色
@property(nonatomic,strong)UIColor * normalBackgroundColor;

//弹起来的时候的背景颜色
@property(nonatomic,strong)UIColor * expanedBackgroundColor;

@property(nonatomic,assign)CGFloat mf_barWidth;
//@property(nonatomic,assign)CGFloat mf_barHeight;

//表情按钮大小
@property(nonatomic,assign)CGFloat mf_expressionWidth;
@property(nonatomic,assign)CGFloat mf_expressionHeight;

//声音按钮大小
@property(nonatomic,assign)CGFloat mf_voiceWidth;
@property(nonatomic,assign)CGFloat mf_voiceHeight;


//自己的frame,应该要保持一致.
//@property(nonatomic,assign)CGRect frame;

//view的frame只保留size信息. frame的话,不由vm来设置.
@property(nonatomic,assign)CGSize size;

//当前的文本.
@property(nonatomic,strong)NSString * content;

//当前的placeholde
@property(nonatomic,strong)NSString * placeholder;

@property(nonatomic,assign)NSStringDrawingOptions drawingOptions;




@property(nonatomic,assign) CGRect expressionBtnFrame;
@property(nonatomic,assign) CGRect voiceBtnFrame;
@property(nonatomic,assign) CGRect sendBtnFrame;


//表情输入
@property(nonatomic,assign) CGSize expressionViewSize;
@property(nonatomic,assign) CGRect expressionViewFrame;
@property(nonatomic,assign) CGRect voiceInputViewFrame;
@property(nonatomic,assign) BOOL isVoiceDisplay;
@property(nonatomic,assign) BOOL isExpressionDisplay;
@property(nonatomic,assign) BOOL isKeyboardDisplay;
@property(nonatomic,assign) BOOL isEmpty;
//是否扩展
@property(nonatomic,assign) BOOL isExpaneded;

+(JsBottomInputBarVm *)sharedInstance;

@property(nonatomic,assign)CGRect textViewFrame;
@property(nonatomic,strong) JsTextViewVm * textViewVm;
@property(nonatomic,assign)float textViewMaxHeight;


//如果设置frame,origin有效,size无效,使用computedSize.
@property(nonatomic,assign)CGSize computedSize;

//头部区域的高度,text+top+height;
@property(nonatomic,assign)CGFloat headerHeight;

//键盘的高度.当键盘显示时,需要使用该高度.
@property(nonatomic,assign)CGFloat keyboardHegiht;


- (void)doCalculate;
+ (float) btnImageSize;
@end

NS_ASSUME_NONNULL_END
