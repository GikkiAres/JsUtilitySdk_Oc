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
#import "JsColorManager.h"

NS_ASSUME_NONNULL_BEGIN





@interface JsBottomInputBarBetaVm : NSObject

//背景颜色
@property(nonatomic,strong)UIColor * color_bg;


@property(nonatomic,assign)CGFloat mf_barWidth;
@property(nonatomic,assign)CGFloat mf_barHeight;

@property(nonatomic,assign)CGFloat mf_likeTrailing;
@property(nonatomic,assign)CGFloat mf_likeWidth;
@property(nonatomic,assign)CGFloat mf_likeHeight;

@property(nonatomic,assign)CGFloat mf_btnSpacing;
@property(nonatomic,assign)CGFloat mf_shareWidth;
@property(nonatomic,assign)CGFloat mf_shareHeight;

@property(nonatomic,assign)CGFloat mf_pickWidth;
@property(nonatomic,assign)CGFloat mf_pickHeight;


@property(nonatomic,assign)CGFloat mf_seperatorTop;
@property(nonatomic,assign)CGFloat mf_seperatorSpacing;
@property(nonatomic,assign)CGFloat mf_seperatorWidth;

@property(nonatomic,assign)CGFloat mf_expressionWidth;
@property(nonatomic,assign)CGFloat mf_expressionHeight;

@property(nonatomic,assign)CGFloat mf_voiceWidth;
@property(nonatomic,assign)CGFloat mf_voiceHeight;


//
@property(nonatomic,assign)BOOL mb_isPicked;
@property(nonatomic,assign)int mi_likeCount;


//Placeholder文字
@property(nonatomic,strong)NSString * mstr_placeholder;

@property(nonatomic,strong)NSString * mstr_text;


@property(nonatomic,assign)NSStringDrawingOptions drawingOptions;


-(CGRect)likeBtnFrame;
- (CGRect)shareBtnFrame;
- (CGRect)pickBtnFrame;
- (CGRect)expressionBtnFrame;
- (CGRect)voiceBtnFrame;

- (CGSize)wrapperContentSize;
@end

NS_ASSUME_NONNULL_END
