//
//  GaAlertManager.h
//  CameraLiveDemo
//
//  Created by Gikki Ares on 2020/6/12.
//

#import <UIKit/UIKit.h>
#import "UIViewController+JsAlertManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface JsAlertManager : NSObject

+ (UIAlertController *)confirmAlertWithMessage:(NSString *)message;
+ (void)showConfirmAlertAtCurrentViewControllerWithMessage:(NSString *)message;
+ (void)showAlert:(UIAlertController *)ac;
+ (UIAlertController *)textFieldAlertWithTitle:(NSString *)title message:(NSString *)message completion:(void(^)(NSString * context))completion;
+ (UIAlertController *)textFieldAlertWithTitle:(NSString *)title message:(NSString *)message placeholderArray:(NSArray *)placeholderArray defaultValueArray:(NSArray *)defaultValueArray confirmHandler:(void(^)(NSArray * arr))confirmHandler;
@end

NS_ASSUME_NONNULL_END
