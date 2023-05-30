//
//  GaoImageBrowser.h
//  DuTe
//
//  Created by Gikki Ares on 2020/12/24.
//  Copyright © 2020 vgemv. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class JsImageBrowserView;
@protocol JsImageBrowserViewDelegate <NSObject>

@optional
-(void)jsImageBrowserViewClickClose:(JsImageBrowserView *)view;
-(void)jsImageBrowserViewClickDownload:(JsImageBrowserView *)view;

@end

@interface JsImageBrowserView : UIView


@property(nonatomic,weak) id<JsImageBrowserViewDelegate> delegate;
/**
 index,0 based index;
 */
- (void)displayImageArr:(NSArray <NSString *> *)arr withFrameArray:(NSArray *)frameArray fromView:(UIView *)view index:(int)index;

@end

NS_ASSUME_NONNULL_END
