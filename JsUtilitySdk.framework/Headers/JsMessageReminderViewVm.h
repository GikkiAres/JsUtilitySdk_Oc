//
//  GaoToastViewVm.h
//  DuTe
//
//  Created by Gikki Ares on 2020/12/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsMessageReminderViewVm : NSObject

@property(nonatomic,strong) UIColor * mcolor_bg;

@property(nonatomic,strong) UIImage * mimage;

@property(nonatomic,assign) CGFloat mf_cornerRadius;


@property(nonatomic,strong) NSString * mstr_message;
@property (nonatomic,assign) CGSize  selfSize;
@property (nonatomic,assign) CGSize  imageSize;

@property (nonatomic,assign) CGFloat mf_imageViewTop;

@property (nonatomic,assign) CGFloat mf_labelTop;
@property(nonatomic,strong) UIColor * mcolor_message;
@property(nonatomic,strong) UIFont * mfont;

+ (JsMessageReminderViewVm *)defaultVm;

@end

NS_ASSUME_NONNULL_END
