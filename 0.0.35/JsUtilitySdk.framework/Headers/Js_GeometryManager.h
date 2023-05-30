//
//  GaoViewPositionManager.h
//  DuTe
//
//  Created by Gikki Ares on 2020/12/17.
//

#import <UIKit/UIKit.h>
#import "UIView+Js_Geometry.h"

NS_ASSUME_NONNULL_BEGIN

@interface Js_GeometryManager : NSObject

#pragma mark 1 frame的便捷生成方式.
#pragma mark 1.1 frame的便捷生成方式.
/**指定size和各个偏差的frame,向内为正.*/
+ (CGRect)rectWithInsets:(UIEdgeInsets)insets containerSize:(CGSize)size;
#pragma mark 1.2 frame的便捷生成方式.
	//x,y,size
+ (CGRect)rectWithX:(float)x y:(float)y size:(CGSize)size;

#pragma mark 1.3 frame的便捷生成方式.
//aspetcFit显示方式时,size在rect的frame,size会适当扩展.
+ (CGRect)aspectFitFrameForSize:(CGSize)size inSize:(CGSize)containerSize;
#pragma mark 1.4 frame的便捷生成方式.
+ (CGRect)aspectFillFrameForSize:(CGSize)size inSize:(CGSize)containerSize;


#pragma mark 2 String字符串尺寸
#pragma mark 2.1 单行字符串
#pragma mark 2.1.1 单行字符串size
//计算单行文本的size
+ (CGSize)sizeForOneLineStringWithContext:(NSString *)str font:(UIFont *)font;
#pragma mark 2.1.2 单行字符串size,宽度固定不变,主要是计算高度.
+ (CGSize)sizeForOneLineStringWithFont:(UIFont *)font fixedWidth:(CGFloat)fixedWidth;
#pragma mark 2.1.3 单行字符串size,宽度可变,高度为固定值.
+ (CGSize)sizeForOneLineStringWithContext:(NSString *)str font:(UIFont *)font fixedHeight:(CGFloat)fixedHeight;
#pragma mark 2.1.4 宽度有最大值,高度计算,指定x,y
+ (CGRect)frameForOneLineStringWithContext:(NSString *)str font:(UIFont *)font maxWidth:(CGFloat)maxWidth x:(CGFloat)x y:(CGFloat)y;
#pragma mark 2.1.5 宽度为固定值,高度计算,指定x,y
+ (CGRect)frameForOneLineStringWithFont:(UIFont *)font fixedWidth:(CGFloat)fixedWidth x:(CGFloat)x y:(CGFloat)y;

#pragma mark 2.1.6 宽度为固定值,高度计算,指定x,y
+ (CGRect)centerRectForOneLineString:(NSString *)str withFont:(UIFont *)font offset:(UIOffset)offset inSize:(CGSize)containerSize;

#pragma mark 2.2 多行字符串
#pragma mark 2.2.1 多行字符串,固定宽度,高度计算
+ (CGSize)sizeForMultiLineStringWithContext:(NSString *)str font:(UIFont *)font fixedWidth:(CGFloat)fixedWidth;
#pragma mark 2.2.2 多行字符串,宽度计算,限定最大值,高度计算
#pragma mark 2.2.2.1 多行字符串,宽度计算,限定最大值,高度计算
+ (CGSize)sizeForMultiLineStringWithContext:(NSString *)str font:(UIFont *)font maxWidth:(CGFloat)maxWidth;
#pragma mark 2.2.2.2 多行字符串,宽度计算,限定最大值,高度计算
+ (CGSize)sizeForMultiLineStringWithContext:(NSString *)str font:(UIFont *)font maxWidth:(CGFloat)maxWidth methodTag:(int)methodTag;

#pragma mark 2.2.3 多行字符串,宽度计算,限定最大值,高度计算,限定最大值
+ (CGSize)sizeForMultiLineStringWithContext:(NSString *)str font:(UIFont *)font maxWidth:(CGFloat)maxWidth maxHeight:(CGFloat)maxHeight;

#pragma mark 2.2.4 多行字符串,宽度计算,限定最大值,高度计算,限定最大值
+ (CGSize)sizeForMultiLineStringWithContext:(NSString *)str font:(UIFont *)font maxWidth:(CGFloat)maxWidth isWidthFixed:(BOOL)isWidthFixed maxHeight:(CGFloat)maxHeight minHeight:(CGFloat)minHeight;
	//最全的方法.
#pragma mark 2.2.5 多行字符串,宽度计算,限定最大值,高度计算,限定最大值
/**
 isWidthFixed,是否使用最大宽度.
 minHeight,最小高度值.
 maxHegiht,最大高度值.
 */
+ (CGSize)sizeForMultiLineStringWithContext:(NSString *)str font:(UIFont *)font maxWidth:(CGFloat)maxWidth isWidthFixed:(BOOL)isWidthFixed maxHeight:(CGFloat)maxHeight minHeight:(CGFloat)minHeight methodTag:(int)methodTag;



#pragma mark 3 一些便捷的frame计算.
//宽度是使用固定的宽度
//更新自己的frame,保持一点的位置不变.
+ (CGRect)frameWithNewWidth:(CGFloat)newWidth originFrame:(CGRect)originFrame;
#pragma mark 3.1 size改变,保持anchorPoint的坐标不变
/**
 anchorPoint:[0,1],保持不变的点的坐标.
 */
+ (CGRect)frameWithNewSize:(CGSize)size originFrame:(CGRect)originFrame anchorPoint:(CGPoint)point;


#pragma mark 4 相对父视图的布局
#pragma mark 4.1 左上
+ (CGRect)frameHAlignLeftVAlignTopWithContainerSize:(CGSize)containerSize size:(CGSize)size;
+ (CGRect)frameHAlignLeftVAlignTopWithContainerSize:(CGSize)containerSize size:(CGSize)size offset:(CGPoint) offset;
#pragma mark 4.2 中上
+ (CGRect)frameHAlignCenterVAlignTopWithContainerSize:(CGSize)containerSize size:(CGSize)size;
+ (CGRect)frameHAlignCenterVAlignTopWithContainerSize:(CGSize)containerSize size:(CGSize)size offset:(CGPoint) offset;
#pragma mark 4.3 右上
+ (CGRect)frameHAlignRightVAlignTopWithContainerSize:(CGSize)containerSize size:(CGSize)size;
+ (CGRect)frameHAlignRightVAlignTopWithContainerSize:(CGSize)containerSize size:(CGSize)size offset:(CGPoint) offset;
#pragma mark 4.4 左中
+ (CGRect)frameHAlignLeftVAlignCenterWithContainerSize:(CGSize)containerSize size:(CGSize)size;
+ (CGRect)frameHAlignLeftVAlignCenterWithContainerSize:(CGSize)containerSize size:(CGSize)size offset:(CGPoint) offset;
#pragma mark 4.5 中中
+ (CGRect)frameAlignCenterWithContainerSize:(CGSize)containerSize size:(CGSize)size;
+ (CGRect)frameAlignCenterWithContainerSize:(CGSize)containerSize size:(CGSize)size offset:(CGPoint) offset;
+ (CGRect)frameHAlignCenterVAlignCenterWithContainerSize:(CGSize)containerSize size:(CGSize)size;
+ (CGRect)frameHAlignCenterVAlignCenterWithContainerSize:(CGSize)containerSize size:(CGSize)size offset:(CGPoint) offset;
#pragma mark 4.6 右中
+ (CGRect)frameHAlignRightVAlignCenterWithContainerSize:(CGSize)containerSize size:(CGSize)size;
+ (CGRect)frameHAlignRightVAlignCenterWithContainerSize:(CGSize)containerSize size:(CGSize)size offset:(CGPoint) offset;

#pragma mark 4.7 左下
+ (CGRect)frameHAlignLeftVAlignBottomWithContainerSize:(CGSize)containerSize size:(CGSize)size;
+ (CGRect)frameHAlignLeftVAlignBottomWithContainerSize:(CGSize)containerSize size:(CGSize)size offset:(CGPoint) offset;
#pragma mark 4.8 中下
+ (CGRect)frameHAlignCenterVAlignBottomWithContainerSize:(CGSize)containerSize size:(CGSize)size;
+ (CGRect)frameHAlignCenterVAlignBottomWithContainerSize:(CGSize)containerSize size:(CGSize)size offset:(CGPoint) offset;
#pragma mark 4.9 右下
+ (CGRect)frameHAlignRightVAlignBottomWithContainerSize:(CGSize)containerSize size:(CGSize)size;
+ (CGRect)frameHAlignRightVAlignBottomWithContainerSize:(CGSize)containerSize size:(CGSize)size offset:(CGPoint) offset;

#pragma mark 4.10 相对容器的整体布局
+ (CGRect)frameWithInsets:(UIEdgeInsets)insets containerSize:(CGSize)containerSize;

#pragma mark 5 相对兄弟节点的布局
#pragma mark 5.1 左上
+ (CGRect)frameHLeftVAboveWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame;
+ (CGRect)frameHLeftVAboveWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame offset:(CGPoint) offset;
#pragma mark 5.2 中上
+ (CGRect)frameHCenterVAboveWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame;
+ (CGRect)frameHCenterVAboveWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame offset:(CGPoint) offset;
#pragma mark 5.3 右上
+ (CGRect)frameHRightVAboveWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame;
+ (CGRect)frameHRightVAboveWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame offset:(CGPoint) offset;


#pragma mark 5.4 左中
+ (CGRect)frameHLeftVCenterWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame;
+ (CGRect)frameHLeftVCenterWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame offset:(CGPoint) offset;
#pragma mark 5.5 中中
+ (CGRect)frameHCenterVCenterWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame;
+ (CGRect)frameHCenterVCenterWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame offset:(CGPoint) offset;

	//和siblingFrame中心相同,size不一样.
+ (CGRect)frameCenterlyWithSize:(CGSize)size siblingFrame:(CGRect)siblingFrame;
+ (CGRect)frameCenterlyWithSize:(CGSize)size offset:(UIOffset)offset siblingFrame:(CGRect)siblingFrame;

#pragma mark 5.6 右中
+ (CGRect)frameHRightVCenterWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame;
+ (CGRect)frameHRightVCenterWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame offset:(CGPoint) offset;

#pragma mark 5.7 左下
+ (CGRect)frameHLeftVBelowWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame;
+ (CGRect)frameHLeftVBelowWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame offset:(CGPoint) offset;
#pragma mark 5.8 中下
+ (CGRect)frameHCenterVBelowWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame;
+ (CGRect)frameHCenterVBelowWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame offset:(CGPoint) offset;
#pragma mark 5.9 右下
+ (CGRect)frameHRightVBelowWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame;
+ (CGRect)frameHRightVBelowWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame offset:(CGPoint) offset;

#pragma mark 5.10 兄弟元素frame insets
+ (CGRect)frameWithInsets:(UIEdgeInsets)insets inSiblingFrame:(CGRect)siblingFrame;

#pragma mark 6 H水平参考父视图 V竖直参考兄弟
#pragma mark 6.1 左上
+ (CGRect)frameHAlignLeftVAboveWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame;
+ (CGRect)frameHAlignLeftVAboveWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame offset:(CGPoint) offset;
#pragma mark 6.2 中上
+ (CGRect)frameHAlignCenterVAboveWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame;
+ (CGRect)frameHAlignCenterVAboveWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame offset:(CGPoint) offset;
#pragma mark 6.3 右上
+ (CGRect)frameHAlignRightVAboveWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame;
+ (CGRect)frameHAlignRightVAboveWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame offset:(CGPoint) offset;
#pragma mark 6.4 左中
+ (CGRect)frameHAlignLeftVCenterWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame;
+ (CGRect)frameHAlignLeftVCenterWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame offset:(CGPoint) offset;
#pragma mark 6.5 中中
+ (CGRect)frameHAlignCenterVCenterWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame;
+ (CGRect)frameHAlignCenterVCenterWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame offset:(CGPoint) offset;
#pragma mark 6.6 右中
+ (CGRect)frameHAlignRightVCenterWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame;
+ (CGRect)frameHAlignRightVCenterWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame offset:(CGPoint) offset;

#pragma mark 6.7 左下
+ (CGRect)frameHAlignLeftVBelowWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame;
+ (CGRect)frameHAlignLeftVBelowWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame offset:(CGPoint) offset;
#pragma mark 6.8 中下
+ (CGRect)frameHAlignCenterVBelowWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame;
+ (CGRect)frameHAlignCenterVBelowWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame offset:(CGPoint) offset;
#pragma mark 6.9 右下
+ (CGRect)frameHAlignRightVBelowWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame;
+ (CGRect)frameHAlignRightVBelowWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame offset:(CGPoint) offset;

#pragma mark 7 H水平参考兄弟 V竖直参考父视图
#pragma mark 7.1 左上
+ (CGRect)frameHLeftVAlignTopWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame;
+ (CGRect)frameHLeftVAlignTopWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame offset:(CGPoint) offset;
#pragma mark 7.2 中上
+ (CGRect)frameHCenterVAlignTopWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame;
+ (CGRect)frameHCenterVAlignTopWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame offset:(CGPoint) offset;
#pragma mark 7.3 右上
+ (CGRect)frameHRightVAlignTopWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame;
+ (CGRect)frameHRightVAlignTopWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame offset:(CGPoint) offset;
#pragma mark 7.4 左中
+ (CGRect)frameHLeftVAlignCenterWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame;
+ (CGRect)frameHLeftVAlignCenterWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame offset:(CGPoint) offset;
#pragma mark 7.5 中中
+ (CGRect)frameHCenterVAlignCenterWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame;
+ (CGRect)frameHCenterVAlignCenterWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame offset:(CGPoint) offset;
#pragma mark 7.6 右中
+ (CGRect)frameHRightVAlignCenterWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame;
+ (CGRect)frameHRightVAlignCenterWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame offset:(CGPoint) offset;

#pragma mark 7.7 左下
+ (CGRect)frameHLeftVAlignBottomWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame;
+ (CGRect)frameHLeftVAlignBottomWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame offset:(CGPoint) offset;
#pragma mark 7.8 中下
+ (CGRect)frameHCenterVAlignBottomWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame;
+ (CGRect)frameHCenterVAlignBottomWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame offset:(CGPoint) offset;
#pragma mark 7.9 右下
+ (CGRect)frameHRightVAlignBottomWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame;
+ (CGRect)frameHRightVAlignBottomWithContainerSize:(CGSize)containerSize size:(CGSize)size siblingFrame:(CGRect)siblingFrame offset:(CGPoint) offset;



#pragma mark 8 获取x
+ (CGFloat)xForWidth:(CGFloat)w horizontallyCenterInSize:(CGFloat)containerW;
+ (CGFloat)xForWidth:(CGFloat)w horizontallyCenterInSize:(CGFloat)containerW withOffset:(CGFloat)offset;
+ (CGFloat)xRightFrame:(CGRect)frame offset:(CGFloat)offset;
+ (CGFloat)xLeftFrame:(CGRect)frame width:(CGFloat)w offset:(CGFloat)offset;


#pragma mark 9 获取y
+ (CGFloat)yBelowFrame:(CGRect)frame offset:(CGFloat)spacing;
//在兄弟节点的中间,需要提供自身的size;
+ (CGFloat)yCenterSiblingFrame:(CGRect)siblingFrame forHeight:(CGFloat)height offset:(CGFloat)offset;


#pragma mark 10 常用参数
#pragma mark 10.1 屏幕尺寸
+ (CGSize)screenSize;
#pragma mark 10.1 屏幕宽度
+ (CGFloat)screenWidth;
#pragma mark 10.2 屏幕高度
+ (CGFloat)screenHeight;
#pragma mark 10.3 状态栏高度
+ (CGFloat)statusBarHeight;
#pragma mark 10.4 导航栏高度
+ (CGFloat)navigationBarHeight;
#pragma mark 10.5 导航栏y
+ (CGFloat)navigationBarBottom;
#pragma mark 10.6 安全区域
+ (UIEdgeInsets)safeAreaInsets;
@end

NS_ASSUME_NONNULL_END
