//
//  JFAlertAction.h
//  Test
//
//  Created by Jianbo Cai on 2018/8/29.
//  Copyright © 2018年 JF. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FZAlertAction : UIButton

@property (nonatomic, strong) CAGradientLayer *gradientLayer;

+ (instancetype)actionWithTitle:(nullable NSString *)title style:(UIAlertActionStyle)style handler:(void (^ __nullable)(FZAlertAction *action))handler;

+ (instancetype)actionWithImage:(nullable UIImage *)image style:(UIAlertActionStyle)style handler:(void (^ __nullable)(FZAlertAction *action))handler;

@property (nonatomic, readonly) UIAlertActionStyle style;
@property (nonatomic, copy) void(^actionHandler)(FZAlertAction *action);

@end
