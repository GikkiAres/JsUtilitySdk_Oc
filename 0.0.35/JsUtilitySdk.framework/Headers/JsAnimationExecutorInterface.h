//
//  JsAnimationExecutorInterface.h
//  MpaClientIos
//
//  Created by Gikki Ares on 2023/4/21.
//  Copyright © 2023 Yach. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol JsAnimationExecutorInterface <NSObject>

//以指定速度旋转.
- (id)rotateView:(UIView *)view atSpeed:(float)speed;
- (void)stopRotate:(UIView *)view;
//震动view,以及设备震动.
-(void)shakeView:(UIView *)view withEth:(BOOL)b;
@end

NS_ASSUME_NONNULL_END
