//
//  UIView+GaPosition.h
//  DuTe
//
//  Created by Gikki Ares on 2020/12/17.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (Js_Geometry)

- (void)ga_setX:(CGFloat)x;
- (void)ga_setY:(CGFloat)y;
- (void)ga_setW:(CGFloat)w;
- (void)ga_setH:(CGFloat)h;
- (void)positionCenterHorizontally;
- (void)positionCenterVertically;
- (void)positionCenter;
- (void)positionCenterWithOffset:(CGPoint)offset;

- (CGRect)screenBounds;

//offset距离左下角的距离.
- (void)absolutePositonAtLeftBottomWithOffset:(CGPoint)offset size:(CGSize)size;

- (void)absolutePositonAtRightBottomWithOffset:(CGPoint)offset;
- (void)absolutePositonAtRightBottomWithOffset:(CGPoint)offset size:(CGSize)size;

- (void)absolutePositonAtLeftTopWithOffset:(CGPoint)offset size:(CGSize)size;

- (CGFloat)superViewHeight;
- (CGFloat)superViewWidth;
@end

NS_ASSUME_NONNULL_END
