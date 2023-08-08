//
//  JsBarButtonItem.h
//  MpaClientIos
//
//  Created by Gikki Ares on 2023/4/21.
//  Copyright © 2023 Yach. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsBarButtonItem : UIBarButtonItem

- (instancetype)initWithImage:(UIImage *)image target:(id)target action:(SEL)action;
- (instancetype)initWithImage:(UIImage *)image size:(CGSize)size target:(id)target action:(SEL)action;
+ (UIBarButtonItem *)standardBackBarButtonItemWithTitle:(NSString *)title target:(id)target action:(SEL)action;
@end

NS_ASSUME_NONNULL_END
