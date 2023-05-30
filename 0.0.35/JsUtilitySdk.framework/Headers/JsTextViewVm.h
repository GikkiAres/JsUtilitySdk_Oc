//
//  GaoTextViewVm.h
//  UgcPlay
//
//  Created by Gikki Ares on 2021/4/23.
//  Copyright © 2021 Tianma. All rights reserved.
//

#import <UIKit/UIKit.h>

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

NS_ASSUME_NONNULL_END
