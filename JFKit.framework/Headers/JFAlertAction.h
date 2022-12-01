//
//  JFAlertAction.h
//  弹窗哈哈哈
//
//  Created by Alan Wang on 2018/11/8.
//  Copyright © 2018 kuaijiankang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void (^AlertActionBlock)(id data);


@interface JFAlertAction : NSObject
@property(nonatomic,copy) NSString  * title;
@property(nonatomic,strong) UIColor * titleColor;
@property(nonatomic,strong) UIFont  * titleFont;
@property(nonatomic,assign) NSInteger  tag;
@property(nonatomic,assign) BOOL  enable;
@property(nonatomic,copy)   AlertActionBlock actionBlock;
@property(nonatomic,assign) id ext;


 
 +(JFAlertAction*)actionWithTitle:(NSString*)title titleColor:(UIColor*)titleColor titleFont:(UIFont*)titleFont ext:(id)ext actionBlock:(AlertActionBlock)block;
@end
