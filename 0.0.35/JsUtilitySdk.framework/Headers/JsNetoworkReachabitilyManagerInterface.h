//
//  JsNetoworkReachabitilyMonitorInterface.h
//  JsUtilitySdk
//
//  Created by Gikki Ares on 2023/5/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


//1,网络状态,还是设备wifi和流量开关口的开启状态?


/**
 1,网络状态发生改变时发出通知?
 如果监听的种类很多,而自己只监听其中一个点,是否会有问题.
 
 当下的需求:
 1,判断是否能过wifi连接到一个地址.
 2,判断是否能过流量连接到一个地址.
 
 2,在开启监听后,首先把当前状态发送出去?
 
 //3 反馈的方式.
 3.1,delegate回调.
 3.2,callback回调.
 3.3,通知回调.
 */


@protocol JsNetoworkReachabitilyManagerInterfaces <NSObject>


@end

NS_ASSUME_NONNULL_END
