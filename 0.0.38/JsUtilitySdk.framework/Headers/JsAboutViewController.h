//
//  AboutViewController.h
//  MixedPlayerSdkDemo_Dev
//
//  Created by Gikki Ares on 2022/12/19.
//

#import <UIKit/UIKit.h>
#import "JsAboutViewControllerVm.h"
NS_ASSUME_NONNULL_BEGIN

@interface JsAboutViewController : UIViewController

@property(nonatomic,strong)JsAboutViewControllerVm * vm;
-(void)updateVm;

@end

NS_ASSUME_NONNULL_END
