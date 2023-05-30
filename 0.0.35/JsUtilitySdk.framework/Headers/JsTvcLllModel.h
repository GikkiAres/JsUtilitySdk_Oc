	//
	//  GaoTvcLllModel.h
	//  OpenglDemo
	//
	//  Created by Gikki Ares on 2020/9/13.
	//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "JsTvcLllStyle.h"

NS_ASSUME_NONNULL_BEGIN

@interface Prefix(TvcLllModel) : NSObject

	//外部访问的变量统一用属性
@property (nonatomic,strong)NSString * index;
@property (nonatomic,strong)NSString * title;
@property (nonatomic,strong)NSString * desc;

@property (nonatomic,strong)JsTvcLllStyle * commonStyle;
	//附加的数据.
@property (nonatomic,strong)id attachedData;

- (instancetype)initWithIndex:(NSString *)index title:(NSString *)title desc:(NSString *)desc;
- (CGFloat)cellHeight;
@end

NS_ASSUME_NONNULL_END
