//
//  GaoNavigationBar.h
//  DuTe
//
//  Created by Gikki Ares on 2020/12/21.
//  Copyright © 2020 vgemv. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class JsNavigationBar;
@protocol JsNavigationBarDelegate <NSObject>

- (void)jsNavigationBarClickBack:(JsNavigationBar *)bar;

@end

@interface JsNavigationBar : UIView

- (void)setTitle:(NSString *)title;
- (void)positionBackBtnWithLeading:(CGFloat)leading size:(CGSize)size;

@property(nonatomic,weak)id<JsNavigationBarDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
