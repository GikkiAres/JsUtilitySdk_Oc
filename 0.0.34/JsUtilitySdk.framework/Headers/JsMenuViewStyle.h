//
//  Prefix(MenuViewStyle).h
//  DuTe
//
//  Created by Gikki Ares on 2020/12/9.
//



/**
 用来设置MenuView显示样式
 
 */

#import <UIKit/UIKit.h>

#define Prefix(x) Js##x

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, Prefix(MenuViewInAnimationType)) {
	Prefix(MenuViewInAnimationTypeNone),
	Prefix(MenuViewInAnimationTypeSpring)
};

//要么不能选择,要么可以单选,不支持多选.
//单选时,取消当前选择的方式是,点击其他item.
typedef NS_ENUM(NSUInteger, Prefix(MenuViewSelectionStyle)) {
	Prefix(MenuViewSelectionStyleNone),
	Prefix(MenuViewSelectionStyleSingle)
};

@interface Prefix(MenuViewStyle) : NSObject

//CollectionView的背景色.
@property(nonatomic,strong)UIColor *collectionViewBackgroundColor;

//流动方向上,两个cell之间的距离,行距
@property(nonatomic,assign)CGFloat minimumLineSpacing;
//垂直流动方向上,两个cell之间的间距.
@property(nonatomic,assign)CGFloat minimumInteritemSpacing;

//MenuView和四周的整体边距
@property(nonatomic,assign)UIEdgeInsets edgeInset;

//是否显示选中的阴影
@property(nonatomic,assign)BOOL isShowChooseMaskView;
@property(nonatomic,strong)UIColor * maskViewColor;

	//选中cell的提示.
@property(nonatomic,assign)BOOL mb_isShowIndicator;
@property(nonatomic,strong)UIColor * chooseIndicatorColor;

@property(nonatomic,strong)UIColor * muiColor_title;

//初始选择项目默认为-1表示没有初始选择项;
@property(nonatomic,assign)int initialSelectedIndex;

@property(nonatomic,assign)UICollectionViewScrollDirection scrollDirection;


//出场动画
@property(nonatomic,assign) Prefix(MenuViewInAnimationType) inAnimationType;


/**
 默认样式
 */
+ (Prefix(MenuViewStyle) *)defaultStyle;

+ (Prefix(MenuViewStyle) *)darkModeStyle;

//意义不大,原意是从默认的menuViewStyle 生成 cellStyle.
//我觉得还是分开吧,如果cell的style不设置,默认用默认的cell样式.
//- (GaoCvcIlStyle *)cellStyleFromCommon;


@end

NS_ASSUME_NONNULL_END
