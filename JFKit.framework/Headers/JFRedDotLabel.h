//
//  QNRedDotLabel.h
//  QNView
//
//  Created by victor on 15/12/4.
//  Copyright © 2015年 Sunline. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JFRedDotLabel : UILabel

@property (nonatomic) NSInteger maxCount;

@property (nonatomic) NSInteger count;
/**
 *  边距
 */
@property (nonatomic) UIEdgeInsets insets;
/**
 *  是否只显示小红点
 */
@property (nonatomic) BOOL showDot;
/**
 *  小红点尺寸，默认
 */
@property (nonatomic) CGSize dotSize;

@end
