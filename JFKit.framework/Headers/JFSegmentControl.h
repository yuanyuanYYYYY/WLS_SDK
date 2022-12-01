//
//  JFSegmentControl.h
//  SLAppProduct
//
//  Created by AlanWang on 2018/3/14.
//  Copyright © 2018年 Sunline. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol JFSegmentControlDelegate <NSObject>
@optional
- (BOOL)willDidSelectedAtIndex:(NSInteger)index;
- (void)selectControlDidSelectedAtIndex:(NSInteger)index;
@end


@interface JFSegmentControl : UIView

@property (nonatomic, strong) NSArray *titleArray;
@property (nonatomic, strong, readonly) NSArray<UIButton *> *itemArray;

@property (nonatomic, strong) UIView *lineView;

@property (nonatomic, assign) NSInteger selectIndex;

// 为YES时底部滑块等于标题宽度
@property (nonatomic, assign) BOOL equalWidth;

@property (nonatomic,assign) id <JFSegmentControlDelegate> delegate;

- (instancetype)initWithFrame:(CGRect)frame titleArray:(NSArray *)titleArray;

@end
