//
//  JFCheckBoxControl.h
//  SLAppProduct
//
//  Created by AlanWang on 2018/3/15.
//  Copyright © 2018年 Sunline. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JFCheckBoxControl : UIView
@property(nonatomic,assign,getter=isSelected) BOOL selected;
@property(nonatomic,strong) UIImage * selectedImage;
@property(nonatomic,strong) UIImage * unSelectedImage;

@property(nonatomic,strong)  UIColor * selectedTitleColor;
@property(nonatomic,strong)  UIColor * unSelectedTitleColor;

@property(nonatomic,strong)  UIColor * selectedBackgroundColor;
@property(nonatomic,strong)  UIColor * unSelectedBackgroundColor;

@property(nonatomic,strong)  UIColor * lineColor;
@property(nonatomic,strong)  UIFont * txtFont;

@property(nonatomic,assign)  CGFloat iconMarginLeft;


@property(nonatomic,assign,getter=isNeedLine)  BOOL needLine;
@property(nonatomic,copy)  NSString * titleStr;

//是否可以响应事件
@property(nonatomic,assign)  BOOL unEnable;

@property(nonatomic,copy) void(^block)(BOOL selected,NSUInteger viewTag,JFCheckBoxControl * view);
@end
