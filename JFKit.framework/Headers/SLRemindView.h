//
//  SLRemindView.h
//  SLApp
//
//  Created by 刘洋 on 15/7/22.
//  Copyright (c) 2015年 Qiniu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 *  公用提醒类
 */
@interface SLRemindView : NSObject
/**
 *  显示错误提醒
 */
+ (void)showError:(NSString *)error toView:(UIView *)view;

/**
 *  显示成功提醒
 */
+ (void)showSuccess:(NSString *)success toView:(UIView *)view;

/**
 *  显示普通提醒
 */
+ (void)showMessage:(NSString *)message toView:(UIView *)view;

//添加一个转菊花
+(void)showHUDAddedTo:(UIView *)view animated:(BOOL)animated;

//隐藏
+(void)hideHUDForView:(UIView *)view animated:(BOOL)animated;

//

+(void)hideAllHudsForView;
@end
