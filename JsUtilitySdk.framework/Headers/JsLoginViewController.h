//
//  JsLoginViewController.h
//  JsUtilitySdk
//
//  Created by Gikki Ares on 2023/4/8.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class JsLoginViewController;
@protocol JsLoginViewControllerDelegate <NSObject>

- (BOOL)jsLoginViewControllerWillLogin:(JsLoginViewController *)vc;

@end

@interface JsLoginViewController : UIViewController

@property(nonatomic,weak)id<JsLoginViewControllerDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
