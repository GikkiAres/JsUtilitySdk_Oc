//
//  JsBottomInputBar.h
//  DuTe
//
//  Created by Gikki Ares on 2020/12/21.
//  Copyright © 2020 vgemv. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JsBottomInputBarBetaVm.h"

NS_ASSUME_NONNULL_BEGIN

@class JsBottomInputBarBeta;
@protocol JsBottomInputBarBetaDelegate <NSObject>

-(void)jsBottomInputBarBetaClickLike:(JsBottomInputBarBeta *)bar;
-(void)jsBottomInputBarBetaClickShare:(JsBottomInputBarBeta *)bar;
-(void)jsBottomInputBarBetaClickPick:(JsBottomInputBarBeta *)bar;
- (void)jsBottomInputBarBeta:(JsBottomInputBarBeta *)box publishContent:(NSString *)content;

@optional
-(void)jsBottomInputBarBetaClickExpress:(JsBottomInputBarBeta *)bar;
-(void)jsBottomInputBarBetaClickVoice:(JsBottomInputBarBeta *)bar;
@end



@interface JsBottomInputBarBeta : UIView

@property(nonatomic,weak)id<JsBottomInputBarBetaDelegate> delegate;

- (instancetype)initWithFrame:(CGRect)frame vm:(JsBottomInputBarBetaVm *)vm NS_DESIGNATED_INITIALIZER;

- (void)oneMoreLike;
- (void)setLikeCount:(int)count;
- (void)setDraftText:(NSString *)text;
- (JsBottomInputBarBetaVm *)getUiParameter;
- (NSString *)draftText;
- (void)awakeInputBox;
- (void)setPlaceholder:(NSString *)placeholder;
- (void)clearAfterPublish;
@end

NS_ASSUME_NONNULL_END
