//
//  JsPasteBoardManager.h
//  JsUtilitySdk
//
//  Created by Gikki Ares on 2023/6/20.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsPasteboardManager : NSObject
+(NSString *)stringFromPasteboard;
+ (void)setString:(NSString *)text;
@end

NS_ASSUME_NONNULL_END
