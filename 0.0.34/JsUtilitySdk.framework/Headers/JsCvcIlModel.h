	//
	//  Prefix(CvcIlModel).h
	//  JsoMediaCaptureViewController
	//
	//  Created by Gikki Ares on 2020/9/23.
	//

#import <Foundation/Foundation.h>
#import "JsCvcIlStyle.h"

#define Prefix(x) Js##x

NS_ASSUME_NONNULL_BEGIN

@interface Prefix(CvcIlModel) : NSObject
{
@public
	NSString * mstr_imageName_selected;
	NSString * mstr_imageName_unselected;
	NSString * mstr_title;
	
	Prefix(CvcIlStyle) * mstyle;
	Prefix(CvcIlStyle) * mstyle_selected;
}

@property(nonatomic,assign)BOOL isSelected;

	//Title不能为空,其余可以为空.
+ (Prefix(CvcIlModel) *)modelWithImageName:(nullable NSString *)imageName title:( NSString *)title;
+ (Prefix(CvcIlModel) *)modelWithTitle:( NSString *)title selectedImageName:(nullable NSString *)imageName_selected unselectedImageName:(nullable NSString *)imageName_unselected;
- (instancetype)initWithTitle:( NSString *)title imageName:(nullable NSString *)imageName;
- (instancetype)initWithTitle:( NSString *)title selectedImageName:(nullable NSString *)imageName_selected unselectedImageName:(nullable NSString *)imageName_unselected;

@end

NS_ASSUME_NONNULL_END
