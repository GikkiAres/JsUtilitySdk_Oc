//
//  GaoSnapshotManager.h
//  DuTe
//
//  Created by Gikki Ares on 2020/12/14.
//  Copyright © 2020 vgemv. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsSnapshotManager : NSObject


//+ (UIImage *)getKeyWindowSnapshot;
//+ (UIImage *)getSnapshotFromKeyWindowAtFrame:(CGRect)frame;

+ (UIImage *)getSnapshotFromView:(UIView *)view atFrame:(CGRect)frame;
+ (UIImage *)getSnapshotFromView:(UIView *)view;

@end

NS_ASSUME_NONNULL_END
