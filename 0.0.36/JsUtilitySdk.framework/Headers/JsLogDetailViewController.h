//
//  JsLogDetailViewController.h
//  JsUtilitySdk
//
//  Created by Gikki Ares on 2022/12/21.
//

#import <UIKit/UIKit.h>
#import "JsViewController.h"
#import "JsFile.h"

NS_ASSUME_NONNULL_BEGIN

@interface JsLogDetailViewController : JsViewController

@property(nonatomic,strong) JsFile * file;
@property(nonatomic,strong) NSString * content;
@end

NS_ASSUME_NONNULL_END
