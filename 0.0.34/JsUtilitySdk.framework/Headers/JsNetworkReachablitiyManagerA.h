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

@end

NS_ASSUME_NONNULL_END
