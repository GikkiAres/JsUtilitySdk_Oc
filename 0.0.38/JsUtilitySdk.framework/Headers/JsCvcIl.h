//
//  GaoCvImageLabelCell.h
//  OpenglDemo
//
//  Created by Gikki Ares on 2020/6/24.
//


/**
 GaoCvcImageLabel
 高度至少为40,此时图片大小为0.
 */

/**
 采用代码布局,灵活一点.
 */



#import <UIKit/UIKit.h>
#import "JsCvcIlModel.h"
#import "JsCvcIlStyle.h"

NS_ASSUME_NONNULL_BEGIN



@interface JsCvcIl : UICollectionViewCell
{
	
}

- (void)displayModel:(JsCvcIlModel *)model;


@end

NS_ASSUME_NONNULL_END
