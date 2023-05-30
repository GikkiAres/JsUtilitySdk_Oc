//
//  GaoImageBrowserViewCellModel.h
//  DuTe
//
//  Created by Gikki Ares on 2020/12/24.
//  Copyright © 2020 vgemv. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsImageBrowserViewCellModel : NSObject

@property (nonatomic,strong)NSString * mstr_thumbImageUrl;
@property (nonatomic,strong)NSString * mstr_originImageUrl;
@property (nonatomic,assign)CGRect mrc_initialImageViewFrame;
- (CGRect)aspectFitFrameForImage:(UIImage *)image inBounds:(CGRect)rect;

@end

NS_ASSUME_NONNULL_END
