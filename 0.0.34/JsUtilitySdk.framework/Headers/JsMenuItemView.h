//
//  GaoCvImageLabelCell.h
//  OpenglDemo
//
//  Created by Gikki Ares on 2020/6/24.
//



#import <UIKit/UIKit.h>
#import "JsMenuItemVm.h"
#define Prefix(x) Js##x

NS_ASSUME_NONNULL_BEGIN



@interface Prefix(MenuItemView) : UICollectionViewCell
{
	JsMenuItemVm * _vm;
}

@property(nonatomic,strong) JsMenuItemVm * vm;

- (void)setupUi;

@end

NS_ASSUME_NONNULL_END
