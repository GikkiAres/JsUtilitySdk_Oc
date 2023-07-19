//
//  JsTextFiled.h
//  MpaClientIos
//
//  Created by Gikki Ares on 2023/4/8.
//  Copyright © 2023 Yach. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JsTextFieldVm.h"
NS_ASSUME_NONNULL_BEGIN


@class JsTextField;
@protocol JsTextFieldDelegate <UITextFieldDelegate>
-(BOOL)jsTextField:(JsTextField *)tf isContentValid:(NSString *)content;
-(BOOL)jsTextFieldShouldReturn:(JsTextField *)tf;
@end

@interface JsTextField : UIView

@property(nonatomic,strong) JsTextFieldVm * vm;
@property(nonatomic,weak)id<JsTextFieldDelegate> delegate;
@property(nonatomic,strong) NSString * text;
- (UITextField *)textField;

//推荐高度为80
+(float)advisedHeight;

- (void)showReminder:(BOOL)b shake:(BOOL)b2;
- (BOOL)isContentValid;
- (void)updateVmIfNeeded;
@end

NS_ASSUME_NONNULL_END
