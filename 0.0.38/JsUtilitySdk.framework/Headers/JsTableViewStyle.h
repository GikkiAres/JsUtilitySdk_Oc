//
//  JsTableViewStyle.h
//  JsoUtilitySdk
//
//  Created by Gikki Ares on 2021/8/6.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsTableViewStyle : NSObject

//tableView的背景色,refresh header和footer也是该颜色.
@property(nonatomic,strong)UIColor * mColor_tableViewBackground;
//默认的空视图的背景色
@property(nonatomic,strong)UIColor * mColor_defaultNoDataViewBackground;

/**
 数据为空时,是否显示EmptyView;
 */
@property(nonatomic,assign)BOOL mb_isShowEmptyView;

/**
 是否显示滚动条
 */
@property(nonatomic,assign)BOOL mb_isShowVerticalScrollBar;

+ (JsTableViewStyle *)defaultStyle;
@end

NS_ASSUME_NONNULL_END
