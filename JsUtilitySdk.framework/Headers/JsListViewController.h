	//
	//  HomeViewController.h
	//  GaoDisplayManagerDemo
	//
	//  Created by Gikki Ares on 2020/8/5.
	//

#import <UIKit/UIKit.h>
#import "JsListViewController.h"
#import "JsListViewControllerModel.h"
#import "JsTvcLll.h"
#import "JsConfig.h"

NS_ASSUME_NONNULL_BEGIN

@class JsListViewController;
@protocol JsListViewControllerDelegate <NSObject>
- (NSArray <JsListViewControllerModel *>*)jsListViewControllerSetDatasorce:(JsListViewController *)controller;
//返回配置文件的路径.
- (NSDictionary *)jsListViewControllerSetRouterDic:(JsListViewController *)controller;
@optional
- (void)jsListViewController:(JsListViewController *)vc clickAtIndex:(int)index;
@end

@interface JsListViewController : UIViewController
@property (nonatomic,assign)int tag;
@property (nonatomic,weak)id<JsListViewControllerDelegate> delegate;
@property (nonatomic,strong) NSMutableArray <JsListViewControllerModel *>* marr_model;
@property (nonatomic,strong) NSDictionary * routeDic;
@end

NS_ASSUME_NONNULL_END
