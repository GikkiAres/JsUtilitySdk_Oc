//
//  GaoQrCodeManager.h
//  DuTe
//
//  Created by Gikki Ares on 2020/12/12.
//  Copyright © 2020 vgemv. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsQrCodeManager : NSObject

+ (UIImage *)qrCodeForString:(NSString *)string size:(CGSize)size;
+ (nullable NSString *)stringForQrCodeImage:(UIImage *)image;

@end

NS_ASSUME_NONNULL_END
