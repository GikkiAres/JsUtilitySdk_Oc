//
//  GaoTableView.h
//  DuTe
//
//  Created by Gikki Ares on 2020/12/15.
//  Copyright © 2020 vgemv. All rights reserved.
//

/**
 依赖: MJRefresh
 1,下拉刷新
 2,上拉加载
 3,空白占位图
 
 noDataView;
 emptyView;
 属于外部组件,使用代理的方式选择性提供.
 没有也能工作;
 有也能工作;
 
 如何把下拉刷新和上拉加载两个组件和tableview本身隔离开???
 让两个都可以灵活替换???
 
 GaoTableView只是一个组合.
 里面的tableView还需要拿出来配置??
 */

#import <UIKit/UIKit.h>
#import "JsTableViewStyle.h"

NS_ASSUME_NONNULL_BEGIN

@class JsTableView;
@protocol JsTableViewDelegate <UITableViewDataSource,UITableViewDelegate>

@optional

/**
 没有数据时,显示的view
 */
- (UIView *)jsTableViewSetNoDataView:(JsTableView *)tableView;
/**
 JsTableViewStyle的样式.
 */
- (JsTableViewStyle *)jsTableViewSetStyle:(JsTableView *)tableView;

/**
 代理处理完之后,需要调用[tableView finishRefresh];
 */

- (void)jsTableViewRefresh:(JsTableView *)tableView;

/**
 //代理处理完之后,需要调用[tableView finishLoadMore]; page,1 based pageCount;
 */
- (void)jsTableViewLoadMore:(JsTableView *)tableView forPage:(int)page;


@end


@interface JsTableView : UIView

@property(nonatomic,weak) id<JsTableViewDelegate,UITableViewDelegate,UITableViewDataSource> jsDelegate;

@property(nonatomic,strong,readonly) UITableView * tableView;

//只控制Header,footer也页数.
//如果成功,已加载页数为1,只在有数据情况下设为YES.
//isSuccess,获取数据是否成功.
/**
 isSuccess
	YES:
		dataCount > 0
			* 已加载页数为1
			* 结束刷新
			* 结束下拉加载且可以加载.
 
		dataCount = 0
			* 已加载页数为0
			* 结束刷新
			* 结束下拉加载且不可以加载.
			* 如果有EmptyView应该显示EmptyView
 
	NO:仅仅结束刷新,其余状态不改变
 */
- (void)finishRefreshWithIsSuccess:(BOOL)isSuccess dataCount:(int)dataCount;

//刷新数据并结束加载ui.
//如果获取到数据就应该设置为YES,灭有获取到数据设置为NO;
/**
 isSuccess:此次加载是否成功,如果成功
	YES:将根据dataCount设置是否还有更多的数据. 0表示没有更多数据,已加载页数不变;非0,表示还有数据,已加载页+1;
	NO:仅仅结束加载,其余状态不发生改变.
 */
- (void)finishLoadMoreWithIsSuccess:(BOOL)isSuccess dataCount:(int)dataCount;

////标志没有数据,上拉不进行加载,显示没有数据
- (void)setNoMoreData;

- (int)loadedPageCount;

- (void)reloadData;

@end

NS_ASSUME_NONNULL_END
