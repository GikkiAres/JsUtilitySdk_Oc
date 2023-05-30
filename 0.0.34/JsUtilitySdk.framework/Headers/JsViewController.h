//
//  JsViewController.h
//  JsUtilitySdk
//
//  Created by Gikki Ares on 2023/5/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsViewControllerVm : NSObject

@property(nonatomic,strong)UIColor * backgroundColor;

@end

@interface JsViewController : UIViewController

@property(nonatomic,strong)JsViewControllerVm * vm;
-(void)updateVm;
//仅提供给子类重载,不能手动调用,如何声明?
- (void)renderVm;
@end

NS_ASSUME_NONNULL_END
