	//
	//  GaoStdListViewControllerModel.h
	//  DrawTriangle
	//
	//  Created by Gikki Ares on 2020/10/15.
	//

#import "JsTvcLllModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, JsNavigationStyle) {
		//default
	JsNavigationStylePush,
	JsNavigationStylePresentFullScreen,
};




	//公开的属性用property
@interface JsListViewControllerModel : JsTvcLllModel

@property(nonatomic,strong) NSString * targetViewControllerName;
@property(nonatomic,strong) NSString * targetViewControllerTitle;
@property(nonatomic,assign) JsNavigationStyle navigationStyle;

-(instancetype)initWithIndex:(NSString *)index title:(NSString *)title desc:(NSString *)desc target:(NSString *)target;

@end

NS_ASSUME_NONNULL_END
