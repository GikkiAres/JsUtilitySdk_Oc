//
//  JsAnimationManager.h
//  MpaClientIos
//
//  Created by Gikki Ares on 2023/4/21.
//  Copyright © 2023 Yach. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JsAnimationExecutorInterface.h"
#import "UIView+JsAnimation.h"
NS_ASSUME_NONNULL_BEGIN

@interface JsAnimationManager : NSObject

+(instancetype)sharedInstance;

/**
 speed:每秒旋转的角度.
 */
- (void)rotateView:(UIView *)view atSpeed:(float)speed;


-(void)shakeView:(UIView *)view withEth:(BOOL)b;

- (void)stopRotate:(UIView *)view;

@end

NS_ASSUME_NONNULL_END
