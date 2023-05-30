//
//  GaoTextView.h
//  UgcPlay
//
//  Created by Gikki Ares on 2021/4/23.
//  Copyright © 2021 Tianma. All rights reserved.
//

#import <UIKit/UIKit.h>
/*
 有的功能:
 1,placeholder
 2,最大高度和最小高度限制.
 3,初始创建一个默认的vm,并显示该vm,并且可以重新设置vm
 */


NS_ASSUME_NONNULL_BEGIN

@interface JsTextViewVm : NSObject

@property(nonatomic,assign)BOOL isEmpty;
@property(nonatomic,strong)NSString * content;
@property(nonatomic,strong)NSString * placeholder;

@property(nonatomic,assign)float emptyHeight;


@property(nonatomic,assign)CGRect textViewFrame;
@property(nonatomic,assign)CGRect placeholderFrame;

@property(nonatomic,assign)float maxHeight;

@property(nonatomic,assign)CGSize computedSize;

@property(nonatomic,strong)UIFont * contentFont;
@property(nonatomic,strong)UIColor * backgroundColor;
@property(nonatomic,strong)UIColor * contentColor;
	//宽度需要首先设置好.
@property(nonatomic,assign)float initalWidth;

- (void)doCalculate;
@end

@class JsTextView;
@protocol JsTextViewDelegate <NSObject>

- (void)jsTextViewClick:(JsTextView *)tv;

@end


@interface JsTextView : UIView

- (void)setupUi;
- (UITextView *)textView;
- (void)setPlaceholder:(NSString *)placeholder;
@property(nonatomic,strong) JsTextViewVm * vm;
@property(nonatomic,weak) id<JsTextViewDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
