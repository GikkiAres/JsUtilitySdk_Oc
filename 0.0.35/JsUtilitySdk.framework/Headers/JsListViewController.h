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

NS_ASSUME_NONNULL_BEGIN

typedef NSString * JsRouterDicKey NS_STRING_ENUM;
FOUNDATION_EXPORT JsRouterDicKey const JsRouterDicKeyDesc;
FOUNDATION_EXPORT JsRouterDicKey const JsRouterDicKeySub;
FOUNDATION_EXPORT JsRouterDicKey const JsRouterDicKeyTarget;
FOUNDATION_EXPORT JsRouterDicKey const JsRouterDicKeyTitle;


@class JsListViewController;
@protocol JsListViewControllerDelegate <NSObject>
- (NSArray <JsListViewControllerModel *>*)jsListViewControllerSetDatasorce:(JsListViewController *)controller;
//返回配置文件的路径.
/**
 RouterArray规则:
 一个node后面接一个字典
 desc,表示信息.
 target,表示跳转到改target
 sub,表示子列表.
 */

- (NSArray *)jsListViewControllerSetRouterArray:(JsListViewController *)controller;
@optional
- (void)jsListViewController:(JsListViewController *)vc clickAtIndex:(int)index;
@end

@interface JsListViewController : UIViewController
@property (nonatomic,assign)int tag;
@property (nonatomic,weak)id<JsListViewControllerDelegate> delegate;
//项目,简单的一级路由.
@property (nonatomic,strong) NSMutableArray <JsListViewControllerModel *>* marr_model;
//路由列表.
@property (nonatomic,strong) NSArray * routerArray;
@end

NS_ASSUME_NONNULL_END
