//
//  ChatContentUiParameter.h
//  DuTe
//
//  Created by Gikki Ares on 2020/12/18.
//  Copyright © 2020 vgemv. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN


const static NSStringDrawingOptions drawingOptions = NSStringDrawingUsesLineFragmentOrigin;

@interface JsNavigationBarUiParameter : NSObject

//TitleLabel
@property(nonatomic,assign)CGFloat mf_titleLeading;
@property(nonatomic,assign)CGFloat mf_titleTrailing;
@property(nonatomic,assign)CGFloat mf_titleHeight;
@property(nonatomic,strong)UIFont * mfont_title;
@property(nonatomic,assign)CGFloat mf_barHeight;

@property(nonatomic,strong)UIColor * color_bg;

+(JsNavigationBarUiParameter *)sharedInstance;

@end

NS_ASSUME_NONNULL_END
