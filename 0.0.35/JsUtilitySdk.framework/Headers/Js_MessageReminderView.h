//
//  Js_MessageReminderView.h
//  JsoUtilitySdk
//
//  Created by GikkiAres on 2022/4/22.
//  Copyright © 2020 base. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JsMessageReminderViewVm.h"


NS_ASSUME_NONNULL_BEGIN

//silent则只有文字提示.
typedef NS_ENUM(NSUInteger, Js_MessageReminderType) {
	Js_MessageReminderTypeSilent,
	Js_MessageReminderTypeInfo,
	Js_MessageReminderTypeWarn,
	Js_MessageReminderTypeSuccess,
	Js_MessageReminderTypeError
};


@interface Js_MessageReminderView : UIView

+ (Js_MessageReminderView *)newInstanceWithMessage:(NSString *)message;

+ (Js_MessageReminderView *)newInstanceWithMessage:(NSString *)message image:(UIImage *)image;
- (instancetype)initWithMessage:(NSString *)message image:(UIImage *)image;
- (instancetype)initWithMessage:(NSString *)message reminderType:(Js_MessageReminderType)reminderType;
- (void)setImageInset:(UIEdgeInsets)insets;

- (JsMessageReminderViewVm *)vm;

- (void)setMessage:(NSString *)message;
- (void)setMessage:(NSString *)message font:(UIFont *)font;
- (void)setImage:(UIImage *)image;

@end

NS_ASSUME_NONNULL_END
