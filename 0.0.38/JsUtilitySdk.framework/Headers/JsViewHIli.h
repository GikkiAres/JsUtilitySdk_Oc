//
//  JsViewHIli.h
//  MpaClientIos
//
//  Created by Gikki Ares on 2023/4/21.
//  Copyright © 2023 Yach. All rights reserved.
//

#import "JsView.h"
NS_ASSUME_NONNULL_BEGIN


@interface JsViewHIliVm : JsViewVm

	//model
@property(nonatomic,strong)UIImage * leftImage;
@property(nonatomic,strong)UIImage * rightImage;
@property(nonatomic,strong)NSString * title;
@property(nonatomic,strong) UIColor * titleColor;

	//style
@property(nonatomic,assign)float leftImageLeading;
@property(nonatomic,assign)CGSize leftImageSize;
@property(nonatomic,assign)float titleLeading;
@property(nonatomic,assign)float rightImageTrailing;
@property(nonatomic,assign)CGSize rightImageSize;
@property(nonatomic,assign)float cornerRadius;
/**
 top,left,bottom,right
 bottom,right向内需要设置负值.
 */
@property(nonatomic,assign)UIEdgeInsets padding;
@property(nonatomic,strong)UIColor * contentBackgroundColor;

+(instancetype)defaultVm;
@end

@interface JsViewHIli : JsView


@property(nonatomic,strong)JsViewHIliVm * vm;

@end

NS_ASSUME_NONNULL_END
