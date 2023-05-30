//
//  JsSecretButton.h
//  productLine
//
//  Created by GikkiAres on 2019/3/19.
//  Copyright © 2019 base. All rights reserved.
//

//不需要显式图像,不负责ui部分的内容.

#import <UIKit/UIKit.h>

@class JsSecretButton;
@protocol JsSecretButtonDelegate <NSObject>
@optional
- (void)jsSecretButtonNormalTap:(JsSecretButton *)btn;
- (void)jsSecretButtonSecretTap:(JsSecretButton *)btn;


@end



@interface JsSecretButton : UIView

//@property(nonatomic,assign) NSInteger tapCount;

@property(nonatomic,weak) id<JsSecretButtonDelegate> delegate;
@property (nonatomic,strong) void(^secretClickCallback)(void);
@property (nonatomic,strong) void(^normalClickCallback)(void);

- (void)setSecretTapCount:(int)count;

@end

