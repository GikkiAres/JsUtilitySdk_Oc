	//
	//  GaoBottomBar.h
	//  DuTe
	//
	//  Created by Gikki Ares on 2020/12/21.
	//  Copyright © 2020 vgemv. All rights reserved.
	//

#import <UIKit/UIKit.h>
#import "JsBottomInputBarVm.h"

NS_ASSUME_NONNULL_BEGIN

@class JsBottomInputBar;
@protocol JsBottomInputBarDelegate <NSObject>

	//点击发送按钮
-(void)jsBottomBar:(JsBottomInputBar *)bar sendMessage:(NSString *)message;
	//点击取消,或者done,缩回键盘.
-(void)jsBottomBar:(JsBottomInputBar *)bar finishEditingWithMessage:(NSString *)message;


@end



@interface JsBottomInputBar : UIView

@property(nonatomic,weak)id<JsBottomInputBarDelegate> delegate;
@property(nonatomic,strong) JsBottomInputBarVm * vm;


- (void)setDraftText:(NSString *)text;
- (JsBottomInputBarVm *)getUiParameter;
- (NSString *)draftText;
- (void)clickVoiceButton;
- (void)updatePlaceholder:(NSString *)placeholder;
- (void)awakeKeyboard;
@end

NS_ASSUME_NONNULL_END
