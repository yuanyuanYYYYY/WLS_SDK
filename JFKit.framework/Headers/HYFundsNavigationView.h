//
//  HYFundsNavigationView.h
//  Chainup
//
//  Created by Sunline on 2018/6/13.
//  Copyright © 2018年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HYFundsNavigationView : UIView

@property (nonatomic,strong) UILabel *titleLabel;

@property (nonatomic,strong) UIButton *titleButton;

@property (nonatomic,strong) UIButton *backButton;

@property (nonatomic,strong) UIButton *rightButton;

- (instancetype)initWithFrame:(CGRect)frame offset:(CGFloat)offset;

- (instancetype)initWithFrame:(CGRect)frame offset:(CGFloat)offset backBtn:(BOOL)isBack;

- (instancetype)initWithFrame:(CGRect)frame offset:(CGFloat)offset backBtn:(BOOL)isBack rightBtn:(BOOL)isRight;

@end
