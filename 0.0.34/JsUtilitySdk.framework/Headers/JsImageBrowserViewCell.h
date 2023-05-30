//
//  GaoImageBrowserCell.h
//  DuTe
//
//  Created by Gikki Ares on 2020/12/24.
//  Copyright © 2020 vgemv. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JsImageBrowserViewCellModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JsImageBrowserViewCell : UICollectionViewCell

-(void)setModel:(JsImageBrowserViewCellModel *)model;

@end

NS_ASSUME_NONNULL_END
