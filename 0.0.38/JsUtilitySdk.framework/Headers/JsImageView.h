//
//  JsImageView.h
//  JsUtilitySdk
//
//  Created by Gikki Ares on 2020/12/20.
//  Copyright © 2020 vgemv. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JsView.h"
NS_ASSUME_NONNULL_BEGIN

@interface JsImageViewVm : JsViewVm

@property(nonatomic,strong) UIImage * image;
@property(nonatomic,assign) CGSize imageSize;

@end

@interface JsImageView : JsView

@property(nonatomic,assign) BOOL isCircle;
@property(nonatomic,strong)JsImageViewVm * vm;

//点击事件用addTarget来处理.
- (void)setImage:(UIImage *)image;

@end

NS_ASSUME_NONNULL_END
