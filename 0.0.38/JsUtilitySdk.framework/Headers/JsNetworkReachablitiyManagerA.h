//
//  JsNetworkReachablitiyMonitorA.h
//  JsUtilitySdk
//
//  Created by Gikki Ares on 2023/5/23.
//



#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString * const JsNetworkReachabilityChangeNotification;
FOUNDATION_EXPORT NSString * const JsNetworkingReachabilityStatusKey;

/**
 描述网络连接状态.
-1,未知.
 0,不能连接.
 1,可以通过流量连接.
 2,可以通过wifi连接.
 3,可以通过流量和wifi连接.
 */
typedef NS_ENUM(NSInteger, JsNetworkReachablitiyStatus) {
	JsNetworkReachablitiyStatusUnknown          = -1,
	JsNetworkReachablitiyStatusNotReachable     = 0,
	JsNetworkReachablitiyStatusReachableViaWCellular = 1,
	JsNetworkReachablitiyStatusReachableViaWiFi = 2,
	JsNetworkReachablitiyStatusReachableViaWiFiAndCellular = 3
};

@interface JsNetworkReachablitiyManagerA : NSObject
@property(nonatomic,assign)JsNetworkReachablitiyStatus reachabilityStatus;
+(instancetype)sharedInstance;

-(BOOL)isWifiReachable;
-(BOOL)isCellularReachable;
//开启监控
-(void)startMonitoring;
//关闭监控
- (void)stopMonitoring;

- (NSString *)statusString;

+ (int)checkCellularPermision;

/*
 1,单次检测当前网络状况
 2,会弹出网络权限提示框,适合最开始调用.
 */
+ (void)checkCurerntNetworkWithDomain:(NSString *)domain handler:(void(^)(JsNetworkReachablitiyStatus status))handler;
+ (NSString *)nameForStatus:(JsNetworkReachablitiyStatus)status;
@end

NS_ASSUME_NONNULL_END
