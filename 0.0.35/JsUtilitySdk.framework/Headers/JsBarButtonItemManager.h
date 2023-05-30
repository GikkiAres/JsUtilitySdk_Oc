//
//  JsBarButtonItemManager.h
//
//  Created by Gikki Ares on 2020/12/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsBarButtonItemManager : NSObject

+ (UIBarButtonItem *) barButtonItemWithImage:(UIImage *)image width:(CGFloat)width target:(nullable id)target action:(nullable SEL)sel;

@end

NS_ASSUME_NONNULL_END
