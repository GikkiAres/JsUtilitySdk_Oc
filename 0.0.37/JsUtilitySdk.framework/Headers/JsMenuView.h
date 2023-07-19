//
//  JsMenuView.h
//  JsoUtilitySdkDemo
//
//  Created by Gikki Ares on 2020/9/25.
//

#import <UIKit/UIKit.h>
#import "JsMenuView.h"
#import "JsMenuItemVm.h"
#import "JsMenuItemStyle.h"
#import "JsMenuItemView.h"
#import "JsMenuViewStyle.h"

/**
 
 样式设置方案:
 1,用一个默认的,用户设置后,刷新;
 2,使用代理获取,如果没有实现代理,则使用默认的.
 使用2的好处在于,如果有多个需要设置的属性时,他们的先后顺序,是可以控制的;
 如果采用方案1,则顺序是不确定的.
 
 */

NS_ASSUME_NONNULL_BEGIN




@class JsMenuView;
@protocol JsMenuViewDelegate <NSObject>

@required
- (NSArray <JsMenuItemVm *>*)jsMenuViewSetDatasource:(JsMenuView *)view;

@optional
//组件的时间,需要把组件的序号和组件vm传递出去.
- (void)jsMenuView:(JsMenuView *)view clickMenuAtIndex:(int)index vm:(JsMenuItemVm *)vm;
- (__kindof JsMenuItemView *)jsMenuView:(JsMenuView *)menuView viewForItemAtIndexPath:(NSIndexPath *)index vm:(JsMenuItemVm *)vm;


//设置menuview的整体Style
//设置初始选择项
- (JsMenuViewStyle *)jsMenuViewSetStyle:(JsMenuView *)view;

/**
 返回一个需要注册的类.
 可以是一个class
 也可以是一个nib.
 */
- (UINib *)_jsMenuViewGetRegisterCellNib:(JsMenuView *)menuView;
- (JsMenuItemView *)_jsMenuViewGetRegisterCellClass:(JsMenuView *)menuView;



//CellSelectedStyle
- (JsMenuItemStyle *)_jsMenuView:(JsMenuView *)menuView setSelectedStyleForCellAtIndex:(int)index;

//设置每个cell的sytle
- (JsMenuItemStyle *)_jsMenuView:(JsMenuView *)menuView setUnselectedStyleForCellAtIndex:(int)index;

@end

@interface JsMenuView : UIView

@property (nonatomic,assign)id<JsMenuViewDelegate> delegate;



//只要设置model,就可以显示了.
//- (void)setModelArray:(NSArray <GaoCvcIlModel *>*)arr;

/**
 重新加载数据和显示
 应该重新获取数据源,然后刷新.
 */
- (void)reload;
- (void)unselect;
- (void)selectItemAtIndex:(int)i_index_selected;
- (nullable NSNumber *)selectedIndex;
- (UICollectionView *)collectionView;

@end

NS_ASSUME_NONNULL_END
