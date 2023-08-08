//
//  JsMessageReminderView.h
//  JsUtilitySdk
//
//  Created by GikkiAres on 2022/4/22.
//  Copyright © 2020 base. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JsMessageReminderViewVm.h"
#import "JsView.h"


NS_ASSUME_NONNULL_BEGIN


@interface JsMessageReminderView : JsView
- (instancetype)initWithVm:(JsMessageReminderViewVm *)vm;
@property(nonatomic,strong)JsMessageReminderViewVm * vm;
//只展示文字.
- (instancetype)initWithMessage:(NSString *)message;
//展示文字和默认的信息类别图片.
- (instancetype)initWithMessage:(NSString *)message contentType:(JsMessageReminderContentType)contentType;
//展示文字和自定义图片.
- (instancetype)initWithMessage:(NSString *)message image:( UIImage * _Nullable )image NS_UNAVAILABLE; 

- (void)setImageInset:(UIEdgeInsets)insets;

- (void)setMessage:(NSString *)message;
- (void)setMessage:(NSString *)message font:(UIFont *)font;
- (void)setImage:(UIImage *)image;

@end

NS_ASSUME_NONNULL_END
