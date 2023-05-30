//
//  GaoPageView.h
//  DuTe
//
//  Created by Gikki Ares on 2020/12/15.
//  Copyright © 2020 vgemv. All rights reserved.
//

#import <UIKit/UIkit.h>

NS_ASSUME_NONNULL_BEGIN

@class JsPageGroupView;
@protocol JsPageGroupViewDelegate <NSObject>

- (int)jsPageGroupViewSetPageNum:(JsPageGroupView *)view;
- (UIView *)jsPageGroupView:(JsPageGroupView *)groupView viewForPageAtIndex:(int)index;

@end

@interface JsPageGroupView : UIView

@property(nonatomic,weak)id<JsPageGroupViewDelegate> delegate;

- (void)choosePageAtIndex:(int)index;
- (void)reload;

@end

NS_ASSUME_NONNULL_END
