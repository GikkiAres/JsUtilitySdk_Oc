//
//  JsOrientationManager.h
//  JsUtilitySdk
//
//  Created by Gikki Ares on 2021/9/28.
//


/**
 1,无论在何种情况下,都应该只拥有一个实例的对象,就直接用类方法,比如和App应用或者和Devcie相关的类.
 */
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsOrientationManager : NSObject

//当前设备的屏幕方向.

+ (void)setCurrentOrientation:(UIInterfaceOrientation)orientation viewController:(UIViewController *)vc;

+ (UIInterfaceOrientationMask)interfaceOrientationMaskForOrientation:(UIInterfaceOrientation)orientation;
+ (UIInterfaceOrientationMask)interfaceOrientationMaskForCurrentOrientation;
+ (UIDeviceOrientation)getCurrentDeviceOrientation;
+(UIInterfaceOrientation)getCurrentInterfaceOrientation;
+(NSString *)stringForUIInterfaceOrientation:(UIInterfaceOrientation)o;
+(NSString *)stringForDeviceOrientation:(UIDeviceOrientation)o;

+(id)addInterfaceOrientationDidChangeHandler:(void(^)(UIInterfaceOrientation o))handler;
+(void)removeInterfaceOrientationDidChangeHandler:(id)observation;

+(id)addDeviceOrientationDidChangeHandler:(void(^)(UIDeviceOrientation o))handler;
+(void)removeDeviceOrientationDidChangeHandler:(id)observation;

@end

NS_ASSUME_NONNULL_END
