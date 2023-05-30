//
//  UIImageView+JsWebManager.h
//  JsUtilitySdk
//
//  Created by Gikki Ares on 2022/12/20.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImageView (JsWebManager)

-(void)js_setImageWithUrlString:(NSString *)urlString placeholderImage:(UIImage *)image;

@end

NS_ASSUME_NONNULL_END
