//
//  SLNewsMainViewController.h
//  SLAppProduct
//
//  Created by AlanWang on 2018/4/12.
//  Copyright © 2018年 Sunline. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <JFBase/JFBase.h>
#if __has_include(<WMPageController/WMPageController.h>)
#import <WMPageController/WMPageController.h>
#else
#import "WMPageController.h"
#endif

@interface JFNewsMainViewController : WMPageController
@property(nonatomic,assign) BOOL isTabBarRoot;
@end
