//
//  RippleWaveView.h
//  AnimationDemo
//
//  Created by Gikki Ares on 2021/4/30.
//  Copyright © 2021 vgemv. All rights reserved.
//

#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface UIView (JsAnimation)

- (void)js_addWaveAnimationWithWaveColor:(UIColor *)waveColor;
- (void)js_removeWaveAnimation;

@end

NS_ASSUME_NONNULL_END
