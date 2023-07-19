	//
	//  JsCvcIlModel).h
	//  JsoMediaCaptureViewController
	//
	//  Created by Gikki Ares on 2020/9/23.
	//

#import <Foundation/Foundation.h>
#import "JsCvcIlStyle.h"

NS_ASSUME_NONNULL_BEGIN

@interface JsCvcIlModel : NSObject
{
@public
	NSString * mstr_imageName_selected;
	NSString * mstr_imageName_unselected;
	NSString * mstr_title;
	
	JsCvcIlStyle * mstyle;
	JsCvcIlStyle * mstyle_selected;
}

@property(nonatomic,assign)BOOL isSelected;

	//Title不能为空,其余可以为空.
+ (JsCvcIlModel *)modelWithImageName:(nullable NSString *)imageName title:( NSString *)title;
+ (JsCvcIlModel *)modelWithTitle:( NSString *)title selectedImageName:(nullable NSString *)imageName_selected unselectedImageName:(nullable NSString *)imageName_unselected;
- (instancetype)initWithTitle:( NSString *)title imageName:(nullable NSString *)imageName;
- (instancetype)initWithTitle:( NSString *)title selectedImageName:(nullable NSString *)imageName_selected unselectedImageName:(nullable NSString *)imageName_unselected;

@end

NS_ASSUME_NONNULL_END
