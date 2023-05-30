//
//  GaoImageView.h
//  DuTe
//
//  Created by Gikki Ares on 2020/12/20.
//  Copyright © 2020 vgemv. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JsView.h"
NS_ASSUME_NONNULL_BEGIN

@interface JsImageView : UIView

@property(nonatomic,assign) BOOL isCircle;
@property(nonatomic,assign)BOOL isClickable;


//点击事件用addTarget来处理.

- (void)setImage:(UIImage *)image;

@end

NS_ASSUME_NONNULL_END
