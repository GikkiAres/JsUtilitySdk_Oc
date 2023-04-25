//
//  GaoImageView.h
//  DuTe
//
//  Created by Gikki Ares on 2020/12/20.
//  Copyright © 2020 vgemv. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class JsImageView;
@protocol JsImageViewDelegate <NSObject>

-(void)jsImageViewClick:(JsImageView *)imageView;

@end


@interface JsImageView : UIImageView
@property(nonatomic,assign)BOOL isClickable;

@property(nonatomic,weak) id<JsImageViewDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
