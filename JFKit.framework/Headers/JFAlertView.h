//
//  JFAlertView.h
//  弹窗哈哈哈
//
//  Created by Alan Wang on 2018/11/8.
//  Copyright © 2018 kuaijiankang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JFBaseAlertView.h"




@interface JFAlertView : JFBaseAlertView
+(JFAlertView*)alertViewWithTitle:(NSString*)title message:(NSString*)message preferredStyle:(JFAlertViewStyle)style;
+(JFAlertView*)alertViewWithTitle:(NSString*)title message:(NSString*)message tips:(NSString*)tips  preferredStyle:(JFAlertViewStyle)style;
-(void)addAction:(JFAlertAction*)action;

//新的弹框样式
+(JFAlertView*)alertViewWithNewStyleTitle:(NSString*)title  subTitle:(NSString*)subTitle message:(id)message cancle:(NSString*)cancle sure:(NSString*)sure action:(void(^)(NSInteger type,id data))actionBlock;
@end
