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
@property(nonatomic,strong)UIColor * titleColor;

@end

@interface JsViewController : UIViewController

@property(nonatomic,strong)JsViewControllerVm * vm;


-(void)updateVm;

//仅提供给子类重载,不能手动调用父类的,如何声明,protected
- (void)renderVm;
@end

NS_ASSUME_NONNULL_END
