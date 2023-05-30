//
//  JsView.h
//  JsUtilitySdk
//
//  Created by Gikki Ares on 2023/5/23.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 1, -1 WRAP_CONTENT
 2, -2 MATCH_PARENT
 3, [0,MAX] custom
 */

FOUNDATION_EXPORT const float MATCH_PARENT;
FOUNDATION_EXPORT const float WRAP_CONTENT;
FOUNDATION_EXPORT const float UNDEFINED;

@interface JsViewVm : NSObject

//declareWith,声明的宽度
@property(nonatomic,assign) int dWidth;
//declareHeight,声明的高度.
@property(nonatomic,assign) int dHeight;

@property(nonatomic,assign) float width;
@property(nonatomic,assign) float height;

@property(nonatomic,strong)UIColor * backgroundColor;
@property(nonatomic,strong)UIColor * borderColor;
@property(nonatomic,assign)float cornderRadius;
@property(nonatomic,assign)float borderWidth;
@property(nonatomic,strong)UIColor * shadowColor;

@end

@interface JsView : UIView
@property(nonatomic,strong)JsViewVm * vm ;

- (instancetype)initWithVm:(JsViewVm *)vm;
-(void)updateVm;
-(void)renderVm;


@property(nonatomic,assign)Boolean isClickable;


//点击事件,子类可重写.默认是调用target.selector;
//rac可以监听该selector;
- (void)onTap:(UIGestureRecognizer *)tap;
- (void)addTapTarget:(id)target selector:(SEL)selector;

@end

NS_ASSUME_NONNULL_END
