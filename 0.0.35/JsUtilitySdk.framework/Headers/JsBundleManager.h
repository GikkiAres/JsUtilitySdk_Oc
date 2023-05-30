//
//  JsBundleManager.h
//  JsoUtilitySdk
//
//  Created by Gikki Ares on 2021/8/6.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsBundleManager : NSObject

+ (NSBundle *)jsUtilityBundle;
+ (NSBundle *)jsMjRefreshBundle;

+ (UIImage *)iconInBundleNamed:(NSString *)imageName;
+ (UIImage *)iconInBundleNamed:(NSString *)imageName inDir:(NSString *)dirName;

+ (NSString *)resoucePathInBundleNamed:(NSString *)resourceName inDir:(NSString *)dirName;
+ (UINib *)viewControllerNibWithName:(NSString *)name;

@end

NS_ASSUME_NONNULL_END
