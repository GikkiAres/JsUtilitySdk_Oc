//
//  JsLogListViewController.h
//  JsUtilitySdk
//
//  Created by Gikki Ares on 2022/12/21.
//

#import <UIKit/UIKit.h>
#import "JsViewController.h"
#import "JsLogManager.h"
NS_ASSUME_NONNULL_BEGIN


@interface JsLogListViewControllerVm : JsViewControllerVm

@property(nonatomic,strong)NSString * logDirPath;

@end


@interface JsLogListViewController : JsViewController



@end

NS_ASSUME_NONNULL_END
