//
//  SLSortButton.h
//  SLAppProduct
//
//  Created by Jianbo Cai on 2018/8/8.
//  Copyright © 2018年 Sunline. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  排序按钮状态
 */
typedef NS_ENUM(NSInteger, SLSortButtonSortStatus){
    SLSortButtonSortStatusNormal,       //正常状态
    SLSortButtonSortStatusDescending,   //降序状态
    SLSortButtonSortStatusAscending     //升序状态
};

@interface SLSortButton : UIButton

@property (nonatomic, assign) SLSortButtonSortStatus sortStatus;

- (void)setImage:(nullable UIImage *)image forSortState:(SLSortButtonSortStatus)sortStatus;

- (void)setTitle:(nullable NSString *)title forSortState:(SLSortButtonSortStatus)sortStatus;

- (void)setTitleFont:(nullable UIFont *)titleFont forSortState:(SLSortButtonSortStatus)sortStatus;

- (void)setTitleColor:(nullable UIColor *)color forSortState:(SLSortButtonSortStatus)sortStatus;

@end
