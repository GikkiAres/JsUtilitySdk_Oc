//
//  GaoTvcLllStyle.h
//  AnimationDemo
//
//  Created by Gikki Ares on 2021/4/20.
//

#import <UIKit/UIKit.h>
#define Prefix(x) Js##x
NS_ASSUME_NONNULL_BEGIN

@interface Prefix(TvcLllStyle) : NSObject

//竖直方向上的间距
@property (nonatomic,assign) CGFloat paddingV;
@property (nonatomic,strong) UIFont * titleFont;
@property (nonatomic,strong) UIFont * detailFont;
@property (nonatomic,strong) UIColor * textColor;

+ (Prefix(TvcLllStyle) *)defaultStyle;

@end

NS_ASSUME_NONNULL_END
