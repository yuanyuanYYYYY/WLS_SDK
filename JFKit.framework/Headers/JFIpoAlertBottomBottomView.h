//
//  JFIpoAlertBottomBottomView.h
//  JFStock
//
//  Created by Alan Wang on 2020/3/3.
//  Copyright © 2020 Alan Wang. All rights reserved.
//

#import <UIKit/UIKit.h>



NS_ASSUME_NONNULL_BEGIN

@interface JFIpoAlertBottomBottomView : UIView
@property (strong, nonatomic) void (^actionBlock)(NSInteger type);
// 0 两个按钮  1 一个按钮

@property(nonatomic,assign) NSInteger style;
@property(nonatomic,copy) NSString * leftBtnTitle;
@property(nonatomic,copy) NSString * rightBtnTitle;
@end

NS_ASSUME_NONNULL_END
