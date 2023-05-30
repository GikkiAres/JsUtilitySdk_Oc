//
//  GaoImageBrowserVm.h
//  DuTe
//
//  Created by Gikki Ares on 2020/12/24.
//  Copyright © 2020 vgemv. All rights reserved.
//

/*
 Vm的职责:
 1,关联model
 2,存储所有view的显示相关联属性
 3,提供所有view的frame.和需要计算的值的结果.直接给view使用,计算在vm中实现.
 
 4,和model无关的,不变的数据,用类方法提供;
 5,和model关联会改变的数据,用属性提供.
 */

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsImageBrowserViewVm : NSObject

@property(nonatomic,assign) CGFloat leading_indicatorLabel;
@property(nonatomic,assign) CGFloat bottom_indicatorLabel;
@property(nonatomic,assign) CGFloat mf_w_indicatorLabel;
@property(nonatomic,assign) CGFloat mf_h_indicatorLabel;

@property(nonatomic,assign) CGFloat trailing_downloadBtn;
@property(nonatomic,assign) CGFloat bottom_downloadBtn;
@property(nonatomic,assign) CGFloat mf_w_downloadBtn;
@property(nonatomic,assign) CGFloat mf_h_downloadBtn;


@property(nonatomic,assign) CGFloat leading_closeBtn;
@property(nonatomic,assign) CGFloat top_closeBtn;


+ (instancetype)defaultInstance;
+ (CGRect)closeBtnFrame;
@end

NS_ASSUME_NONNULL_END
