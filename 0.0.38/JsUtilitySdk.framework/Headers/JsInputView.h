//
//  GaoInputViewAlpha.h
//  CanvasAlpha
//
//  Created by Gikki Ares on 2021/4/7.
//  Copyright © 2021 vgemv. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JsView.h"

NS_ASSUME_NONNULL_BEGIN

@interface JsInputViewVm : JsViewVm

@property (nonatomic,strong) UIImage * logoImage;
@property (nonatomic,strong)NSString * title;
@property (nonatomic,strong)NSString * message;
@property (nonatomic,strong)NSString * context;

@end

@class JsInputView;
@protocol JsInputViewDelegate <NSObject>

//0 取消
//1 confirm
- (void)jsInputView:(JsInputView *)view clickIndex:(int)index;

@end

@interface JsInputView : JsView

//@property (nonatomic,strong)NSString * title;
//@property (nonatomic,strong)NSString * message;
//@property (nonatomic,strong)NSString * context;

@property(nonatomic,weak)id<JsInputViewDelegate> delegate;
- (JsInputViewVm *)vm;
+ (JsInputView *)newInstanceWithModel:(JsInputView *)vm;

+ (JsInputView *)newInstance;
@end

NS_ASSUME_NONNULL_END
