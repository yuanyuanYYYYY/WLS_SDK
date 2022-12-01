//
//  JFViewControllerHelper.h
//  JFKit
//
//  Created by victor lau on 2018/12/13.
//  Copyright © 2018年 Alan Wang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@interface JFViewControllerHelper : NSObject
/**
 当前的viewController
 
 @return return value description
 */
+(UIViewController *)topViewController;

/**
 获取当前正在显示的界面
 
 @param rootViewController UIViewController description
 @return return value description
 */
+ (UIViewController *)topViewController:(UIViewController *)rootViewController;

@end

NS_ASSUME_NONNULL_END
