//
//  JsMenuViewItemVm.h
//  JsoUtilitySdk
//
//  Created by Gikki Ares on 2021/8/4.
//

#import <Foundation/Foundation.h>
#import "JsMenuItemStyle.h"

NS_ASSUME_NONNULL_BEGIN

@interface JsMenuItemVm : NSObject

@property (nonatomic,assign)BOOL isSelected;

//Model,是选中和不选中状态都不变的数据.
//本地图片
@property (nonatomic,strong)NSString * imageName;
//网络图片
@property (nonatomic,strong)NSString * imageUrl;
//标题.
@property (nonatomic,strong)NSString * title;

//style,是在选中或者不选中状态不同的时候会改变的数据.
@property (nonatomic,strong)JsMenuItemStyle * unselectedStyle;
@property (nonatomic,strong)JsMenuItemStyle * selectedStyle;

- (instancetype)initWithTitle:(NSString *)title;
- (instancetype)initWithTitle:(NSString *)title imageName:(nullable NSString *)imageName;
- (instancetype)initWithTitle:(NSString *)title imageUrl:(nullable NSString *)imageUrl;

- (JsMenuItemStyle *)currentStyle;

@end

NS_ASSUME_NONNULL_END
