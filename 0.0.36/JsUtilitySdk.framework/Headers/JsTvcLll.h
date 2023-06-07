	//
	//  GaoTvcLl.h
	//  GaoDisplayManagerDemo
	//
	//  Created by Gikki Ares on 2020/8/5.
	//

#import <UIKit/UIKit.h>
#import "JsTvcLllModel.h"

/**
 界面需要一个直接和model双向绑定的关系吗?
 mvc是没有的;
 mvvm和swiftUI都是这样的.
 */

NS_ASSUME_NONNULL_BEGIN

@interface JsTvcLll : UITableViewCell

@property (strong, nonatomic)  UILabel *mLb_index;
@property (strong, nonatomic)  UILabel *mLb_title;
@property (strong, nonatomic)  UILabel *mLb_detail;


-(void)displayContent:(NSArray <NSString *>*)arr;
-(void)displayModel:(JsTvcLllModel *)model;

@end

NS_ASSUME_NONNULL_END
