//
//  FZAlertController.h
//  Test
//
//  Created by Jianbo Cai on 2018/8/28.
//  Copyright © 2018年 JF. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FZAlertAction.h"

/// 默认alertView宽度 = 屏宽- 60
#define CUSTOMVIEW_WIDTH SCREEN_WIDTH - 60

@interface FZAlertController : UIViewController

@property (nullable, nonatomic, readonly) NSArray<FZAlertAction *> *actions;
@property (nullable, nonatomic, readonly) NSArray<UITextField *> *textFields;
@property (nullable, nonatomic, copy) NSString *title;
@property (nullable, nonatomic, strong) UIColor *titleTextColor;
@property (nullable, nonatomic, readonly) UIImage *image;
@property (nullable, nonatomic, copy) NSString *message;
@property (nonatomic, assign) NSTextAlignment messageAlignment;
@property (nullable, nonatomic) NSAttributedString *messageAttStr;
@property (nullable, nonatomic, readonly) UIView *customView;
@property (nonatomic, assign) BOOL choiceLoctionBottom;  // 选项框位置，默认为底部
@property (nonatomic, readonly, assign) BOOL agreedTo;  // 同意选项框

@property (nonatomic, assign) BOOL showImgBg;  

@property (nonatomic, assign) BOOL hiddenNav;

@property (class, readonly, strong) UIColor *customViewBgColor;  // 添加内容背景色

+ (instancetype)alertControllerWithTitle:(NSString * _Nullable)title message:(NSString * _Nullable)message;

+ (instancetype)alertControllerWithTitle:(nullable NSString *)title customView:(nullable UIView *)customView;

- (void)addAction:(FZAlertAction *)action;
- (void)addTextFieldWithConfigurationHandler:(void (^ __nullable)(UITextField *textField))configurationHandler;
- (void)addIndividualChoiceWithTitle:(NSString *)title configurationHandler:(void (^)(UIButton *sender))configurationHandler;
- (void)addLinkWithTitle:(NSString *)title configurationHandler:(void (^)(UIButton *))configurationHandler;
- (void)showDisappearAnimation;

@end
