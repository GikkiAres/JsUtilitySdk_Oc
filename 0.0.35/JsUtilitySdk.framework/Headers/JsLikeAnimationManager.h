//
//  GaoLikeAnimationView.h
//  DuTe
//
//  Created by Gikki Ares on 2020/12/22.
//  Copyright © 2020 vgemv. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN



@interface JsLikeAnimationManager : NSObject

+ (JsLikeAnimationManager *)sharedInstance;

- (void)showMoreLoveAnimationAtView:(UIView *)view fromPosition:(CGPoint)position;
- (void)showMoreLoveAnimateFromView:(UIView *)fromView addToView:(UIView *)addToView;


@end

NS_ASSUME_NONNULL_END
