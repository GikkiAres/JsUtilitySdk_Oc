//
//  JsYy_Model.h
//  JsYy_Model <https://github.com/ibireme/JsYy_Model>
//
//  Created by ibireme on 15/5/10.
//  Copyright (c) 2015 ibireme.
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import <Foundation/Foundation.h>

#if __has_include(<JsYy_Model/JsYy_Model.h>)
FOUNDATION_EXPORT double JsYy_ModelVersionNumber;
FOUNDATION_EXPORT const unsigned char JsYy_ModelVersionString[];
#import <JsYy_Model/NSObject+JsYy_Model.h>
#import <JsYy_Model/JsYy_ClassInfo.h>
#else
#import "NSObject+JsYy_Model.h"
#import "JsYy_ClassInfo.h"
#endif
