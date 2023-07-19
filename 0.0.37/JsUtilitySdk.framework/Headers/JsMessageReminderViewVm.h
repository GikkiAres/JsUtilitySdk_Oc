//
//  GaoToastViewVm.h
//  DuTe
//
//  Created by Gikki Ares on 2020/12/22.
//

#import <UIKit/UIKit.h>
#import "JsView.h"
NS_ASSUME_NONNULL_BEGIN



	//silent则只有文字提示.
typedef NS_ENUM(NSUInteger, JsMessageReminderContentType) {
	JsMessageReminderContentTypeSilent,
	JsMessageReminderContentTypeInfo,
	JsMessageReminderContentTypeWarn,
	JsMessageReminderContentTypeSuccess,
	JsMessageReminderContentTypeError,
	JsMessageReminderContentTypeTest,
};

typedef NS_ENUM(NSUInteger,JsMessageReminderArrangeType) {
	JsMessageReminderArrangeTypeVertical,
	JsMessageReminderArrangeTypeHorizontal
};

typedef NS_ENUM(NSUInteger,JsMessageReminderColorType) {
	JsMessageReminderColorTypeGray,
	JsMessageReminderColorTypeColor
};


@interface JsMessageReminderViewVm : JsViewVm


@property(nonatomic,strong) UIImage * image;

@property(nonatomic,strong) NSString * title;
@property(nonatomic,strong) UIColor * titleColor;

@property(nonatomic,strong) NSString * message;
@property(nonatomic,strong) UIColor * messageColor;

//最大宽度,用来限定文字宽度.超过此宽度,让文字换行显示.
@property (nonatomic,assign) float  maxWidth;

@property (nonatomic,assign) CGSize  imageSize;

@property (nonatomic,assign) CGFloat mf_imageViewTop;

@property (nonatomic,assign) CGFloat mf_labelTop;
@property(nonatomic,strong) UIColor * mcolor_message;
@property(nonatomic,strong) UIFont * font;
@property(nonatomic,assign) float padding;
/*
 0 , 图片-文字 竖直布局;
 1,  图片-文字 水平布局
 **/
@property(nonatomic,assign) int arrangeStyle;

+ (JsMessageReminderViewVm *)defaultVm;
+ (JsMessageReminderViewVm *)vmWithTitle:(NSString *)title contentType:(JsMessageReminderContentType )type arrangeType:(JsMessageReminderArrangeType)arrangeType colorStyle:(JsMessageReminderColorType)colorStyle;
//TODO: title message的适配.

@end
	//ui数据
@interface JsMessageReminderViewVm()

@property(nonatomic,assign)CGFloat ivLbSpacing;

@end

@interface JsMessageReminderViewVm()
@property(nonatomic,assign)CGSize titleSize;
@end

NS_ASSUME_NONNULL_END
