//
//  GaoLoggerFilter.h
//
//  Created by GikkiAres on 2020/3/31.
//  Copyright © 2020 GikkiAres. All rights reserved.
//


//说明日志过滤规则.
//用来说明一个日志事件,是忽略,还是输出.

#import <Foundation/Foundation.h>

#ifndef JsLogBasicData_h
#define JsLogBasicData_h


typedef NSString *JsLogContentType NS_STRING_ENUM;
FOUNDATION_EXPORT JsLogContentType const JsLogContentTypeApiInfo;
FOUNDATION_EXPORT JsLogContentType const JsLogContentTypeUserAction;
FOUNDATION_EXPORT JsLogContentType const JsLogContentTypeAppKeyInfo;
FOUNDATION_EXPORT JsLogContentType const JsLogContentTypeOtherInfo;



//等级越高的值越大.
typedef NS_ENUM(NSUInteger, JsLogLevel) {
	JsLogLevelVerbose,
	JsLogLevelDebug,
	
	JsLogLevelInfo,
    JsLogLevelWarn,
	
    JsLogLevelError,
    JsLogLevelFatal,
	
	JsLogLevelNone,
};

//需要和对应的类名区分开.
typedef NS_OPTIONS(NSUInteger, JsLogTargetOption) {
	JsLogTargetOptionConsole = 1 << 0,
	JsLogTargetOptionFile = 1 << 1,
	JsLogTargetOptionAll = NSUIntegerMax
};

#endif
